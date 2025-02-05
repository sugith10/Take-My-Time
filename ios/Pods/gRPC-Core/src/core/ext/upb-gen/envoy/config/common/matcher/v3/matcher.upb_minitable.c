/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/common/matcher/v3/matcher.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/config/common/matcher/v3/matcher.upb_minitable.h"
#include "envoy/config/core/v3/extension.upb_minitable.h"
#include "envoy/config/route/v3/route_components.upb_minitable.h"
#include "envoy/type/matcher/v3/string.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_submsgs[3] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherTree_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__OnMatch_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher__fields[3] = {
  {1, UPB_SIZE(12, 16), -5, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), -5, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, 8, 1, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher__fields[0],
  UPB_SIZE(16, 24), 3, kUpb_ExtMode_NonExtendable, 3, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000040100000a, &upb_pom_1bt_max64b},
    {0x0010000402010012, &upb_pom_1bt_max64b},
    {0x000800000102001a, &upb_psm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_OnMatch_submsgs[2] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher_msg_init},
  {.submsg = &envoy__config__core__v3__TypedExtensionConfig_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_OnMatch__fields[2] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__OnMatch_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_OnMatch_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_OnMatch__fields[0],
  UPB_SIZE(8, 16), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherList_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__FieldMatcher_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherList__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherList_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_submsgs[4] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__SinglePredicate_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__PredicateList_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__PredicateList_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate__fields[4] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), -1, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), -1, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate__fields[0],
  UPB_SIZE(8, 16), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_max64b},
    {0x000800000302001a, &upb_pom_1bt_max64b},
    {0x0008000004030022, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_submsgs[3] = {
  {.submsg = &envoy__config__core__v3__TypedExtensionConfig_msg_init},
  {.submsg = &envoy__type__matcher__v3__StringMatcher_msg_init},
  {.submsg = &envoy__config__core__v3__TypedExtensionConfig_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), UPB_SIZE(-9, -5), 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 16), UPB_SIZE(-9, -5), 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__SinglePredicate_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_SinglePredicate__fields[0],
  UPB_SIZE(16, 24), 3, kUpb_ExtMode_NonExtendable, 3, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
    {0x0010000402010012, &upb_pom_1bt_maxmaxb},
    {0x001000040302001a, &upb_pom_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__PredicateList_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_Predicate_PredicateList__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_submsgs[2] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__OnMatch_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher__fields[2] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherList__FieldMatcher_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherList_FieldMatcher__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_max64b},
    {0x0010000002010012, &upb_psm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherTree_submsgs[4] = {
  {.submsg = &envoy__config__core__v3__TypedExtensionConfig_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap_msg_init},
  {.submsg = &envoy__config__core__v3__TypedExtensionConfig_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherTree__fields[4] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), UPB_SIZE(-9, -5), 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 16), UPB_SIZE(-9, -5), 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(12, 16), UPB_SIZE(-9, -5), 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherTree_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree__fields[0],
  UPB_SIZE(16, 24), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
    {0x0010000402010012, &upb_pom_1bt_max64b},
    {0x001000040302001a, &upb_pom_1bt_max64b},
    {0x0010000404030022, &upb_pom_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap__MapEntry_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Map | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(255), 0,
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__Matcher__OnMatch_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap__MapEntry_msg_init = {
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry_submsgs[0],
  &envoy_config_common_matcher_v3_Matcher_MatcherTree_MatchMap_MapEntry__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000001000012, &upb_psm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_MatchPredicate_submsgs[9] = {
  {.submsg = &envoy__config__common__matcher__v3__MatchPredicate__MatchSet_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__MatchPredicate__MatchSet_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__MatchPredicate_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpGenericBodyMatch_msg_init},
  {.submsg = &envoy__config__common__matcher__v3__HttpGenericBodyMatch_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_MatchPredicate__fields[10] = {
  {1, UPB_SIZE(4, 8), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 8), -1, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 8), -1, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 8), -1, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 8), -1, 4, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(4, 8), -1, 5, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(4, 8), -1, 6, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(4, 8), -1, 7, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {10, UPB_SIZE(4, 8), -1, 8, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__MatchPredicate_msg_init = {
  &envoy_config_common_matcher_v3_MatchPredicate_submsgs[0],
  &envoy_config_common_matcher_v3_MatchPredicate__fields[0],
  UPB_SIZE(8, 16), 10, kUpb_ExtMode_NonExtendable, 10, UPB_FASTTABLE_MASK(120), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pom_1bt_max64b},
    {0x0008000002010012, &upb_pom_1bt_max64b},
    {0x000800000302001a, &upb_pom_1bt_max64b},
    {0x0008000004000020, &upb_pob1_1bt},
    {0x000800000503002a, &upb_pom_1bt_max64b},
    {0x0008000006040032, &upb_pom_1bt_max64b},
    {0x000800000705003a, &upb_pom_1bt_max64b},
    {0x0008000008060042, &upb_pom_1bt_max64b},
    {0x000800000907004a, &upb_pom_1bt_max64b},
    {0x000800000a080052, &upb_pom_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_MatchPredicate_MatchSet_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__MatchPredicate_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_MatchPredicate_MatchSet__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__MatchPredicate__MatchSet_msg_init = {
  &envoy_config_common_matcher_v3_MatchPredicate_MatchSet_submsgs[0],
  &envoy_config_common_matcher_v3_MatchPredicate_MatchSet__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_HttpHeadersMatch_submsgs[1] = {
  {.submsg = &envoy__config__route__v3__HeaderMatcher_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_HttpHeadersMatch__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init = {
  &envoy_config_common_matcher_v3_HttpHeadersMatch_submsgs[0],
  &envoy_config_common_matcher_v3_HttpHeadersMatch__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_maxmaxb},
  })
};

static const upb_MiniTableSub envoy_config_common_matcher_v3_HttpGenericBodyMatch_submsgs[1] = {
  {.submsg = &envoy__config__common__matcher__v3__HttpGenericBodyMatch__GenericTextMatch_msg_init},
};

static const upb_MiniTableField envoy_config_common_matcher_v3_HttpGenericBodyMatch__fields[2] = {
  {1, 0, 0, kUpb_NoSub, 13, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__HttpGenericBodyMatch_msg_init = {
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_submsgs[0],
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch__fields[0],
  UPB_SIZE(8, 16), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000008, &upb_psv4_1bt},
    {0x000800003f000012, &upb_prm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch__fields[2] = {
  {1, UPB_SIZE(4, 8), -1, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 8), -1, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__common__matcher__v3__HttpGenericBodyMatch__GenericTextMatch_msg_init = {
  NULL,
  &envoy_config_common_matcher_v3_HttpGenericBodyMatch_GenericTextMatch__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_pos_1bt},
    {0x0008000002000012, &upb_pob_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[15] = {
  &envoy__config__common__matcher__v3__Matcher_msg_init,
  &envoy__config__common__matcher__v3__Matcher__OnMatch_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherList_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__SinglePredicate_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherList__Predicate__PredicateList_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherList__FieldMatcher_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherTree_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap_msg_init,
  &envoy__config__common__matcher__v3__Matcher__MatcherTree__MatchMap__MapEntry_msg_init,
  &envoy__config__common__matcher__v3__MatchPredicate_msg_init,
  &envoy__config__common__matcher__v3__MatchPredicate__MatchSet_msg_init,
  &envoy__config__common__matcher__v3__HttpHeadersMatch_msg_init,
  &envoy__config__common__matcher__v3__HttpGenericBodyMatch_msg_init,
  &envoy__config__common__matcher__v3__HttpGenericBodyMatch__GenericTextMatch_msg_init,
};

const upb_MiniTableFile envoy_config_common_matcher_v3_matcher_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  15,
  0,
  0,
};

#include "upb/port/undef.inc"

