/* This file was generated by upb_generator from the input file:
 *
 *     xds/type/matcher/v3/domain.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#ifndef XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPBDEFS_H_
#define XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPBDEFS_H_

#include "upb/reflection/def.h"
#include "upb/reflection/internal/def_pool.h"
#include "upb/port/def.inc"
#ifdef __cplusplus
extern "C" {
#endif

#include "upb/reflection/def.h"

#include "upb/port/def.inc"

extern _upb_DefPool_Init xds_type_matcher_v3_domain_proto_upbdefinit;

UPB_INLINE const upb_MessageDef *xds_type_matcher_v3_ServerNameMatcher_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &xds_type_matcher_v3_domain_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "xds.type.matcher.v3.ServerNameMatcher");
}

UPB_INLINE const upb_MessageDef *xds_type_matcher_v3_ServerNameMatcher_DomainMatcher_getmsgdef(upb_DefPool *s) {
  _upb_DefPool_LoadDefInit(s, &xds_type_matcher_v3_domain_proto_upbdefinit);
  return upb_DefPool_FindMessageByName(s, "xds.type.matcher.v3.ServerNameMatcher.DomainMatcher");
}

#ifdef __cplusplus
}  /* extern "C" */
#endif

#include "upb/port/undef.inc"

#endif  /* XDS_TYPE_MATCHER_V3_DOMAIN_PROTO_UPBDEFS_H_ */
