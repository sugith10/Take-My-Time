/* This file was generated by upb_generator from the input file:
 *
 *     envoy/config/trace/v3/zipkin.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/config/trace/v3/zipkin.upbdefs.h"
#include "envoy/config/trace/v3/zipkin.upb_minitable.h"

extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init envoy_annotations_deprecation_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_migrate_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[1073] = {'\n', '\"', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 't', 'r', 'a', 'c', 'e', '/', 'v', '3', '/', 'z', 
'i', 'p', 'k', 'i', 'n', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', 
'.', 't', 'r', 'a', 'c', 'e', '.', 'v', '3', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 
'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '#', 'e', 'n', 'v', 'o', 'y', '/', 'a', 
'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'd', 'e', 'p', 'r', 'e', 'c', 'a', 't', 'i', 'o', 'n', '.', 'p', 'r', 
'o', 't', 'o', '\032', '\036', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'm', 'i', 'g', 
'r', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 
'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 
'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 
'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 
'o', '\"', '\367', '\004', '\n', '\014', 'Z', 'i', 'p', 'k', 'i', 'n', 'C', 'o', 'n', 'f', 'i', 'g', '\022', '4', '\n', '\021', 'c', 'o', 'l', 
'l', 'e', 'c', 't', 'o', 'r', '_', 'c', 'l', 'u', 's', 't', 'e', 'r', '\030', '\001', ' ', '\001', '(', '\t', 'B', '\007', '\372', 'B', '\004', 
'r', '\002', '\020', '\001', 'R', '\020', 'c', 'o', 'l', 'l', 'e', 'c', 't', 'o', 'r', 'C', 'l', 'u', 's', 't', 'e', 'r', '\022', '6', '\n', 
'\022', 'c', 'o', 'l', 'l', 'e', 'c', 't', 'o', 'r', '_', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '\030', '\002', ' ', '\001', '(', '\t', 
'B', '\007', '\372', 'B', '\004', 'r', '\002', '\020', '\001', 'R', '\021', 'c', 'o', 'l', 'l', 'e', 'c', 't', 'o', 'r', 'E', 'n', 'd', 'p', 'o', 
'i', 'n', 't', '\022', '&', '\n', '\017', 't', 'r', 'a', 'c', 'e', '_', 'i', 'd', '_', '1', '2', '8', 'b', 'i', 't', '\030', '\003', ' ', 
'\001', '(', '\010', 'R', '\r', 't', 'r', 'a', 'c', 'e', 'I', 'd', '1', '2', '8', 'b', 'i', 't', '\022', 'J', '\n', '\023', 's', 'h', 'a', 
'r', 'e', 'd', '_', 's', 'p', 'a', 'n', '_', 'c', 'o', 'n', 't', 'e', 'x', 't', '\030', '\004', ' ', '\001', '(', '\013', '2', '\032', '.', 
'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 'e', 
'R', '\021', 's', 'h', 'a', 'r', 'e', 'd', 'S', 'p', 'a', 'n', 'C', 'o', 'n', 't', 'e', 'x', 't', '\022', 'z', '\n', '\032', 'c', 'o', 
'l', 'l', 'e', 'c', 't', 'o', 'r', '_', 'e', 'n', 'd', 'p', 'o', 'i', 'n', 't', '_', 'v', 'e', 'r', 's', 'i', 'o', 'n', '\030', 
'\005', ' ', '\001', '(', '\016', '2', '<', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 
'e', '.', 'v', '3', '.', 'Z', 'i', 'p', 'k', 'i', 'n', 'C', 'o', 'n', 'f', 'i', 'g', '.', 'C', 'o', 'l', 'l', 'e', 'c', 't', 
'o', 'r', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'R', '\030', 'c', 'o', 'l', 'l', 'e', 'c', 
't', 'o', 'r', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\022', '-', '\n', '\022', 'c', 'o', 'l', 
'l', 'e', 'c', 't', 'o', 'r', '_', 'h', 'o', 's', 't', 'n', 'a', 'm', 'e', '\030', '\006', ' ', '\001', '(', '\t', 'R', '\021', 'c', 'o', 
'l', 'l', 'e', 'c', 't', 'o', 'r', 'H', 'o', 's', 't', 'n', 'a', 'm', 'e', '\022', '5', '\n', '\027', 's', 'p', 'l', 'i', 't', '_', 
's', 'p', 'a', 'n', 's', '_', 'f', 'o', 'r', '_', 'r', 'e', 'q', 'u', 'e', 's', 't', '\030', '\007', ' ', '\001', '(', '\010', 'R', '\024', 
's', 'p', 'l', 'i', 't', 'S', 'p', 'a', 'n', 's', 'F', 'o', 'r', 'R', 'e', 'q', 'u', 'e', 's', 't', '\"', 'x', '\n', '\030', 'C', 
'o', 'l', 'l', 'e', 'c', 't', 'o', 'r', 'E', 'n', 'd', 'p', 'o', 'i', 'n', 't', 'V', 'e', 'r', 's', 'i', 'o', 'n', '\022', '3', 
'\n', '%', 'D', 'E', 'P', 'R', 'E', 'C', 'A', 'T', 'E', 'D', '_', 'A', 'N', 'D', '_', 'U', 'N', 'A', 'V', 'A', 'I', 'L', 'A', 
'B', 'L', 'E', '_', 'D', 'O', '_', 'N', 'O', 'T', '_', 'U', 'S', 'E', '\020', '\000', '\032', '\010', '\010', '\001', '\250', '\367', '\264', '\213', '\002', 
'\001', '\022', '\r', '\n', '\t', 'H', 'T', 'T', 'P', '_', 'J', 'S', 'O', 'N', '\020', '\001', '\022', '\016', '\n', '\n', 'H', 'T', 'T', 'P', '_', 
'P', 'R', 'O', 'T', 'O', '\020', '\002', '\022', '\010', '\n', '\004', 'G', 'R', 'P', 'C', '\020', '\003', ':', ')', '\232', '\305', '\210', '\036', '$', '\n', 
'\"', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '2', '.', 'Z', 'i', 
'p', 'k', 'i', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 'B', '\261', '\001', '\n', '#', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 
'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 't', 'r', 'a', 'c', 'e', '.', 'v', '3', 
'B', '\013', 'Z', 'i', 'p', 'k', 'i', 'n', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'D', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 
'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 
'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 't', 'r', 'a', 'c', 'e', '/', 
'v', '3', ';', 't', 'r', 'a', 'c', 'e', 'v', '3', '\362', '\230', '\376', '\217', '\005', ')', '\022', '\'', 'e', 'n', 'v', 'o', 'y', '.', 'e', 
'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 's', '.', 't', 'r', 'a', 'c', 'e', 'r', 's', '.', 'z', 'i', 'p', 'k', 'i', 'n', '.', 
'v', '4', 'a', 'l', 'p', 'h', 'a', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static _upb_DefPool_Init *deps[7] = {
  &google_protobuf_wrappers_proto_upbdefinit,
  &envoy_annotations_deprecation_proto_upbdefinit,
  &udpa_annotations_migrate_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_trace_v3_zipkin_proto_upbdefinit = {
  deps,
  &envoy_config_trace_v3_zipkin_proto_upb_file_layout,
  "envoy/config/trace/v3/zipkin.proto",
  UPB_STRINGVIEW_INIT(descriptor, 1073)
};
