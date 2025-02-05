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

#include "mutation.nanopb.h"

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



const pb_field_t firestore_client_MutationQueue_fields[3] = {
    PB_FIELD(  1, INT32   , SINGULAR, STATIC  , FIRST, firestore_client_MutationQueue, last_acknowledged_batch_id, last_acknowledged_batch_id, 0),
    PB_FIELD(  2, BYTES   , SINGULAR, POINTER , OTHER, firestore_client_MutationQueue, last_stream_token, last_acknowledged_batch_id, 0),
    PB_LAST_FIELD
};

const pb_field_t firestore_client_WriteBatch_fields[5] = {
    PB_FIELD(  1, INT32   , SINGULAR, STATIC  , FIRST, firestore_client_WriteBatch, batch_id, batch_id, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, POINTER , OTHER, firestore_client_WriteBatch, writes, batch_id, &google_firestore_v1_Write_fields),
    PB_FIELD(  3, MESSAGE , SINGULAR, STATIC  , OTHER, firestore_client_WriteBatch, local_write_time, writes, &google_protobuf_Timestamp_fields),
    PB_FIELD(  4, MESSAGE , REPEATED, POINTER , OTHER, firestore_client_WriteBatch, base_writes, local_write_time, &google_firestore_v1_Write_fields),
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
PB_STATIC_ASSERT((pb_membersize(firestore_client_WriteBatch, local_write_time) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_firestore_client_MutationQueue_firestore_client_WriteBatch)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 *
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(firestore_client_WriteBatch, local_write_time) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_firestore_client_MutationQueue_firestore_client_WriteBatch)
#endif


std::string firestore_client_MutationQueue::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "MutationQueue", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("last_acknowledged_batch_id: ",
        last_acknowledged_batch_id, indent + 1, false);
    tostring_result += PrintPrimitiveField("last_stream_token: ",
        last_stream_token, indent + 1, false);

    bool is_root = indent == 0;
    if (!tostring_result.empty() || is_root) {
      std::string tostring_tail = PrintTail(indent);
      return tostring_header + tostring_result + tostring_tail;
    } else {
      return "";
    }
}

std::string firestore_client_WriteBatch::ToString(int indent) const {
    std::string tostring_header = PrintHeader(indent, "WriteBatch", this);
    std::string tostring_result;

    tostring_result += PrintPrimitiveField("batch_id: ",
        batch_id, indent + 1, false);
    for (pb_size_t i = 0; i != writes_count; ++i) {
        tostring_result += PrintMessageField("writes ",
            writes[i], indent + 1, true);
    }
    tostring_result += PrintMessageField("local_write_time ",
        local_write_time, indent + 1, false);
    for (pb_size_t i = 0; i != base_writes_count; ++i) {
        tostring_result += PrintMessageField("base_writes ",
            base_writes[i], indent + 1, true);
    }

    std::string tostring_tail = PrintTail(indent);
    return tostring_header + tostring_result + tostring_tail;
}

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */
