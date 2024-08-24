/* This file was generated by upb_generator from the input file:
 *
 *     xds/type/matcher/v3/regex.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H_
#define XDS_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H_

#include "upb/generated_code_support.h"

#include "xds/type/matcher/v3/regex.upb_minitable.h"

#include "validate/validate.upb_minitable.h"

// Must be last.
#include "upb/port/def.inc"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct xds_type_matcher_v3_RegexMatcher xds_type_matcher_v3_RegexMatcher;
typedef struct xds_type_matcher_v3_RegexMatcher_GoogleRE2 xds_type_matcher_v3_RegexMatcher_GoogleRE2;



/* xds.type.matcher.v3.RegexMatcher */

UPB_INLINE xds_type_matcher_v3_RegexMatcher* xds_type_matcher_v3_RegexMatcher_new(upb_Arena* arena) {
  return (xds_type_matcher_v3_RegexMatcher*)_upb_Message_New(&xds__type__matcher__v3__RegexMatcher_msg_init, arena);
}
UPB_INLINE xds_type_matcher_v3_RegexMatcher* xds_type_matcher_v3_RegexMatcher_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_matcher_v3_RegexMatcher* ret = xds_type_matcher_v3_RegexMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__type__matcher__v3__RegexMatcher_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_matcher_v3_RegexMatcher* xds_type_matcher_v3_RegexMatcher_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_matcher_v3_RegexMatcher* ret = xds_type_matcher_v3_RegexMatcher_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__type__matcher__v3__RegexMatcher_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_matcher_v3_RegexMatcher_serialize(const xds_type_matcher_v3_RegexMatcher* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__type__matcher__v3__RegexMatcher_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_matcher_v3_RegexMatcher_serialize_ex(const xds_type_matcher_v3_RegexMatcher* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__type__matcher__v3__RegexMatcher_msg_init, options, arena, &ptr, len);
  return ptr;
}
typedef enum {
  xds_type_matcher_v3_RegexMatcher_engine_type_google_re2 = 1,
  xds_type_matcher_v3_RegexMatcher_engine_type_NOT_SET = 0
} xds_type_matcher_v3_RegexMatcher_engine_type_oneofcases;
UPB_INLINE xds_type_matcher_v3_RegexMatcher_engine_type_oneofcases xds_type_matcher_v3_RegexMatcher_engine_type_case(const xds_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return (xds_type_matcher_v3_RegexMatcher_engine_type_oneofcases)upb_Message_WhichOneofFieldNumber(msg, &field);
}
UPB_INLINE void xds_type_matcher_v3_RegexMatcher_clear_google_re2(xds_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE const xds_type_matcher_v3_RegexMatcher_GoogleRE2* xds_type_matcher_v3_RegexMatcher_google_re2(const xds_type_matcher_v3_RegexMatcher* msg) {
  const xds_type_matcher_v3_RegexMatcher_GoogleRE2* default_val = NULL;
  const xds_type_matcher_v3_RegexMatcher_GoogleRE2* ret;
  const upb_MiniTableField field = {1, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}
UPB_INLINE bool xds_type_matcher_v3_RegexMatcher_has_google_re2(const xds_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  return _upb_Message_HasNonExtensionField(msg, &field);
}
UPB_INLINE void xds_type_matcher_v3_RegexMatcher_clear_regex(xds_type_matcher_v3_RegexMatcher* msg) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_ClearNonExtensionField(msg, &field);
}
UPB_INLINE upb_StringView xds_type_matcher_v3_RegexMatcher_regex(const xds_type_matcher_v3_RegexMatcher* msg) {
  upb_StringView default_val = upb_StringView_FromString("");
  upb_StringView ret;
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_GetNonExtensionField(msg, &field, &default_val, &ret);
  return ret;
}

UPB_INLINE void xds_type_matcher_v3_RegexMatcher_set_google_re2(xds_type_matcher_v3_RegexMatcher *msg, xds_type_matcher_v3_RegexMatcher_GoogleRE2* value) {
  const upb_MiniTableField field = {1, UPB_SIZE(4, 24), -1, 0, 11, (int)kUpb_FieldMode_Scalar | ((int)UPB_SIZE(kUpb_FieldRep_4Byte, kUpb_FieldRep_8Byte) << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}
UPB_INLINE struct xds_type_matcher_v3_RegexMatcher_GoogleRE2* xds_type_matcher_v3_RegexMatcher_mutable_google_re2(xds_type_matcher_v3_RegexMatcher* msg, upb_Arena* arena) {
  struct xds_type_matcher_v3_RegexMatcher_GoogleRE2* sub = (struct xds_type_matcher_v3_RegexMatcher_GoogleRE2*)xds_type_matcher_v3_RegexMatcher_google_re2(msg);
  if (sub == NULL) {
    sub = (struct xds_type_matcher_v3_RegexMatcher_GoogleRE2*)_upb_Message_New(&xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, arena);
    if (sub) xds_type_matcher_v3_RegexMatcher_set_google_re2(msg, sub);
  }
  return sub;
}
UPB_INLINE void xds_type_matcher_v3_RegexMatcher_set_regex(xds_type_matcher_v3_RegexMatcher *msg, upb_StringView value) {
  const upb_MiniTableField field = {2, 8, 0, kUpb_NoSub, 9, (int)kUpb_FieldMode_Scalar | ((int)kUpb_FieldRep_StringView << kUpb_FieldRep_Shift)};
  _upb_Message_SetNonExtensionField(msg, &field, &value);
}

/* xds.type.matcher.v3.RegexMatcher.GoogleRE2 */

UPB_INLINE xds_type_matcher_v3_RegexMatcher_GoogleRE2* xds_type_matcher_v3_RegexMatcher_GoogleRE2_new(upb_Arena* arena) {
  return (xds_type_matcher_v3_RegexMatcher_GoogleRE2*)_upb_Message_New(&xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, arena);
}
UPB_INLINE xds_type_matcher_v3_RegexMatcher_GoogleRE2* xds_type_matcher_v3_RegexMatcher_GoogleRE2_parse(const char* buf, size_t size, upb_Arena* arena) {
  xds_type_matcher_v3_RegexMatcher_GoogleRE2* ret = xds_type_matcher_v3_RegexMatcher_GoogleRE2_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, NULL, 0, arena) != kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE xds_type_matcher_v3_RegexMatcher_GoogleRE2* xds_type_matcher_v3_RegexMatcher_GoogleRE2_parse_ex(const char* buf, size_t size,
                           const upb_ExtensionRegistry* extreg,
                           int options, upb_Arena* arena) {
  xds_type_matcher_v3_RegexMatcher_GoogleRE2* ret = xds_type_matcher_v3_RegexMatcher_GoogleRE2_new(arena);
  if (!ret) return NULL;
  if (upb_Decode(buf, size, ret, &xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, extreg, options, arena) !=
      kUpb_DecodeStatus_Ok) {
    return NULL;
  }
  return ret;
}
UPB_INLINE char* xds_type_matcher_v3_RegexMatcher_GoogleRE2_serialize(const xds_type_matcher_v3_RegexMatcher_GoogleRE2* msg, upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, 0, arena, &ptr, len);
  return ptr;
}
UPB_INLINE char* xds_type_matcher_v3_RegexMatcher_GoogleRE2_serialize_ex(const xds_type_matcher_v3_RegexMatcher_GoogleRE2* msg, int options,
                                 upb_Arena* arena, size_t* len) {
  char* ptr;
  (void)upb_Encode(msg, &xds__type__matcher__v3__RegexMatcher__GoogleRE2_msg_init, options, arena, &ptr, len);
  return ptr;
}


#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* XDS_TYPE_MATCHER_V3_REGEX_PROTO_UPB_H_ */
