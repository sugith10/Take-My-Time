/* This file was generated by upb_generator from the input file:
 *
 *     google/api/expr/v1alpha1/syntax.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#include "upb/generated_code_support.h"
#include "google/api/expr/v1alpha1/syntax.upb_minitable.h"
#include "google/protobuf/duration.upb_minitable.h"
#include "google/protobuf/struct.upb_minitable.h"
#include "google/protobuf/timestamp.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

static const upb_MiniTableSub google_api_expr_v1alpha1_ParsedExpr_submsgs[2] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__SourceInfo_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_ParsedExpr__fields[2] = {
  {2, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 16), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__ParsedExpr_msg_init = {
  &google_api_expr_v1alpha1_ParsedExpr_submsgs[0],
  &google_api_expr_v1alpha1_ParsedExpr__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0008000001000012, &upb_psm_1bt_max64b},
    {0x001000000201001a, &upb_psm_1bt_max64b},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_submsgs[7] = {
  {.submsg = &google__api__expr__v1alpha1__Constant_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__Ident_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__Select_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__Call_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__CreateList_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__CreateStruct_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr__Comprehension_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr__fields[8] = {
  {2, 8, 0, kUpb_NoSub, 3, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(4, 16), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 16), -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(4, 16), -1, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(4, 16), -1, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(4, 16), -1, 4, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {8, UPB_SIZE(4, 16), -1, 5, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {9, UPB_SIZE(4, 16), -1, 6, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr_msg_init = {
  &google_api_expr_v1alpha1_Expr_submsgs[0],
  &google_api_expr_v1alpha1_Expr__fields[0],
  UPB_SIZE(16, 24), 8, kUpb_ExtMode_NonExtendable, 0, UPB_FASTTABLE_MASK(120), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f000010, &upb_psv8_1bt},
    {0x001000000300001a, &upb_pom_1bt_max64b},
    {0x0010000004010022, &upb_pom_1bt_max64b},
    {0x001000000502002a, &upb_pom_1bt_max64b},
    {0x0010000006030032, &upb_pom_1bt_max64b},
    {0x001000000704003a, &upb_pom_1bt_max64b},
    {0x0010000008050042, &upb_pom_1bt_max64b},
    {0x001000000906004a, &upb_pom_1bt_max128b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_Ident__fields[1] = {
  {1, 0, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__Ident_msg_init = {
  NULL,
  &google_api_expr_v1alpha1_Expr_Ident__fields[0],
  UPB_SIZE(8, 16), 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_Select_submsgs[1] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_Select__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 1), 0, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__Select_msg_init = {
  &google_api_expr_v1alpha1_Expr_Select_submsgs[0],
  &google_api_expr_v1alpha1_Expr_Select__fields[0],
  UPB_SIZE(24, 32), 3, kUpb_ExtMode_NonExtendable, 3, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_max64b},
    {0x001000003f000012, &upb_pss_1bt},
    {0x000100003f000018, &upb_psb1_1bt},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_Call_submsgs[2] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_Call__fields[3] = {
  {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(8, 32), 0, 1, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__Call_msg_init = {
  &google_api_expr_v1alpha1_Expr_Call_submsgs[0],
  &google_api_expr_v1alpha1_Expr_Call__fields[0],
  UPB_SIZE(24, 40), 3, kUpb_ExtMode_NonExtendable, 3, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800000100000a, &upb_psm_1bt_max64b},
    {0x001000003f000012, &upb_pss_1bt},
    {0x002000003f01001a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_CreateList_submsgs[1] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_CreateList__fields[1] = {
  {1, 0, 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__CreateList_msg_init = {
  &google_api_expr_v1alpha1_Expr_CreateList_submsgs[0],
  &google_api_expr_v1alpha1_Expr_CreateList__fields[0],
  8, 1, kUpb_ExtMode_NonExtendable, 1, UPB_FASTTABLE_MASK(8), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_prm_1bt_max64b},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_CreateStruct_submsgs[1] = {
  {.submsg = &google__api__expr__v1alpha1__Expr__CreateStruct__Entry_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_CreateStruct__fields[2] = {
  {1, UPB_SIZE(4, 0), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(0, 16), 0, 0, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__CreateStruct_msg_init = {
  &google_api_expr_v1alpha1_Expr_CreateStruct_submsgs[0],
  &google_api_expr_v1alpha1_Expr_CreateStruct__fields[0],
  UPB_SIZE(16, 24), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
    {0x001000003f000012, &upb_prm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_CreateStruct_Entry_submsgs[2] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_CreateStruct_Entry__fields[4] = {
  {1, 24, 0, kUpb_NoSub, 3, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(12, 8), -5, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(12, 8), -5, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(8, 32), 1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__CreateStruct__Entry_msg_init = {
  &google_api_expr_v1alpha1_Expr_CreateStruct_Entry_submsgs[0],
  &google_api_expr_v1alpha1_Expr_CreateStruct_Entry__fields[0],
  UPB_SIZE(32, 40), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001800003f000008, &upb_psv8_1bt},
    {0x0008000402000012, &upb_pos_1bt},
    {0x000800040300001a, &upb_pom_1bt_max64b},
    {0x0020000001010022, &upb_psm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Expr_Comprehension_submsgs[5] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Expr_Comprehension__fields[7] = {
  {1, UPB_SIZE(24, 8), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {3, 32, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(8, 48), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(12, 56), 3, 2, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {6, UPB_SIZE(16, 64), 4, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {7, UPB_SIZE(20, 72), 5, 4, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Expr__Comprehension_msg_init = {
  &google_api_expr_v1alpha1_Expr_Comprehension_submsgs[0],
  &google_api_expr_v1alpha1_Expr_Comprehension__fields[0],
  UPB_SIZE(40, 80), 7, kUpb_ExtMode_NonExtendable, 7, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f00000a, &upb_pss_1bt},
    {0x0018000001000012, &upb_psm_1bt_max64b},
    {0x002000003f00001a, &upb_pss_1bt},
    {0x0030000002010022, &upb_psm_1bt_max64b},
    {0x003800000302002a, &upb_psm_1bt_max64b},
    {0x0040000004030032, &upb_psm_1bt_max64b},
    {0x004800000504003a, &upb_psm_1bt_max64b},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_Constant_submsgs[2] = {
  {.submsg = &google__protobuf__Duration_msg_init},
  {.submsg = &google__protobuf__Timestamp_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_Constant__fields[9] = {
  {1, 8, -1, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | (int)kUpb_LabelFlags_IsAlternate | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {2, 8, -1, kUpb_NoSub, 8, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_1Byte << kUpb_FieldRep_Shift)},
  {3, 8, -1, kUpb_NoSub, 3, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {4, 8, -1, kUpb_NoSub, 4, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {5, 8, -1, kUpb_NoSub, 1, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {6, 8, -1, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {7, 8, -1, kUpb_NoSub, 12, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {8, 8, -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {9, 8, -1, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__Constant_msg_init = {
  &google_api_expr_v1alpha1_Constant_submsgs[0],
  &google_api_expr_v1alpha1_Constant__fields[0],
  UPB_SIZE(16, 24), 9, kUpb_ExtMode_NonExtendable, 9, UPB_FASTTABLE_MASK(120), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0008000001000008, &upb_pov4_1bt},
    {0x0008000002000010, &upb_pob1_1bt},
    {0x0008000003000018, &upb_pov8_1bt},
    {0x0008000004000020, &upb_pov8_1bt},
    {0x0008000005000029, &upb_pof8_1bt},
    {0x0008000006000032, &upb_pos_1bt},
    {0x000800000700003a, &upb_pob_1bt},
    {0x0008000008000042, &upb_pom_1bt_maxmaxb},
    {0x000800000901004a, &upb_pom_1bt_maxmaxb},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_SourceInfo_submsgs[2] = {
  {.submsg = &google__api__expr__v1alpha1__SourceInfo__PositionsEntry_msg_init},
  {.submsg = &google__api__expr__v1alpha1__SourceInfo__MacroCallsEntry_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_SourceInfo__fields[5] = {
  {1, UPB_SIZE(12, 0), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(20, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {3, UPB_SIZE(0, 32), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Array | (int)kUpb_LabelFlags_IsPacked | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {4, UPB_SIZE(4, 40), 0, 0, 11, (int)kUpb_FieldMode_Map | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
  {5, UPB_SIZE(8, 48), 0, 1, 11, (int)kUpb_FieldMode_Map | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__SourceInfo_msg_init = {
  &google_api_expr_v1alpha1_SourceInfo_submsgs[0],
  &google_api_expr_v1alpha1_SourceInfo__fields[0],
  UPB_SIZE(32, 56), 5, kUpb_ExtMode_NonExtendable, 5, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000000003f00000a, &upb_pss_1bt},
    {0x001000003f000012, &upb_pss_1bt},
    {0x002000003f00001a, &upb_ppv4_1bt},
  })
};

static const upb_MiniTableField google_api_expr_v1alpha1_SourceInfo_PositionsEntry__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 3, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__SourceInfo__PositionsEntry_msg_init = {
  NULL,
  &google_api_expr_v1alpha1_SourceInfo_PositionsEntry__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f000008, &upb_psv8_1bt},
    {0x001800003f000010, &upb_psv4_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableSub google_api_expr_v1alpha1_SourceInfo_MacroCallsEntry_submsgs[1] = {
  {.submsg = &google__api__expr__v1alpha1__Expr_msg_init},
};

static const upb_MiniTableField google_api_expr_v1alpha1_SourceInfo_MacroCallsEntry__fields[2] = {
  {1, 8, 0, kUpb_NoSub, 3, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_8Byte << kUpb_FieldRep_Shift)},
  {2, UPB_SIZE(16, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__SourceInfo__MacroCallsEntry_msg_init = {
  &google_api_expr_v1alpha1_SourceInfo_MacroCallsEntry_submsgs[0],
  &google_api_expr_v1alpha1_SourceInfo_MacroCallsEntry__fields[0],
  UPB_SIZE(24, 40), 2, kUpb_ExtMode_NonExtendable, 2, UPB_FASTTABLE_MASK(24), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x000800003f000008, &upb_psv8_1bt},
    {0x0018000001000012, &upb_psm_1bt_max64b},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTableField google_api_expr_v1alpha1_SourcePosition__fields[4] = {
  {1, UPB_SIZE(12, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)},
  {2, 0, 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {3, 4, 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
  {4, 8, 0, kUpb_NoSub, 5, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_4Byte << kUpb_FieldRep_Shift)},
};

const upb_MiniTable google__api__expr__v1alpha1__SourcePosition_msg_init = {
  NULL,
  &google_api_expr_v1alpha1_SourcePosition__fields[0],
  UPB_SIZE(24, 32), 4, kUpb_ExtMode_NonExtendable, 4, UPB_FASTTABLE_MASK(56), 0,
  UPB_FASTTABLE_INIT({
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x001000003f00000a, &upb_pss_1bt},
    {0x000000003f000010, &upb_psv4_1bt},
    {0x000400003f000018, &upb_psv4_1bt},
    {0x000800003f000020, &upb_psv4_1bt},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
    {0x0000000000000000, &_upb_FastDecoder_DecodeGeneric},
  })
};

static const upb_MiniTable *messages_layout[14] = {
  &google__api__expr__v1alpha1__ParsedExpr_msg_init,
  &google__api__expr__v1alpha1__Expr_msg_init,
  &google__api__expr__v1alpha1__Expr__Ident_msg_init,
  &google__api__expr__v1alpha1__Expr__Select_msg_init,
  &google__api__expr__v1alpha1__Expr__Call_msg_init,
  &google__api__expr__v1alpha1__Expr__CreateList_msg_init,
  &google__api__expr__v1alpha1__Expr__CreateStruct_msg_init,
  &google__api__expr__v1alpha1__Expr__CreateStruct__Entry_msg_init,
  &google__api__expr__v1alpha1__Expr__Comprehension_msg_init,
  &google__api__expr__v1alpha1__Constant_msg_init,
  &google__api__expr__v1alpha1__SourceInfo_msg_init,
  &google__api__expr__v1alpha1__SourceInfo__PositionsEntry_msg_init,
  &google__api__expr__v1alpha1__SourceInfo__MacroCallsEntry_msg_init,
  &google__api__expr__v1alpha1__SourcePosition_msg_init,
};

const upb_MiniTableFile google_api_expr_v1alpha1_syntax_proto_upb_file_layout = {
  messages_layout,
  NULL,
  NULL,
  14,
  0,
  0,
};

#include "upb/port/undef.inc"

