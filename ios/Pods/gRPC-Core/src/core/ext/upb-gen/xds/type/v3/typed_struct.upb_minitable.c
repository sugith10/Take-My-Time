/* This file was generated by upb_generator from the input file:
 *
 *     xds/type/v3/typed_struct.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "xds/type/v3/typed_struct.upb_minitable.h"
#include "google/protobuf/struct.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub xds_type_v3_TypedStruct_submsgs[1] = {
  {.submsg = &google__protobuf__Struct_msg_init},
};

static const upb_MiniTableField xds_type_v3_TypedStruct__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__type__v3__TypedStruct_msg_init = {
  &xds_type_v3_TypedStruct_submsgs[0],
  &xds_type_v3_TypedStruct__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000001000012, &upb_psm_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[1] = {
  &xds__type__v3__TypedStruct_msg_init,
};

const upb_MiniTableFile xds_type_v3_typed_struct_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  1,
  0,
  0,
};

#include "upb/port/undef.inc"

