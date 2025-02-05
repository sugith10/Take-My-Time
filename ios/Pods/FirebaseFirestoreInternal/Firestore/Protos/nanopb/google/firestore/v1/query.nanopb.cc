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

#include "query.nanopb.h"

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



const pb_field_t google_firestore_v1_StructuredQuery_fields[9] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery, select, select, &google_firestore_v1_StructuredQuery_Projection_fields),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery, from, select, &google_firestore_v1_StructuredQuery_CollectionSelector_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, where, from, &google_firestore_v1_StructuredQuery_Filter_fields),
    PB_FIELD(  4, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery, order_by, where, &google_firestore_v1_StructuredQuery_Order_fields),
    PB_FIELD(  5, MESSAGE , OPTIONAL, STATIC  , OTHER, google_firestore_v1_StructuredQuery, limit, order_by, &google_protobuf_Int32Value_fields),
    PB_FIELD(  6, INT32   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, offset, limit, 0),
    PB_FIELD(  7, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, start_at, offset, &google_firestore_v1_Cursor_fields),
    PB_FIELD(  8, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery, end_at, start_at, &google_firestore_v1_Cursor_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_CollectionSelector_fields[3] = {
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_StructuredQuery_CollectionSelector, collection_id, collection_id, 0),
    PB_FIELD(  3, BOOL    , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_CollectionSelector, all_descendants, collection_id, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Filter_fields[4] = {
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   1, MESSAGE , ONEOF, STATIC  , FIRST, google_firestore_v1_StructuredQuery_Filter, composite_filter, composite_filter, &google_firestore_v1_StructuredQuery_CompositeFilter_fields),
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   2, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredQuery_Filter, field_filter, field_filter, &google_firestore_v1_StructuredQuery_FieldFilter_fields),
    PB_ANONYMOUS_ONEOF_FIELD(filter_type,   3, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredQuery_Filter, unary_filter, unary_filter, &google_firestore_v1_StructuredQuery_UnaryFilter_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_CompositeFilter_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_CompositeFilter, op, op, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredQuery_CompositeFilter, filters, op, &google_firestore_v1_StructuredQuery_Filter_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_FieldFilter_fields[4] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_FieldFilter, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_FIELD(  2, UENUM   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_FieldFilter, op, field, 0),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_FieldFilter, value, op, &google_firestore_v1_Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_UnaryFilter_fields[3] = {
    PB_FIELD(  1, UENUM   , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_UnaryFilter, op, op, 0),
    PB_ANONYMOUS_ONEOF_FIELD(operand_type,   2, MESSAGE , ONEOF, STATIC  , OTHER, google_firestore_v1_StructuredQuery_UnaryFilter, field, op, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Order_fields[3] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredQuery_Order, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_FIELD(  2, UENUM   , SINGULAR, STATIC  , OTHER, google_firestore_v1_StructuredQuery_Order, direction, field, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_FieldReference_fields[2] = {
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , FIRST, google_firestore_v1_StructuredQuery_FieldReference, field_path, field_path, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredQuery_Projection_fields[2] = {
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_StructuredQuery_Projection, fields, fields, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredAggregationQuery_fields[3] = {
    PB_ANONYMOUS_ONEOF_FIELD(query_type,   1, MESSAGE , ONEOF, STATIC  , FIRST, google_firestore_v1_StructuredAggregationQuery, structured_query, structured_query, &google_firestore_v1_StructuredQuery_fields),
    PB_FIELD(  3, MESSAGE , REPEATED, POINTER , OTHER, google_firestore_v1_StructuredAggregationQuery, aggregations, structured_query, &google_firestore_v1_StructuredAggregationQuery_Aggregation_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredAggregationQuery_Aggregation_fields[5] = {
    PB_ANONYMOUS_ONEOF_FIELD(operator,   1, MESSAGE , ONEOF, STATIC  , FIRST, google_firestore_v1_StructuredAggregationQuery_Aggregation, count, count, &google_firestore_v1_StructuredAggregationQuery_Aggregation_Count_fields),
    PB_ANONYMOUS_ONEOF_FIELD(operator,   2, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredAggregationQuery_Aggregation, sum, sum, &google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum_fields),
    PB_ANONYMOUS_ONEOF_FIELD(operator,   3, MESSAGE , ONEOF, STATIC  , UNION, google_firestore_v1_StructuredAggregationQuery_Aggregation, avg, avg, &google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg_fields),
    PB_FIELD(  7, BYTES   , SINGULAR, POINTER , OTHER, google_firestore_v1_StructuredAggregationQuery_Aggregation, alias, avg, 0),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredAggregationQuery_Aggregation_Count_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredAggregationQuery_Aggregation_Count, up_to, up_to, &google_protobuf_Int64Value_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg_fields[2] = {
    PB_FIELD(  1, MESSAGE , SINGULAR, STATIC  , FIRST, google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg, field, field, &google_firestore_v1_StructuredQuery_FieldReference_fields),
    PB_LAST_FIELD
};

const pb_field_t google_firestore_v1_Cursor_fields[3] = {
    PB_FIELD(  1, MESSAGE , REPEATED, POINTER , FIRST, google_firestore_v1_Cursor, values, values, &google_firestore_v1_Value_fields),
    PB_FIELD(  2, BOOL    , SINGULAR, STATIC  , OTHER, google_firestore_v1_Cursor, before, values, 0),
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
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_StructuredQuery, select) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, where) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, start_at) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, end_at) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery, limit) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, composite_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, field_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, unary_filter) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, field) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, value) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_UnaryFilter, field) < 65536 && pb_membersize(google_firestore_v1_StructuredQuery_Order, field) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery, structured_query) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, count) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, sum) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, avg) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Count, up_to) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum, field) < 65536 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg, field) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_google_firestore_v1_StructuredQuery_google_firestore_v1_StructuredQuery_CollectionSelector_google_firestore_v1_StructuredQuery_Filter_google_firestore_v1_StructuredQuery_CompositeFilter_google_firestore_v1_StructuredQuery_FieldFilter_google_firestore_v1_StructuredQuery_UnaryFilter_google_firestore_v1_StructuredQuery_Order_google_firestore_v1_StructuredQuery_FieldReference_google_firestore_v1_StructuredQuery_Projection_google_firestore_v1_StructuredAggregationQuery_google_firestore_v1_StructuredAggregationQuery_Aggregation_google_firestore_v1_StructuredAggregationQuery_Aggregation_Count_google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum_google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg_google_firestore_v1_Cursor)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 *
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(google_firestore_v1_StructuredQuery, select) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, where) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, start_at) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, end_at) < 256 && pb_membersize(google_firestore_v1_StructuredQuery, limit) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, composite_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, field_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Filter, unary_filter) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, field) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_FieldFilter, value) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_UnaryFilter, field) < 256 && pb_membersize(google_firestore_v1_StructuredQuery_Order, field) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery, structured_query) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, count) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, sum) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation, avg) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Count, up_to) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum, field) < 256 && pb_membersize(google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg, field) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_google_firestore_v1_StructuredQuery_google_firestore_v1_StructuredQuery_CollectionSelector_google_firestore_v1_StructuredQuery_Filter_google_firestore_v1_StructuredQuery_CompositeFilter_google_firestore_v1_StructuredQuery_FieldFilter_google_firestore_v1_StructuredQuery_UnaryFilter_google_firestore_v1_StructuredQuery_Order_google_firestore_v1_StructuredQuery_FieldReference_google_firestore_v1_StructuredQuery_Projection_google_firestore_v1_StructuredAggregationQuery_google_firestore_v1_StructuredAggregationQuery_Aggregation_google_firestore_v1_StructuredAggregationQuery_Aggregation_Count_google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum_google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg_google_firestore_v1_Cursor)
#endif


