/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/metrics/v3/metrics_service.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "envoy/config/metrics/v3/metrics_service.upb_minitable.h"
#include "envoy/config/core/v3/config_source.upb_minitable.h"
#include "envoy/config/core/v3/grpc_service.upb_minitable.h"
#include "google/protobuf/wrappers.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "udpa/annotations/versioning.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub envoy_config_metrics_v3_MetricsServiceConfig_submsgs[2] = {
  {.submsg = &envoy__config__core__v3__GrpcService_msg_init},
  {.submsg = &google__protobuf__BoolValue_msg_init},
};

static const upb_MiniTableField envoy_config_metrics_v3_MetricsServiceConfig__fields[5] = {
  {1, UPB_SIZE(4, 16), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 24), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 4), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(16, 8), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(20, 12), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable envoy__config__metrics__v3__MetricsServiceConfig_msg_init = {
  &envoy_config_metrics_v3_MetricsServiceConfig_submsgs[0],
  &envoy_config_metrics_v3_MetricsServiceConfig__fields[0],
  UPB_SIZE(24, 32), 5, kUpb_ExtMode_NonExtendable, 5, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000000100000a, &upb_psm_1bt_maxmaxb},
    {0x0018000002010012, &upb_psm_1bt_maxmaxb},
    {0x000400003f000018, &upb_psv4_1bt},
    {0x000800003f000020, &upb_psb1_1bt},
    {0x000c00003f000028, &upb_psv4_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[1] = {
  &envoy__config__metrics__v3__MetricsServiceConfig_msg_init,
};

const upb_MiniTableFile envoy_config_metrics_v3_metrics_service_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port/undef.inc"

