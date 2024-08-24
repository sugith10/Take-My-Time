/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/trace/v3/http_tracer.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_HTTP_TRACER_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_HTTP_TRACER_PROTO_UPB_H_

#include "upb/generated_code_support.h"

#include "envoy/config/trace/v3/http_tracer.upb_minitable.h"

#include "google/protobuf/any.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"
#include "udpa/annotations/versioning.upb_minitable.h"
#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_config_trace_v3_Tracing envoy_config_trace_v3_Tracing;
typedef struct envoy_config_trace_v3_Tracing_Http envoy_config_trace_v3_Tracing_Http;
struct google_protobuf_Any;



/* envoy.config.trace.v3.Tracing */

UPB_INLINE envoy_config_trace_v3_Tracing* envoy_config_trace_v3_Tracing_new(upb_Arena* arena) {
  return (envoy_config_trace_v3_Tracing*)_upb_Message_New(&envoy__config__trace__v3__Tracing_msg_init, arena);
}
UPB_INLINE envoy_config_trace_v3_Tracing* envoy_config_trace_v3_Tracing_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_trace_v3_Tracing* ret = envoy_config_trace_v3_Tracing_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__Tracing_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_trace_v3_Tracing* envoy_config_trace_v3_Tracing_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_trace_v3_Tracing* ret = envoy_config_trace_v3_Tracing_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__Tracing_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_trace_v3_Tracing_serialize(const envoy_config_trace_v3_Tracing* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__Tracing_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_config_trace_v3_Tracing_serialize_ex(const envoy_config_trace_v3_Tracing* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__Tracing_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_config_trace_v3_Tracing_clear_http(envoy_config_trace_v3_Tracing* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const envoy_config_trace_v3_Tracing_Http* envoy_config_trace_v3_Tracing_http(const envoy_config_trace_v3_Tracing* msg) {
  const envoy_config_trace_v3_Tracing_Http* default_val = NULL;
  const envoy_config_trace_v3_Tracing_Http* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_config_trace_v3_Tracing_has_http(const envoy_config_trace_v3_Tracing* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}

UPB_INLINE void envoy_config_trace_v3_Tracing_set_http(envoy_config_trace_v3_Tracing *msg, envoy_config_trace_v3_Tracing_Http* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_trace_v3_Tracing_Http* envoy_config_trace_v3_Tracing_mutable_http(envoy_config_trace_v3_Tracing* msg, upb_Arena* arena) {
  struct envoy_config_trace_v3_Tracing_Http* sub = (struct envoy_config_trace_v3_Tracing_Http*)envoy_config_trace_v3_Tracing_http(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_trace_v3_Tracing_Http*)_upb_Message_New(&envoy__config__trace__v3__Tracing__Http_msg_init, arena);
    if (sub) envoy_config_trace_v3_Tracing_set_http(msg, sub);
  }
  return sub;
}

/* envoy.config.trace.v3.Tracing.Http */

UPB_INLINE envoy_config_trace_v3_Tracing_Http* envoy_config_trace_v3_Tracing_Http_new(upb_Arena* arena) {
  return (envoy_config_trace_v3_Tracing_Http*)_upb_Message_New(&envoy__config__trace__v3__Tracing__Http_msg_init, arena);
}
UPB_INLINE envoy_config_trace_v3_Tracing_Http* envoy_config_trace_v3_Tracing_Http_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_trace_v3_Tracing_Http* ret = envoy_config_trace_v3_Tracing_Http_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__Tracing__Http_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_trace_v3_Tracing_Http* envoy_config_trace_v3_Tracing_Http_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_trace_v3_Tracing_Http* ret = envoy_config_trace_v3_Tracing_Http_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__Tracing__Http_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_trace_v3_Tracing_Http_serialize(const envoy_config_trace_v3_Tracing_Http* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__Tracing__Http_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_config_trace_v3_Tracing_Http_serialize_ex(const envoy_config_trace_v3_Tracing_Http* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__Tracing__Http_msg_init, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  envoy_config_trace_v3_Tracing_Http_config_type_typed_config = 3,
  envoy_config_trace_v3_Tracing_Http_config_type_NOT_SET = 0
} envoy_config_trace_v3_Tracing_Http_config_type_oneofcases;
UPB_INLINE envoy_config_trace_v3_Tracing_Http_config_type_oneofcases envoy_config_trace_v3_Tracing_Http_config_type_case(const envoy_config_trace_v3_Tracing_Http* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (envoy_config_trace_v3_Tracing_Http_config_type_oneofcases)upb_Message_WhichOneofFieldNumber(msg, &field);
}
UPB_INLINE void envoy_config_trace_v3_Tracing_Http_clear_name(envoy_config_trace_v3_Tracing_Http* msg) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView envoy_config_trace_v3_Tracing_Http_name(const envoy_config_trace_v3_Tracing_Http* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void envoy_config_trace_v3_Tracing_Http_clear_typed_config(envoy_config_trace_v3_Tracing_Http* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct google_protobuf_Any* envoy_config_trace_v3_Tracing_Http_typed_config(const envoy_config_trace_v3_Tracing_Http* msg) {
  const struct google_protobuf_Any* default_val = NULL;
  const struct google_protobuf_Any* ret;
  const upb_MiniTableField field = {3, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_config_trace_v3_Tracing_Http_has_typed_config(const envoy_config_trace_v3_Tracing_Http* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}

UPB_INLINE void envoy_config_trace_v3_Tracing_Http_set_name(envoy_config_trace_v3_Tracing_Http *msg, upb_StringView value) {
  const upb_MiniTableField field = {1, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void envoy_config_trace_v3_Tracing_Http_set_typed_config(envoy_config_trace_v3_Tracing_Http *msg, struct google_protobuf_Any* value) {
  const upb_MiniTableField field = {3, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct google_protobuf_Any* envoy_config_trace_v3_Tracing_Http_mutable_typed_config(envoy_config_trace_v3_Tracing_Http* msg, upb_Arena* arena) {
  struct google_protobuf_Any* sub = (struct google_protobuf_Any*)envoy_config_trace_v3_Tracing_Http_typed_config(msg);
  if (sub == NULL) {
    sub = (struct google_protobuf_Any*)_upb_Message_New(&google__protobuf__Any_msg_init, arena);
    if (sub) envoy_config_trace_v3_Tracing_Http_set_typed_config(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_HTTP_TRACER_PROTO_UPB_H_ */