const char* EnumToString(
  google_firestore_v1_StructuredQuery_Direction value) {
    switch (value) {
    case google_firestore_v1_StructuredQuery_Direction_DIRECTION_UNSPECIFIED:
        return "DIRECTION_UNSPECIFIED";
    case google_firestore_v1_StructuredQuery_Direction_ASCENDING:
        return "ASCENDING";
    case google_firestore_v1_StructuredQuery_Direction_DESCENDING:
        return "DESCENDING";
    }
    return "<unknown enum value>";
}

const char* EnumToString(
  google_firestore_v1_StructuredQuery_CompositeFilter_Operator value) {
    switch (value) {
    case google_firestore_v1_StructuredQuery_CompositeFilter_Operator_OPERATOR_UNSPECIFIED:
        return "OPERATOR_UNSPECIFIED";
    case google_firestore_v1_StructuredQuery_CompositeFilter_Operator_AND:
        return "AND";
    case google_firestore_v1_StructuredQuery_CompositeFilter_Operator_OR:
        return "OR";
    }
    return "<unknown enum value>";
}

const char* EnumToString(
  google_firestore_v1_StructuredQuery_FieldFilter_Operator value) {
    switch (value) {
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_OPERATOR_UNSPECIFIED:
        return "OPERATOR_UNSPECIFIED";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_LESS_THAN:
        return "LESS_THAN";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_LESS_THAN_OR_EQUAL:
        return "LESS_THAN_OR_EQUAL";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_GREATER_THAN:
        return "GREATER_THAN";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_GREATER_THAN_OR_EQUAL:
        return "GREATER_THAN_OR_EQUAL";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_EQUAL:
        return "EQUAL";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_NOT_EQUAL:
        return "NOT_EQUAL";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS:
        return "ARRAY_CONTAINS";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_IN:
        return "IN";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_ARRAY_CONTAINS_ANY:
        return "ARRAY_CONTAINS_ANY";
    case google_firestore_v1_StructuredQuery_FieldFilter_Operator_NOT_IN:
        return "NOT_IN";
    }
    return "<unknown enum value>";
}

