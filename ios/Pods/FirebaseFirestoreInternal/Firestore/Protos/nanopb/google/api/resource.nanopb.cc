/*
 * Copyright 2024 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.8 */

#include "resource.nanopb.h"

#include "Firestore/core/src/nanopb/pretty_printing.h"

namespace firebase {
namespace firestore {

using nanopb::PrintEnumField;
using nanopb::PrintHeader;
using nanopb::PrintMessageField;
using nanopb::PrintPrimitiveField;
using nanopb::PrintTail;

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t google_api_ResourceDescriptor_fields[7] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_api_ResourceDescriptor, type, type, 0),
    PB_FIELD(  2, BYTES   , REPEATED, POINTER , OTHER, google_api_ResourceDescriptor, pattern, type, 0),
    PB_FIELD(  3, BYTES   , SINGULAR, POINTER , OTHER, google_api_ResourceDescriptor, name_field, pattern, 0),
    PB_FIELD(  4, UENUM   , SINGULAR, STATIC  , OTHER, google_api_ResourceDescriptor, history, name_field, 0),
    PB_FIELD(  5, BYTES   , SINGULAR, POINTER , OTHER, google_api_ResourceDescriptor, plural, history, 0),
    PB_FIELD(  6, BYTES   , SINGULAR, POINTER , OTHER, google_api_ResourceDescriptor, singular, plural, 0),
    PB_LAST_FIELD
};

const pb_field_t google_api_ResourceReference_fields[3] = {
    PB_FIELD(  1, BYTES   , SINGULAR, POINTER , FIRST, google_api_ResourceReference, type, type, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, google_api_ResourceReference, child_type, type, 0),
    PB_LAST_FIELD
};






/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 *
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_api_resource_reference_struct, resource_reference) < 65536 && pb_membersize(google_api_resource_struct, resource) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_api_ResourceDescriptor_google_api_ResourceReference)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for google_api_resource_reference_struct.resource_reference is too large. Define PB_FIELD_16BIT to fix this.
#endif


const char* EnumToString(
  google_api_ResourceDescriptor_History value) {
    switch (value) {
    case google_api_ResourceDescriptor_History_HISTORY_UNSPECIFIED:
        return "HISTORY_UNSPECIFIED";
    case google_api_ResourceDescriptor_History_ORIGINALLY_SINGLE_PATTERN:
        return "ORIGINALLY_SINGLE_PATTERN";
    case google_api_ResourceDescriptor_History_FUTURE_MULTI_PATTERN:
        return "FUTURE_MULTI_PATTERN";
    }
    return "<unknown enum value>";
}

std::string google_api_ResourceDescriptor::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "ResourceDescriptor", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("type: ", type, indent + 1, false);
    for (pb_size_t i = 0; i != pattern_count; ++i) {
        tostring_result += PrintPrimitiveField("pattern: ",
            pattern[i], indent + 1, true);
    }
    tostring_result += PrintPrimitiveField("name_field: ",
        name_field, indent + 1, false);
    tostring_result += PrintEnumField("history: ", history, indent + 1, false);
    tostring_result += PrintPrimitiveField("plural: ",
        plural, indent + 1, false);
    tostring_result += PrintPrimitiveField("singular: ",
        singular, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_api_ResourceReference::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "ResourceReference", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("type: ", type, indent + 1, false);
    tostring_result += PrintPrimitiveField("child_type: ",
        child_type, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
