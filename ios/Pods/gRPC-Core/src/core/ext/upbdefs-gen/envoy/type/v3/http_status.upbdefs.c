/* This file was generated by upb_generator from the input file:
 *
 *     envoy/type/v3/http_status.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/reflection/def.h"
#include "envoy/type/v3/http_status.upbdefs.h"
#include "envoy/type/v3/http_status.upb_minitable.h"

extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[1577] = {'\n', '\037', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 'e', '/', 'v', '3', '/', 'h', 't', 't', 'p', '_', 's', 't', 'a', 't', 
'u', 's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\r', 'e', 'n', 'v', 'o', 'y', '.', 't', 'y', 'p', 'e', '.', 'v', '3', '\032', '\035', 
'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 'p', 
'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 'e', 
'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '/', 
'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', 'e', '\n', '\n', 'H', 't', 't', 'p', 'S', 't', 'a', 
't', 'u', 's', '\022', '9', '\n', '\004', 'c', 'o', 'd', 'e', '\030', '\001', ' ', '\001', '(', '\016', '2', '\031', '.', 'e', 'n', 'v', 'o', 'y', 
'.', 't', 'y', 'p', 'e', '.', 'v', '3', '.', 'S', 't', 'a', 't', 'u', 's', 'C', 'o', 'd', 'e', 'B', '\n', '\372', 'B', '\007', '\202', 
'\001', '\004', '\020', '\001', ' ', '\000', 'R', '\004', 'c', 'o', 'd', 'e', ':', '\034', '\232', '\305', '\210', '\036', '\027', '\n', '\025', 'e', 'n', 'v', 'o', 
'y', '.', 't', 'y', 'p', 'e', '.', 'H', 't', 't', 'p', 'S', 't', 'a', 't', 'u', 's', '*', '\265', '\t', '\n', '\n', 'S', 't', 'a', 
't', 'u', 's', 'C', 'o', 'd', 'e', '\022', '\t', '\n', '\005', 'E', 'm', 'p', 't', 'y', '\020', '\000', '\022', '\014', '\n', '\010', 'C', 'o', 'n', 
't', 'i', 'n', 'u', 'e', '\020', 'd', '\022', '\007', '\n', '\002', 'O', 'K', '\020', '\310', '\001', '\022', '\014', '\n', '\007', 'C', 'r', 'e', 'a', 't', 
'e', 'd', '\020', '\311', '\001', '\022', '\r', '\n', '\010', 'A', 'c', 'c', 'e', 'p', 't', 'e', 'd', '\020', '\312', '\001', '\022', ' ', '\n', '\033', 'N', 
'o', 'n', 'A', 'u', 't', 'h', 'o', 'r', 'i', 't', 'a', 't', 'i', 'v', 'e', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 't', 'i', 'o', 
'n', '\020', '\313', '\001', '\022', '\016', '\n', '\t', 'N', 'o', 'C', 'o', 'n', 't', 'e', 'n', 't', '\020', '\314', '\001', '\022', '\021', '\n', '\014', 'R', 
'e', 's', 'e', 't', 'C', 'o', 'n', 't', 'e', 'n', 't', '\020', '\315', '\001', '\022', '\023', '\n', '\016', 'P', 'a', 'r', 't', 'i', 'a', 'l', 
'C', 'o', 'n', 't', 'e', 'n', 't', '\020', '\316', '\001', '\022', '\020', '\n', '\013', 'M', 'u', 'l', 't', 'i', 'S', 't', 'a', 't', 'u', 's', 
'\020', '\317', '\001', '\022', '\024', '\n', '\017', 'A', 'l', 'r', 'e', 'a', 'd', 'y', 'R', 'e', 'p', 'o', 'r', 't', 'e', 'd', '\020', '\320', '\001', 
'\022', '\013', '\n', '\006', 'I', 'M', 'U', 's', 'e', 'd', '\020', '\342', '\001', '\022', '\024', '\n', '\017', 'M', 'u', 'l', 't', 'i', 'p', 'l', 'e', 
'C', 'h', 'o', 'i', 'c', 'e', 's', '\020', '\254', '\002', '\022', '\025', '\n', '\020', 'M', 'o', 'v', 'e', 'd', 'P', 'e', 'r', 'm', 'a', 'n', 
'e', 'n', 't', 'l', 'y', '\020', '\255', '\002', '\022', '\n', '\n', '\005', 'F', 'o', 'u', 'n', 'd', '\020', '\256', '\002', '\022', '\r', '\n', '\010', 'S', 
'e', 'e', 'O', 't', 'h', 'e', 'r', '\020', '\257', '\002', '\022', '\020', '\n', '\013', 'N', 'o', 't', 'M', 'o', 'd', 'i', 'f', 'i', 'e', 'd', 
'\020', '\260', '\002', '\022', '\r', '\n', '\010', 'U', 's', 'e', 'P', 'r', 'o', 'x', 'y', '\020', '\261', '\002', '\022', '\026', '\n', '\021', 'T', 'e', 'm', 
'p', 'o', 'r', 'a', 'r', 'y', 'R', 'e', 'd', 'i', 'r', 'e', 'c', 't', '\020', '\263', '\002', '\022', '\026', '\n', '\021', 'P', 'e', 'r', 'm', 
'a', 'n', 'e', 'n', 't', 'R', 'e', 'd', 'i', 'r', 'e', 'c', 't', '\020', '\264', '\002', '\022', '\017', '\n', '\n', 'B', 'a', 'd', 'R', 'e', 
'q', 'u', 'e', 's', 't', '\020', '\220', '\003', '\022', '\021', '\n', '\014', 'U', 'n', 'a', 'u', 't', 'h', 'o', 'r', 'i', 'z', 'e', 'd', '\020', 
'\221', '\003', '\022', '\024', '\n', '\017', 'P', 'a', 'y', 'm', 'e', 'n', 't', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '\020', '\222', '\003', '\022', 
'\016', '\n', '\t', 'F', 'o', 'r', 'b', 'i', 'd', 'd', 'e', 'n', '\020', '\223', '\003', '\022', '\r', '\n', '\010', 'N', 'o', 't', 'F', 'o', 'u', 
'n', 'd', '\020', '\224', '\003', '\022', '\025', '\n', '\020', 'M', 'e', 't', 'h', 'o', 'd', 'N', 'o', 't', 'A', 'l', 'l', 'o', 'w', 'e', 'd', 
'\020', '\225', '\003', '\022', '\022', '\n', '\r', 'N', 'o', 't', 'A', 'c', 'c', 'e', 'p', 't', 'a', 'b', 'l', 'e', '\020', '\226', '\003', '\022', ' ', 
'\n', '\033', 'P', 'r', 'o', 'x', 'y', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'R', 'e', 'q', 'u', 
'i', 'r', 'e', 'd', '\020', '\227', '\003', '\022', '\023', '\n', '\016', 'R', 'e', 'q', 'u', 'e', 's', 't', 'T', 'i', 'm', 'e', 'o', 'u', 't', 
'\020', '\230', '\003', '\022', '\r', '\n', '\010', 'C', 'o', 'n', 'f', 'l', 'i', 'c', 't', '\020', '\231', '\003', '\022', '\t', '\n', '\004', 'G', 'o', 'n', 
'e', '\020', '\232', '\003', '\022', '\023', '\n', '\016', 'L', 'e', 'n', 'g', 't', 'h', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '\020', '\233', '\003', 
'\022', '\027', '\n', '\022', 'P', 'r', 'e', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', 'F', 'a', 'i', 'l', 'e', 'd', '\020', '\234', '\003', 
'\022', '\024', '\n', '\017', 'P', 'a', 'y', 'l', 'o', 'a', 'd', 'T', 'o', 'o', 'L', 'a', 'r', 'g', 'e', '\020', '\235', '\003', '\022', '\017', '\n', 
'\n', 'U', 'R', 'I', 'T', 'o', 'o', 'L', 'o', 'n', 'g', '\020', '\236', '\003', '\022', '\031', '\n', '\024', 'U', 'n', 's', 'u', 'p', 'p', 'o', 
'r', 't', 'e', 'd', 'M', 'e', 'd', 'i', 'a', 'T', 'y', 'p', 'e', '\020', '\237', '\003', '\022', '\030', '\n', '\023', 'R', 'a', 'n', 'g', 'e', 
'N', 'o', 't', 'S', 'a', 't', 'i', 's', 'f', 'i', 'a', 'b', 'l', 'e', '\020', '\240', '\003', '\022', '\026', '\n', '\021', 'E', 'x', 'p', 'e', 
'c', 't', 'a', 't', 'i', 'o', 'n', 'F', 'a', 'i', 'l', 'e', 'd', '\020', '\241', '\003', '\022', '\027', '\n', '\022', 'M', 'i', 's', 'd', 'i', 
'r', 'e', 'c', 't', 'e', 'd', 'R', 'e', 'q', 'u', 'e', 's', 't', '\020', '\245', '\003', '\022', '\030', '\n', '\023', 'U', 'n', 'p', 'r', 'o', 
'c', 'e', 's', 's', 'a', 'b', 'l', 'e', 'E', 'n', 't', 'i', 't', 'y', '\020', '\246', '\003', '\022', '\013', '\n', '\006', 'L', 'o', 'c', 'k', 
'e', 'd', '\020', '\247', '\003', '\022', '\025', '\n', '\020', 'F', 'a', 'i', 'l', 'e', 'd', 'D', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 'c', 'y', 
'\020', '\250', '\003', '\022', '\024', '\n', '\017', 'U', 'p', 'g', 'r', 'a', 'd', 'e', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '\020', '\252', '\003', 
'\022', '\031', '\n', '\024', 'P', 'r', 'e', 'c', 'o', 'n', 'd', 'i', 't', 'i', 'o', 'n', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '\020', 
'\254', '\003', '\022', '\024', '\n', '\017', 'T', 'o', 'o', 'M', 'a', 'n', 'y', 'R', 'e', 'q', 'u', 'e', 's', 't', 's', '\020', '\255', '\003', '\022', 
' ', '\n', '\033', 'R', 'e', 'q', 'u', 'e', 's', 't', 'H', 'e', 'a', 'd', 'e', 'r', 'F', 'i', 'e', 'l', 'd', 's', 'T', 'o', 'o', 
'L', 'a', 'r', 'g', 'e', '\020', '\257', '\003', '\022', '\030', '\n', '\023', 'I', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'S', 'e', 'r', 'v', 'e', 
'r', 'E', 'r', 'r', 'o', 'r', '\020', '\364', '\003', '\022', '\023', '\n', '\016', 'N', 'o', 't', 'I', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 
'e', 'd', '\020', '\365', '\003', '\022', '\017', '\n', '\n', 'B', 'a', 'd', 'G', 'a', 't', 'e', 'w', 'a', 'y', '\020', '\366', '\003', '\022', '\027', '\n', 
'\022', 'S', 'e', 'r', 'v', 'i', 'c', 'e', 'U', 'n', 'a', 'v', 'a', 'i', 'l', 'a', 'b', 'l', 'e', '\020', '\367', '\003', '\022', '\023', '\n', 
'\016', 'G', 'a', 't', 'e', 'w', 'a', 'y', 'T', 'i', 'm', 'e', 'o', 'u', 't', '\020', '\370', '\003', '\022', '\034', '\n', '\027', 'H', 'T', 'T', 
'P', 'V', 'e', 'r', 's', 'i', 'o', 'n', 'N', 'o', 't', 'S', 'u', 'p', 'p', 'o', 'r', 't', 'e', 'd', '\020', '\371', '\003', '\022', '\032', 
'\n', '\025', 'V', 'a', 'r', 'i', 'a', 'n', 't', 'A', 'l', 's', 'o', 'N', 'e', 'g', 'o', 't', 'i', 'a', 't', 'e', 's', '\020', '\372', 
'\003', '\022', '\030', '\n', '\023', 'I', 'n', 's', 'u', 'f', 'f', 'i', 'c', 'i', 'e', 'n', 't', 'S', 't', 'o', 'r', 'a', 'g', 'e', '\020', 
'\373', '\003', '\022', '\021', '\n', '\014', 'L', 'o', 'o', 'p', 'D', 'e', 't', 'e', 'c', 't', 'e', 'd', '\020', '\374', '\003', '\022', '\020', '\n', '\013', 
'N', 'o', 't', 'E', 'x', 't', 'e', 'n', 'd', 'e', 'd', '\020', '\376', '\003', '\022', '\"', '\n', '\035', 'N', 'e', 't', 'w', 'o', 'r', 'k', 
'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', 'R', 'e', 'q', 'u', 'i', 'r', 'e', 'd', '\020', '\377', '\003', 
'B', 'u', '\n', '\033', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 't', 
'y', 'p', 'e', '.', 'v', '3', 'B', '\017', 'H', 't', 't', 'p', 'S', 't', 'a', 't', 'u', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', 
'Z', ';', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 
'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 't', 'y', 'p', 
'e', '/', 'v', '3', ';', 't', 'y', 'p', 'e', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 
'o', '3', 
};

static _upb_DefPool_Init *deps[4] = {
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_type_v3_http_status_proto_upbdefinit = {
  deps,
  &envoy_type_v3_http_status_proto_upb_file_layout,
  "envoy/type/v3/http_status.proto",
  UPB_STRINGVIEW_INIT(descriptor, 1577)
};