const char* EnumToString(
  google_firestore_v1_StructuredQuery_UnaryFilter_Operator value) {
    switch (value) {
    case google_firestore_v1_StructuredQuery_UnaryFilter_Operator_OPERATOR_UNSPECIFIED:
        return "OPERATOR_UNSPECIFIED";
    case google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NAN:
        return "IS_NAN";
    case google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NULL:
        return "IS_NULL";
    case google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NOT_NAN:
        return "IS_NOT_NAN";
    case google_firestore_v1_StructuredQuery_UnaryFilter_Operator_IS_NOT_NULL:
        return "IS_NOT_NULL";
    }
    return "<unknown enum value>";
}

std::string google_firestore_v1_StructuredQuery::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "StructuredQuery", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("select ", select, indent + 1, false);
    for (pb_size_t i = 0; i != from_count; ++i) {
        tostring_result += PrintMessageField("from ",
            from[i], indent + 1, true);
    }
    tostring_result += PrintMessageField("where ", where, indent + 1, false);
    for (pb_size_t i = 0; i != order_by_count; ++i) {
        tostring_result += PrintMessageField("order_by ",
            order_by[i], indent + 1, true);
    }
    if (has_limit) {
        tostring_result += PrintMessageField("limit ",
            limit, indent + 1, true);
    }
    tostring_result += PrintPrimitiveField("offset: ",
        offset, indent + 1, false);
    tostring_result += PrintMessageField("start_at ",
        start_at, indent + 1, false);
    tostring_result += PrintMessageField("end_at ", end_at, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_StructuredQuery_CollectionSelector::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "CollectionSelector", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("collection_id: ",
        collection_id, indent + 1, false);
    tostring_result += PrintPrimitiveField("all_descendants: ",
        all_descendants, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredQuery_Filter::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Filter", this);
    std::string tostring_result;

    switch (which_filter_type) {
    case google_firestore_v1_StructuredQuery_Filter_composite_filter_tag:
        tostring_result += PrintMessageField("composite_filter ",
            composite_filter, indent + 1, true);
        break;
    case google_firestore_v1_StructuredQuery_Filter_field_filter_tag:
        tostring_result += PrintMessageField("field_filter ",
            field_filter, indent + 1, true);
        break;
    case google_firestore_v1_StructuredQuery_Filter_unary_filter_tag:
        tostring_result += PrintMessageField("unary_filter ",
            unary_filter, indent + 1, true);
        break;
    }

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredQuery_CompositeFilter::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "CompositeFilter", this);
    std::string tostring_result;

    tostring_result += PrintEnumField("op: ", op, indent + 1, false);
    for (pb_size_t i = 0; i != filters_count; ++i) {
        tostring_result += PrintMessageField("filters ",
            filters[i], indent + 1, true);
    }

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredQuery_FieldFilter::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "FieldFilter", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("field ", field, indent + 1, false);
    tostring_result += PrintEnumField("op: ", op, indent + 1, false);
    tostring_result += PrintMessageField("value ", value, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_StructuredQuery_UnaryFilter::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "UnaryFilter", this);
    std::string tostring_result;

    tostring_result += PrintEnumField("op: ", op, indent + 1, false);
    switch (which_operand_type) {
    case google_firestore_v1_StructuredQuery_UnaryFilter_field_tag:
        tostring_result += PrintMessageField("field ",
            field, indent + 1, true);
        break;
    }

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredQuery_Order::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Order", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("field ", field, indent + 1, false);
    tostring_result += PrintEnumField("direction: ",
        direction, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_StructuredQuery_FieldReference::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "FieldReference", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("field_path: ",
        field_path, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredQuery_Projection::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Projection", this);
    std::string tostring_result;

    for (pb_size_t i = 0; i != fields_count; ++i) {
        tostring_result += PrintMessageField("fields ",
            fields[i], indent + 1, true);
    }

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredAggregationQuery::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "StructuredAggregationQuery", this);
    std::string tostring_result;

    switch (which_query_type) {
    case google_firestore_v1_StructuredAggregationQuery_structured_query_tag:
        tostring_result += PrintMessageField("structured_query ",
            structured_query, indent + 1, true);
        break;
    }
    for (pb_size_t i = 0; i != aggregations_count; ++i) {
        tostring_result += PrintMessageField("aggregations ",
            aggregations[i], indent + 1, true);
    }

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredAggregationQuery_Aggregation::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Aggregation", this);
    std::string tostring_result;

    switch (which_operator) {
    case google_firestore_v1_StructuredAggregationQuery_Aggregation_count_tag:
        tostring_result += PrintMessageField("count ",
            count, indent + 1, true);
        break;
    case google_firestore_v1_StructuredAggregationQuery_Aggregation_sum_tag:
        tostring_result += PrintMessageField("sum ", sum, indent + 1, true);
        break;
    case google_firestore_v1_StructuredAggregationQuery_Aggregation_avg_tag:
        tostring_result += PrintMessageField("avg ", avg, indent + 1, true);
        break;
    }
    tostring_result += PrintPrimitiveField("alias: ",
        alias, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string google_firestore_v1_StructuredAggregationQuery_Aggregation_Count::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Count", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("up_to ", up_to, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_StructuredAggregationQuery_Aggregation_Sum::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Sum", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("field ", field, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_StructuredAggregationQuery_Aggregation_Avg::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Avg", this);
    std::string tostring_result;

    tostring_result += PrintMessageField("field ", field, indent + 1, false);

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

std::string google_firestore_v1_Cursor::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "Cursor", this);
    std::string tostring_result;

    for (pb_size_t i = 0; i != values_count; ++i) {
        tostring_result += PrintMessageField("values ",
            values[i], indent + 1, true);
    }
    tostring_result += PrintPrimitiveField("before: ",
        before, indent + 1, false);

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
