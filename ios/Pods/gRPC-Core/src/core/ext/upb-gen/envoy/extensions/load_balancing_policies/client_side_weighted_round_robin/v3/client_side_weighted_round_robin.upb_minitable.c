/* This file was generated by upb_generator from the input file:
 *
 *     envoy/extensions/load_balancing_policies/client_side_weighted_round_robin/v3/client_side_weighted_round_robin.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/extensions/load_balancing_policies/client_side_weighted_round_robin/v3/client_side_weighted_round_robin.upb_minitable.h"
#include "google/protobuf/duration.upb_minitable.h"
#include "google/protobuf/wrappers.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_submsgs[6] = {
  {.submsg = &google__protobuf__BoolValue_msg_init},
  {.submsg = &google__protobuf__Duration_msg_init},
  {.submsg = &google__protobuf__Duration_msg_init},
  {.submsg = &google__protobuf__Duration_msg_init},
  {.submsg = &google__protobuf__Duration_msg_init},
  {.submsg = &google__protobuf__FloatValue_msg_init},
};

static const upb_MiniTableField envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin__fields[6] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 24), 3, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 32), 4, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 40), 5, 4, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(24, 48), 6, 5, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__extensions__load_0balancing_0policies__client_0side_0weighted_0round_0robin__v3__ClientSideWeightedRoundRobin_msg_init = {
  &envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin_submsgs[0],
  &envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_ClientSideWeightedRoundRobin__fields[0],
  UPB_SIZE(32, 56), 6, kUpb_ExtMode_NonExtendable, 6, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_maxmaxb},
    {0x0010000002010012, &upb_psm_1bt_maxmaxb},
    {0x001800000302001a, &upb_psm_1bt_maxmaxb},
    {0x0020000004030022, &upb_psm_1bt_maxmaxb},
    {0x002800000504002a, &upb_psm_1bt_maxmaxb},
    {0x0030000006050032, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy__extensions__load_0balancing_0policies__client_0side_0weighted_0round_0robin__v3__ClientSideWeightedRoundRobin_msg_init,
};

const upb_MiniTableFile envoy_extensions_load_balancing_policies_client_side_weighted_round_robin_v3_client_side_weighted_round_robin_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port/undef.inc"

