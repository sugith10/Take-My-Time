/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/trace/v3/opentelemetry.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_
#define ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_

#include "upb/generated_code_support.h"

#include "envoy/config/trace/v3/opentelemetry.upb_minitable.h"

#include "envoy/config/core/v3/extension.upb_minitable.h"
#include "envoy/config/core/v3/grpc_service.upb_minitable.h"
#include "envoy/config/core/v3/http_service.upb_minitable.h"
#include "udpa/annotations/migrate.upb_minitable.h"
#include "udpa/annotations/status.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct envoy_config_trace_v3_OpenTelemetryConfig envoy_config_trace_v3_OpenTelemetryConfig;
struct envoy_config_core_v3_GrpcService;
struct envoy_config_core_v3_HttpService;
struct envoy_config_core_v3_TypedExtensionConfig;



/* envoy.config.trace.v3.OpenTelemetryConfig */

UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_new(upb_Arena* arena) {
  return (envoy_config_trace_v3_OpenTelemetryConfig*)_upb_Message_New(&envoy__config__trace__v3__OpenTelemetryConfig_msg_init, arena);
}
UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_parse(const char* buf, size_t size, upb_Arena* arena) {
  envoy_config_trace_v3_OpenTelemetryConfig* ret = envoy_config_trace_v3_OpenTelemetryConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__OpenTelemetryConfig_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE envoy_config_trace_v3_OpenTelemetryConfig* envoy_config_trace_v3_OpenTelemetryConfig_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  envoy_config_trace_v3_OpenTelemetryConfig* ret = envoy_config_trace_v3_OpenTelemetryConfig_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &envoy__config__trace__v3__OpenTelemetryConfig_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* envoy_config_trace_v3_OpenTelemetryConfig_serialize(const envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__OpenTelemetryConfig_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* envoy_config_trace_v3_OpenTelemetryConfig_serialize_ex(const envoy_config_trace_v3_OpenTelemetryConfig* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &envoy__config__trace__v3__OpenTelemetryConfig_msg_init, options, arena, &ptr, len);
  return ptr;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_grpc_service(envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_OpenTelemetryConfig_grpc_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const struct envoy_config_core_v3_GrpcService* default_val = NULL;
  const struct envoy_config_core_v3_GrpcService* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_config_trace_v3_OpenTelemetryConfig_has_grpc_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_service_name(envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {2, UPB_SIZE(20, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView envoy_config_trace_v3_OpenTelemetryConfig_service_name(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, UPB_SIZE(20, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_http_service(envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_HttpService* envoy_config_trace_v3_OpenTelemetryConfig_http_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const struct envoy_config_core_v3_HttpService* default_val = NULL;
  const struct envoy_config_core_v3_HttpService* ret;
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_config_trace_v3_OpenTelemetryConfig_has_http_service(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_resource_detectors(envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_TypedExtensionConfig* const* envoy_config_trace_v3_OpenTelemetryConfig_resource_detectors(const envoy_config_trace_v3_OpenTelemetryConfig* msg, size_t* size) {
  const upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (const struct envoy_config_core_v3_TypedExtensionConfig* const*)_upb_array_constptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE const upb_Array* _envoy_config_trace_v3_OpenTelemetryConfig_resource_detectors_upb_array(const envoy_config_trace_v3_OpenTelemetryConfig* msg, size_t* size) {
  const upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  const upb_Array* arr = upb_Message_GetArray(msg, &field);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE upb_Array* _envoy_config_trace_v3_OpenTelemetryConfig_resource_detectors_mutable_upb_array(const envoy_config_trace_v3_OpenTelemetryConfig* msg, size_t* size, upb_Arena* arena) {
  const upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(
      (upb_Message*)msg, &field, arena);
  if (size) {
    *size = arr ? arr->size : 0;
  }
  return arr;
}
UPB_INLINE bool envoy_config_trace_v3_OpenTelemetryConfig_has_resource_detectors(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  size_t size;
  envoy_config_trace_v3_OpenTelemetryConfig_resource_detectors(msg, &size);
  return size != 0;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_clear_sampler(envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {5, UPB_SIZE(16, 48), 3, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const struct envoy_config_core_v3_TypedExtensionConfig* envoy_config_trace_v3_OpenTelemetryConfig_sampler(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const struct envoy_config_core_v3_TypedExtensionConfig* default_val = NULL;
  const struct envoy_config_core_v3_TypedExtensionConfig* ret;
  const upb_MiniTableField field = {5, UPB_SIZE(16, 48), 3, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool envoy_config_trace_v3_OpenTelemetryConfig_has_sampler(const envoy_config_trace_v3_OpenTelemetryConfig* msg) {
  const upb_MiniTableField field = {5, UPB_SIZE(16, 48), 3, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}

UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_grpc_service(envoy_config_trace_v3_OpenTelemetryConfig *msg, struct envoy_config_core_v3_GrpcService* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 8), 1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_core_v3_GrpcService* envoy_config_trace_v3_OpenTelemetryConfig_mutable_grpc_service(envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_GrpcService* sub = (struct envoy_config_core_v3_GrpcService*)envoy_config_trace_v3_OpenTelemetryConfig_grpc_service(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_GrpcService*)_upb_Message_New(&envoy__config__core__v3__GrpcService_msg_init, arena);
    if (sub) envoy_config_trace_v3_OpenTelemetryConfig_set_grpc_service(msg, sub);
  }
  return sub;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_service_name(envoy_config_trace_v3_OpenTelemetryConfig *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, UPB_SIZE(20, 16), 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_http_service(envoy_config_trace_v3_OpenTelemetryConfig *msg, struct envoy_config_core_v3_HttpService* value) {
  const upb_MiniTableField field = {3, UPB_SIZE(8, 32), 2, 1, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_core_v3_HttpService* envoy_config_trace_v3_OpenTelemetryConfig_mutable_http_service(envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_HttpService* sub = (struct envoy_config_core_v3_HttpService*)envoy_config_trace_v3_OpenTelemetryConfig_http_service(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_HttpService*)_upb_Message_New(&envoy__config__core__v3__HttpService_msg_init, arena);
    if (sub) envoy_config_trace_v3_OpenTelemetryConfig_set_http_service(msg, sub);
  }
  return sub;
}
UPB_INLINE struct envoy_config_core_v3_TypedExtensionConfig** envoy_config_trace_v3_OpenTelemetryConfig_mutable_resource_detectors(envoy_config_trace_v3_OpenTelemetryConfig* msg, size_t* size) {
  upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetMutableArray(msg, &field);
  if (arr) {
    if (size) *size = arr->size;
    return (struct envoy_config_core_v3_TypedExtensionConfig**)_upb_array_ptr(arr);
  } else {
    if (size) *size = 0;
    return NULL;
  }
}
UPB_INLINE struct envoy_config_core_v3_TypedExtensionConfig** envoy_config_trace_v3_OpenTelemetryConfig_resize_resource_detectors(envoy_config_trace_v3_OpenTelemetryConfig* msg, size_t size, upb_Arena* arena) {
  upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (struct envoy_config_core_v3_TypedExtensionConfig**)upb_Message_ResizeArrayUninitialized(msg, &field, size, arena);
}
UPB_INLINE struct envoy_config_core_v3_TypedExtensionConfig* envoy_config_trace_v3_OpenTelemetryConfig_add_resource_detectors(envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena) {
  upb_MiniTableField field = {4, UPB_SIZE(12, 40), 0, 2, 11, (int)kUpb_FieldMode_Array | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  upb_Array* arr = upb_Message_GetOrCreateMutableArray(msg, &field, arena);
  if (!arr || !_upb_Array_ResizeUninitialized(arr, arr->size + 1, arena)) {
    return NULL;
  }
  struct envoy_config_core_v3_TypedExtensionConfig* sub = (struct envoy_config_core_v3_TypedExtensionConfig*)_upb_Message_New(&envoy__config__core__v3__TypedExtensionConfig_msg_init, arena);
  if (!arr || !sub) return NULL;
  _upb_Array_Set(arr, arr->size - 1, &sub, sizeof(sub));
  return sub;
}
UPB_INLINE void envoy_config_trace_v3_OpenTelemetryConfig_set_sampler(envoy_config_trace_v3_OpenTelemetryConfig *msg, struct envoy_config_core_v3_TypedExtensionConfig* value) {
  const upb_MiniTableField field = {5, UPB_SIZE(16, 48), 3, 3, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct envoy_config_core_v3_TypedExtensionConfig* envoy_config_trace_v3_OpenTelemetryConfig_mutable_sampler(envoy_config_trace_v3_OpenTelemetryConfig* msg, upb_Arena* arena) {
  struct envoy_config_core_v3_TypedExtensionConfig* sub = (struct envoy_config_core_v3_TypedExtensionConfig*)envoy_config_trace_v3_OpenTelemetryConfig_sampler(msg);
  if (sub == NULL) {
    sub = (struct envoy_config_core_v3_TypedExtensionConfig*)_upb_Message_New(&envoy__config__core__v3__TypedExtensionConfig_msg_init, arena);
    if (sub) envoy_config_trace_v3_OpenTelemetryConfig_set_sampler(msg, sub);
  }
  return sub;
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* ENVOY_CONFIG_TRACE_V3_OPENTELEMETRY_PROTO_UPB_H_ */
