/*******************************************************************************
    Copyright (c) 2016 NVIDIA Corporation

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to
    deal in the Software without restriction, including without limitation the
    rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
    sell copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

        The above copyright notice and this permission notice shall be
        included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
    THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
    FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
    DEALINGS IN THE SOFTWARE.

*******************************************************************************/

/* AUTO GENERATED FILE -- DO NOT EDIT */

#ifndef __CLC3C0QMD_H__
#define __CLC3C0QMD_H__

/*
** Queue Meta Data, Version 02_02
 */

// The below C preprocessor definitions describe "multi-word" structures, where
// fields may have bit numbers beyond 32.  For example, MW(127:96) means
// the field is in bits 0-31 of word number 3 of the structure.  The "MW(X:Y)"
// syntax is to distinguish from similar "X:Y" single-word definitions: the
// macros historically used for single-word definitions would fail with
// multi-word definitions.
//
// See nvmisc.h:DRF_VAL_MW() in the source code of the kernel
// interface layer of nvidia.ko for an example of how to manipulate
// these MW(X:Y) definitions.

#define NVC3C0_QMDV02_02_OUTER_PUT                                 MW(30:0)
#define NVC3C0_QMDV02_02_OUTER_OVERFLOW                            MW(31:31)
#define NVC3C0_QMDV02_02_OUTER_GET                                 MW(62:32)
#define NVC3C0_QMDV02_02_OUTER_STICKY_OVERFLOW                     MW(63:63)
#define NVC3C0_QMDV02_02_INNER_GET                                 MW(94:64)
#define NVC3C0_QMDV02_02_INNER_OVERFLOW                            MW(95:95)
#define NVC3C0_QMDV02_02_INNER_PUT                                 MW(126:96)
#define NVC3C0_QMDV02_02_INNER_STICKY_OVERFLOW                     MW(127:127)
#define NVC3C0_QMDV02_02_QMD_GROUP_ID                              MW(133:128)
#define NVC3C0_QMDV02_02_SM_GLOBAL_CACHING_ENABLE                  MW(134:134)
#define NVC3C0_QMDV02_02_RUN_CTA_IN_ONE_SM_PARTITION               MW(135:135)
#define NVC3C0_QMDV02_02_RUN_CTA_IN_ONE_SM_PARTITION_FALSE         0x00000000
#define NVC3C0_QMDV02_02_RUN_CTA_IN_ONE_SM_PARTITION_TRUE          0x00000001
#define NVC3C0_QMDV02_02_IS_QUEUE                                  MW(136:136)
#define NVC3C0_QMDV02_02_IS_QUEUE_FALSE                            0x00000000
#define NVC3C0_QMDV02_02_IS_QUEUE_TRUE                             0x00000001
#define NVC3C0_QMDV02_02_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST      MW(137:137)
#define NVC3C0_QMDV02_02_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST_FALSE 0x00000000
#define NVC3C0_QMDV02_02_ADD_TO_HEAD_OF_QMD_GROUP_LINKED_LIST_TRUE 0x00000001
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE0                 MW(138:138)
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE0_FALSE           0x00000000
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE0_TRUE            0x00000001
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE1                 MW(139:139)
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE1_FALSE           0x00000000
#define NVC3C0_QMDV02_02_SEMAPHORE_RELEASE_ENABLE1_TRUE            0x00000001
#define NVC3C0_QMDV02_02_REQUIRE_SCHEDULING_PCAS                   MW(140:140)
#define NVC3C0_QMDV02_02_REQUIRE_SCHEDULING_PCAS_FALSE             0x00000000
#define NVC3C0_QMDV02_02_REQUIRE_SCHEDULING_PCAS_TRUE              0x00000001
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_SCHEDULE_ENABLE             MW(141:141)
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_SCHEDULE_ENABLE_FALSE       0x00000000
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_SCHEDULE_ENABLE_TRUE        0x00000001
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_TYPE                        MW(142:142)
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_TYPE_QUEUE                  0x00000000
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_TYPE_GRID                   0x00000001
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_FIELD_COPY                  MW(143:143)
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_FIELD_COPY_FALSE            0x00000000
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_FIELD_COPY_TRUE             0x00000001
#define NVC3C0_QMDV02_02_QMD_RESERVED_B                            MW(159:144)
#define NVC3C0_QMDV02_02_CIRCULAR_QUEUE_SIZE                       MW(184:160)
#define NVC3C0_QMDV02_02_QMD_RESERVED_C                            MW(185:185)
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_HEADER_CACHE           MW(186:186)
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_HEADER_CACHE_FALSE     0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_HEADER_CACHE_TRUE      0x00000001
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_SAMPLER_CACHE          MW(187:187)
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_SAMPLER_CACHE_FALSE    0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_SAMPLER_CACHE_TRUE     0x00000001
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_DATA_CACHE             MW(188:188)
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_DATA_CACHE_FALSE       0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_TEXTURE_DATA_CACHE_TRUE        0x00000001
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_DATA_CACHE              MW(189:189)
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_DATA_CACHE_FALSE        0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_DATA_CACHE_TRUE         0x00000001
#define NVC3C0_QMDV02_02_INVALIDATE_INSTRUCTION_CACHE              MW(190:190)
#define NVC3C0_QMDV02_02_INVALIDATE_INSTRUCTION_CACHE_FALSE        0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_INSTRUCTION_CACHE_TRUE         0x00000001
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_CONSTANT_CACHE          MW(191:191)
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_CONSTANT_CACHE_FALSE    0x00000000
#define NVC3C0_QMDV02_02_INVALIDATE_SHADER_CONSTANT_CACHE_TRUE     0x00000001
#define NVC3C0_QMDV02_02_CTA_RASTER_WIDTH_RESUME                   MW(223:192)
#define NVC3C0_QMDV02_02_CTA_RASTER_HEIGHT_RESUME                  MW(239:224)
#define NVC3C0_QMDV02_02_CTA_RASTER_DEPTH_RESUME                   MW(255:240)
#define NVC3C0_QMDV02_02_PROGRAM_OFFSET                            MW(287:256)
#define NVC3C0_QMDV02_02_CIRCULAR_QUEUE_ADDR_LOWER                 MW(319:288)
#define NVC3C0_QMDV02_02_CIRCULAR_QUEUE_ADDR_UPPER                 MW(327:320)
#define NVC3C0_QMDV02_02_QMD_RESERVED_D                            MW(335:328)
#define NVC3C0_QMDV02_02_CIRCULAR_QUEUE_ENTRY_SIZE                 MW(351:336)
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_ID                    MW(357:352)
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_DELTA_MINUS_ONE       MW(365:358)
#define NVC3C0_QMDV02_02_RELEASE_MEMBAR_TYPE                       MW(366:366)
#define NVC3C0_QMDV02_02_RELEASE_MEMBAR_TYPE_FE_NONE               0x00000000
#define NVC3C0_QMDV02_02_RELEASE_MEMBAR_TYPE_FE_SYSMEMBAR          0x00000001
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_INCR_ENABLE           MW(367:367)
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_INCR_ENABLE_FALSE     0x00000000
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_INCR_ENABLE_TRUE      0x00000001
#define NVC3C0_QMDV02_02_CWD_MEMBAR_TYPE                           MW(369:368)
#define NVC3C0_QMDV02_02_CWD_MEMBAR_TYPE_L1_NONE                   0x00000000
#define NVC3C0_QMDV02_02_CWD_MEMBAR_TYPE_L1_SYSMEMBAR              0x00000001
#define NVC3C0_QMDV02_02_CWD_MEMBAR_TYPE_L1_MEMBAR                 0x00000003
#define NVC3C0_QMDV02_02_SEQUENTIALLY_RUN_CTAS                     MW(370:370)
#define NVC3C0_QMDV02_02_SEQUENTIALLY_RUN_CTAS_FALSE               0x00000000
#define NVC3C0_QMDV02_02_SEQUENTIALLY_RUN_CTAS_TRUE                0x00000001
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_DECR_ENABLE           MW(371:371)
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_DECR_ENABLE_FALSE     0x00000000
#define NVC3C0_QMDV02_02_CWD_REFERENCE_COUNT_DECR_ENABLE_TRUE      0x00000001
#define NVC3C0_QMDV02_02_API_VISIBLE_CALL_LIMIT                    MW(378:378)
#define NVC3C0_QMDV02_02_API_VISIBLE_CALL_LIMIT__32                0x00000000
#define NVC3C0_QMDV02_02_API_VISIBLE_CALL_LIMIT_NO_CHECK           0x00000001
#define NVC3C0_QMDV02_02_SAMPLER_INDEX                             MW(382:382)
#define NVC3C0_QMDV02_02_SAMPLER_INDEX_INDEPENDENTLY               0x00000000
#define NVC3C0_QMDV02_02_SAMPLER_INDEX_VIA_HEADER_INDEX            0x00000001
#define NVC3C0_QMDV02_02_CTA_RASTER_WIDTH                          MW(415:384)
#define NVC3C0_QMDV02_02_CTA_RASTER_HEIGHT                         MW(431:416)
#define NVC3C0_QMDV02_02_QMD_RESERVED13A                           MW(447:432)
#define NVC3C0_QMDV02_02_CTA_RASTER_DEPTH                          MW(463:448)
#define NVC3C0_QMDV02_02_QMD_RESERVED14A                           MW(479:464)
#define NVC3C0_QMDV02_02_DEPENDENT_QMD_POINTER                     MW(511:480)
#define NVC3C0_QMDV02_02_QUEUE_ENTRIES_PER_CTA_MINUS_ONE           MW(518:512)
#define NVC3C0_QMDV02_02_COALESCE_WAITING_PERIOD                   MW(529:522)
#define NVC3C0_QMDV02_02_SHARED_MEMORY_SIZE                        MW(561:544)
#define NVC3C0_QMDV02_02_MIN_SM_CONFIG_SHARED_MEM_SIZE             MW(568:562)
#define NVC3C0_QMDV02_02_MAX_SM_CONFIG_SHARED_MEM_SIZE             MW(575:569)
#define NVC3C0_QMDV02_02_QMD_VERSION                               MW(579:576)
#define NVC3C0_QMDV02_02_QMD_MAJOR_VERSION                         MW(583:580)
#define NVC3C0_QMDV02_02_QMD_RESERVED_H                            MW(591:584)
#define NVC3C0_QMDV02_02_CTA_THREAD_DIMENSION0                     MW(607:592)
#define NVC3C0_QMDV02_02_CTA_THREAD_DIMENSION1                     MW(623:608)
#define NVC3C0_QMDV02_02_CTA_THREAD_DIMENSION2                     MW(639:624)
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_VALID(i)                  MW((640+(i)*1):(640+(i)*1))
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_VALID_FALSE               0x00000000
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_VALID_TRUE                0x00000001
#define NVC3C0_QMDV02_02_REGISTER_COUNT_V                          MW(656:648)
#define NVC3C0_QMDV02_02_TARGET_SM_CONFIG_SHARED_MEM_SIZE          MW(663:657)
#define NVC3C0_QMDV02_02_FREE_CTA_SLOTS_EMPTY_SM                   MW(671:664)
#define NVC3C0_QMDV02_02_SM_DISABLE_MASK_LOWER                     MW(703:672)
#define NVC3C0_QMDV02_02_SM_DISABLE_MASK_UPPER                     MW(735:704)
#define NVC3C0_QMDV02_02_RELEASE0_ADDRESS_LOWER                    MW(767:736)
#define NVC3C0_QMDV02_02_RELEASE0_ADDRESS_UPPER                    MW(775:768)
#define NVC3C0_QMDV02_02_QMD_RESERVED_J                            MW(783:776)
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP                     MW(790:788)
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_ADD             0x00000000
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_MIN             0x00000001
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_MAX             0x00000002
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_INC             0x00000003
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_DEC             0x00000004
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_AND             0x00000005
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_OR              0x00000006
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_OP_RED_XOR             0x00000007
#define NVC3C0_QMDV02_02_QMD_RESERVED_K                            MW(791:791)
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_FORMAT                 MW(793:792)
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_ENABLE                 MW(794:794)
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_ENABLE_FALSE           0x00000000
#define NVC3C0_QMDV02_02_RELEASE0_REDUCTION_ENABLE_TRUE            0x00000001
#define NVC3C0_QMDV02_02_RELEASE0_STRUCTURE_SIZE                   MW(799:799)
#define NVC3C0_QMDV02_02_RELEASE0_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVC3C0_QMDV02_02_RELEASE0_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVC3C0_QMDV02_02_RELEASE0_PAYLOAD                          MW(831:800)
#define NVC3C0_QMDV02_02_RELEASE1_ADDRESS_LOWER                    MW(863:832)
#define NVC3C0_QMDV02_02_RELEASE1_ADDRESS_UPPER                    MW(871:864)
#define NVC3C0_QMDV02_02_QMD_RESERVED_L                            MW(879:872)
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP                     MW(886:884)
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_ADD             0x00000000
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_MIN             0x00000001
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_MAX             0x00000002
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_INC             0x00000003
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_DEC             0x00000004
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_AND             0x00000005
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_OR              0x00000006
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_OP_RED_XOR             0x00000007
#define NVC3C0_QMDV02_02_QMD_RESERVED_M                            MW(887:887)
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_FORMAT                 MW(889:888)
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_FORMAT_UNSIGNED_32     0x00000000
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_FORMAT_SIGNED_32       0x00000001
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_ENABLE                 MW(890:890)
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_ENABLE_FALSE           0x00000000
#define NVC3C0_QMDV02_02_RELEASE1_REDUCTION_ENABLE_TRUE            0x00000001
#define NVC3C0_QMDV02_02_RELEASE1_STRUCTURE_SIZE                   MW(895:895)
#define NVC3C0_QMDV02_02_RELEASE1_STRUCTURE_SIZE_FOUR_WORDS        0x00000000
#define NVC3C0_QMDV02_02_RELEASE1_STRUCTURE_SIZE_ONE_WORD          0x00000001
#define NVC3C0_QMDV02_02_RELEASE1_PAYLOAD                          MW(927:896)
#define NVC3C0_QMDV02_02_SHADER_LOCAL_MEMORY_LOW_SIZE              MW(951:928)
#define NVC3C0_QMDV02_02_QMD_RESERVED_N                            MW(954:952)
#define NVC3C0_QMDV02_02_BARRIER_COUNT                             MW(959:955)
#define NVC3C0_QMDV02_02_SHADER_LOCAL_MEMORY_HIGH_SIZE             MW(983:960)
#define NVC3C0_QMDV02_02_REGISTER_COUNT                            MW(991:984)
#define NVC3C0_QMDV02_02_SHADER_LOCAL_MEMORY_CRS_SIZE              MW(1015:992)
#define NVC3C0_QMDV02_02_SASS_VERSION                              MW(1023:1016)
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_ADDR_LOWER(i)             MW((1055+(i)*64):(1024+(i)*64))
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_ADDR_UPPER(i)             MW((1072+(i)*64):(1056+(i)*64))
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_RESERVED_ADDR(i)          MW((1073+(i)*64):(1073+(i)*64))
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_INVALIDATE(i)             MW((1074+(i)*64):(1074+(i)*64))
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_INVALIDATE_FALSE          0x00000000
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_INVALIDATE_TRUE           0x00000001
#define NVC3C0_QMDV02_02_CONSTANT_BUFFER_SIZE_SHIFTED4(i)          MW((1087+(i)*64):(1075+(i)*64))
#define NVC3C0_QMDV02_02_PROGRAM_ADDRESS_LOWER                     MW(1567:1536)
#define NVC3C0_QMDV02_02_PROGRAM_ADDRESS_UPPER                     MW(1584:1568)
#define NVC3C0_QMDV02_02_QMD_RESERVED_S                            MW(1599:1585)
#define NVC3C0_QMDV02_02_HW_ONLY_INNER_GET                         MW(1630:1600)
#define NVC3C0_QMDV02_02_HW_ONLY_REQUIRE_SCHEDULING_PCAS           MW(1631:1631)
#define NVC3C0_QMDV02_02_HW_ONLY_INNER_PUT                         MW(1662:1632)
#define NVC3C0_QMDV02_02_HW_ONLY_SCG_TYPE                          MW(1663:1663)
#define NVC3C0_QMDV02_02_HW_ONLY_SPAN_LIST_HEAD_INDEX              MW(1693:1664)
#define NVC3C0_QMDV02_02_QMD_RESERVED_Q                            MW(1694:1694)
#define NVC3C0_QMDV02_02_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID        MW(1695:1695)
#define NVC3C0_QMDV02_02_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID_FALSE  0x00000000
#define NVC3C0_QMDV02_02_HW_ONLY_SPAN_LIST_HEAD_INDEX_VALID_TRUE   0x00000001
#define NVC3C0_QMDV02_02_HW_ONLY_SKED_NEXT_QMD_POINTER             MW(1727:1696)
#define NVC3C0_QMDV02_02_QMD_SPARE_G                               MW(1759:1728)
#define NVC3C0_QMDV02_02_QMD_SPARE_H                               MW(1791:1760)
#define NVC3C0_QMDV02_02_QMD_SPARE_I                               MW(1823:1792)
#define NVC3C0_QMDV02_02_QMD_SPARE_J                               MW(1855:1824)
#define NVC3C0_QMDV02_02_QMD_SPARE_K                               MW(1887:1856)
#define NVC3C0_QMDV02_02_QMD_SPARE_L                               MW(1919:1888)
#define NVC3C0_QMDV02_02_QMD_SPARE_M                               MW(1951:1920)
#define NVC3C0_QMDV02_02_QMD_SPARE_N                               MW(1983:1952)
#define NVC3C0_QMDV02_02_DEBUG_ID_UPPER                            MW(2015:1984)
#define NVC3C0_QMDV02_02_DEBUG_ID_LOWER                            MW(2047:2016)



#endif // #ifndef __CLC3C0QMD_H__