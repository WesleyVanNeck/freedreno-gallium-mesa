#include "nvk_cmd_pool.h"

#include "nvk_device.h"
#include "nvk_physical_device.h"

static VkResult
nvk_cmd_bo_create(struct nvk_cmd_pool *pool, struct nvk_cmd_bo **bo_out)
{
   struct nvk_device *dev = nvk_cmd_pool_device(pool);
   struct nvk_cmd_bo *bo;

   bo = vk_zalloc(&pool->vk.alloc, sizeof(*bo), 8,
                  VK_SYSTEM_ALLOCATION_SCOPE_OBJECT);
   if (bo == NULL)
      return vk_error(pool, VK_ERROR_OUT_OF_HOST_MEMORY);

   uint32_t flags = NOUVEAU_WS_BO_GART | NOUVEAU_WS_BO_MAP;
   bo->bo = nouveau_ws_bo_new_mapped(dev->pdev->dev, NVK_CMD_BO_SIZE, 0,
                                     flags, NOUVEAU_WS_BO_WR, &bo->map);
   if (bo->bo == NULL) {
      vk_free(&pool->vk.alloc, bo);
      return vk_error(pool, VK_ERROR_OUT_OF_DEVICE_MEMORY);
   }

   *bo_out = bo;
   return VK_SUCCESS;
}

static void
nvk_cmd_bo_destroy(struct nvk_cmd_pool *pool, struct nvk_cmd_bo *bo)
{
   nouveau_ws_bo_unmap(bo->bo, bo->map);
   nouveau_ws_bo_destroy(bo->bo);
   vk_free(&pool->vk.alloc, bo);
}

VKAPI_ATTR VkResult VKAPI_CALL
nvk_CreateCommandPool(VkDevice _device,
                      const VkCommandPoolCreateInfo *pCreateInfo,
                      const VkAllocationCallbacks *pAllocator,
                      VkCommandPool *pCmdPool)
{
   VK_FROM_HANDLE(nvk_device, device, _device);
   struct nvk_cmd_pool *pool;

   pool = vk_alloc2(&device->vk.alloc, pAllocator, sizeof(*pool), 8,
                    VK_SYSTEM_ALLOCATION_SCOPE_OBJECT);
   if (pool == NULL)
      return vk_error(device, VK_ERROR_OUT_OF_HOST_MEMORY);

   VkResult result = vk_command_pool_init(&device->vk, &pool->vk,
                                          pCreateInfo, pAllocator);
   if (result != VK_SUCCESS) {
      vk_free2(&device->vk.alloc, pAllocator, pool);
      return result;
   }

   list_inithead(&pool->free_bos);

   *pCmdPool = nvk_cmd_pool_to_handle(pool);

   return VK_SUCCESS;
}

static void
nvk_cmd_pool_destroy_bos(struct nvk_cmd_pool *pool)
{
   list_for_each_entry_safe(struct nvk_cmd_bo, bo, &pool->free_bos, link)
      nvk_cmd_bo_destroy(pool, bo);

   list_inithead(&pool->free_bos);
}

VkResult
nvk_cmd_pool_alloc_bo(struct nvk_cmd_pool *pool, struct nvk_cmd_bo **bo_out)
{
   if (!list_is_empty(&pool->free_bos)) {
      struct nvk_cmd_bo *bo =
         list_first_entry(&pool->free_bos, struct nvk_cmd_bo, link);
      list_del(&bo->link);
      *bo_out = bo;
      return VK_SUCCESS;
   }

   return nvk_cmd_bo_create(pool, bo_out);
}

void
nvk_cmd_pool_free_bo_list(struct nvk_cmd_pool *pool, struct list_head *bos)
{
   list_splicetail(bos, &pool->free_bos);
}

VKAPI_ATTR void VKAPI_CALL
nvk_DestroyCommandPool(VkDevice _device,
                       VkCommandPool commandPool,
                       const VkAllocationCallbacks *pAllocator)
{
   VK_FROM_HANDLE(nvk_device, device, _device);
   VK_FROM_HANDLE(nvk_cmd_pool, pool, commandPool);

   if (!pool)
      return;

   nvk_cmd_pool_destroy_bos(pool);
   vk_command_pool_finish(&pool->vk);
   vk_free2(&device->vk.alloc, pAllocator, pool);
}

VKAPI_ATTR void VKAPI_CALL
nvk_TrimCommandPool(VkDevice device,
                    VkCommandPool commandPool,
                    VkCommandPoolTrimFlags flags)
{
   VK_FROM_HANDLE(nvk_cmd_pool, pool, commandPool);

   vk_command_pool_trim(&pool->vk, flags);
   nvk_cmd_pool_destroy_bos(pool);
}