/* This file was generated by upb_generator from the input file:
 *
 *     xds/core/v3/extension.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_CORE_V3_EXTENSION_PROTO_UPB_H_
#define XDS_CORE_V3_EXTENSION_PROTO_UPB_H_

#include "upb/generated_code_support.h"

#include "xds/core/v3/extension.upb_minitable.h"

#include "validate/validate.upb_minitable.h"
#include "google/protobuf/any.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct xds_core_v3_TypedExtensionConfig xds_core_v3_TypedExtensionConfig;
struct google_protobuf_Any;



/* xds.core.v3.TypedExtensionConfig */

UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_new(upb_Arena* arena) {
  return (xds_core_v3_TypedExtensionConfig*)_upb_Message_New(&xds__core__v3__TypedExtensionConfig_msg_init, arena);
}
UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_core_v3_TypedExtensionConfig* ret = xds_core_v3_TypedExtensionConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__core__v3__TypedExtensionConfig_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_core_v3_TypedExtensionConfig* xds_core_v3_TypedExtensionConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_core_v3_TypedExtensionConfig* ret = xds_core_v3_TypedExtensionConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__core__v3__TypedExtensionConfig_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_core_v3_TypedExtensionConfig_serialize(const xds_core_v3_TypedExtensionConfig* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__core__v3__TypedExtensionConfig_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_core_v3_TypedExtensionConfig_serialize_ex(const xds_core_v3_TypedExtensionConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__core__v3__TypedExtensionConfig_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_clear_name(xds_core_v3_TypedExtensionConfig* msg) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_core_v3_TypedExtensionConfig_name(const xds_core_v3_TypedExtensionConfig* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_clear_typed_config(xds_core_v3_TypedExtensionConfig* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct google_protobuf_Any* xds_core_v3_TypedExtensionConfig_typed_config(const xds_core_v3_TypedExtensionConfig* msg) {
  const struct google_protobuf_Any* default_val = NULL;
  const struct google_protobuf_Any* ret;
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool xds_core_v3_TypedExtensionConfig_has_typed_config(const xds_core_v3_TypedExtensionConfig* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}

UPB_INLINE void xds_core_v3_TypedExtensionConfig_set_name(xds_core_v3_TypedExtensionConfig *msg, upb_StringView value) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void xds_core_v3_TypedExtensionConfig_set_typed_config(xds_core_v3_TypedExtensionConfig *msg, struct google_protobuf_Any* value) {
  const upb_MiniTableField field = {2, UPB_SIZE(4, 24), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct google_protobuf_Any* xds_core_v3_TypedExtensionConfig_mutable_typed_config(xds_core_v3_TypedExtensionConfig* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)xds_core_v3_TypedExtensionConfig_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google__protobuf__Any_msg_init, arena);
    if (sub) xds_core_v3_TypedExtensionConfig_set_typed_config(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* XDS_CORE_V3_EXTENSION_PROTO_UPB_H_ */
