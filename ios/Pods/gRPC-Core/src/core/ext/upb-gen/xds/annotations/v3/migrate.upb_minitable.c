/* This file was generated by upb_generator from the input file:
 *
 *     xds/annotations/v3/migrate.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "xds/annotations/v3/migrate.upb_minitable.h"
#include "google/protobuf/descriptor.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableField xds_annotations_v3_MigrateAnnotation__fields[1] = {
  {1, 0, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__annotations__v3__MigrateAnnotation_msg_init = {
  NULL,
  &xds_annotations_v3_MigrateAnnotation__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
  })
};

static const upb_MiniTableField xds_annotations_v3_FieldMigrateAnnotation__fields[2] = {
  {1, 0, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(8, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__annotations__v3__FieldMigrateAnnotation_msg_init = {
  NULL,
  &xds_annotations_v3_FieldMigrateAnnotation__fields[0],
  UPB_SIZE(16, 32), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
    {0x001000003f000012, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField xds_annotations_v3_FileMigrateAnnotation__fields[1] = {
  {2, 0, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable xds__annotations__v3__FileMigrateAnnotation_msg_init = {
  NULL,
  &xds_annotations_v3_FileMigrateAnnotation__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f000012, &upb_pss_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[3] = {
  &xds__annotations__v3__MigrateAnnotation_msg_init,
  &xds__annotations__v3__FieldMigrateAnnotation_msg_init,
  &xds__annotations__v3__FileMigrateAnnotation_msg_init,
};

const upb_MiniTableExtension xds_annotations_v3_message_migrate_ext = {
  {112948430, 0, 0, 0, 11, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsExtension | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google__protobuf__MessageOptions_msg_init,
  {.submsg = &xds__annotations__v3__MigrateAnnotation_msg_init},

};
const upb_MiniTableExtension xds_annotations_v3_field_migrate_ext = {
  {112948430, 0, 0, 0, 11, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsExtension | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google__protobuf__FieldOptions_msg_init,
  {.submsg = &xds__annotations__v3__FieldMigrateAnnotation_msg_init},

};
const upb_MiniTableExtension xds_annotations_v3_enum_migrate_ext = {
  {112948430, 0, 0, 0, 11, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsExtension | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google__protobuf__EnumOptions_msg_init,
  {.submsg = &xds__annotations__v3__MigrateAnnotation_msg_init},

};
const upb_MiniTableExtension xds_annotations_v3_enum_value_migrate_ext = {
  {112948430, 0, 0, 0, 11, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsExtension | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google__protobuf__EnumValueOptions_msg_init,
  {.submsg = &xds__annotations__v3__MigrateAnnotation_msg_init},

};
const upb_MiniTableExtension xds_annotations_v3_file_migrate_ext = {
  {112948430, 0, 0, 0, 11, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsExtension | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  &google__protobuf__FileOptions_msg_init,
  {.submsg = &xds__annotations__v3__FileMigrateAnnotation_msg_init},

};

static const upb_MiniTableExtension *extensions_layout[5] = {
  &xds_annotations_v3_message_migrate_ext,
  &xds_annotations_v3_field_migrate_ext,
  &xds_annotations_v3_enum_migrate_ext,
  &xds_annotations_v3_enum_value_migrate_ext,
  &xds_annotations_v3_file_migrate_ext,
};

const upb_MiniTableFile xds_annotations_v3_migrate_proto_upb_file_layout = {
  messages_layout,
  NULL,
  extensions_layout,
  3,
  0,
  5,
};

#include "upb/port/undef.inc"

