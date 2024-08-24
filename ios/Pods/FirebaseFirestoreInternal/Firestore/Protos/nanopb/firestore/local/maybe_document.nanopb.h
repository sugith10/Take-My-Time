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

/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.8 */

#ifndef PB_FIRESTORE_CLIENT_MAYBE_DOCUMENT_NANOPB_H_INCLUDED
#define PB_FIRESTORE_CLIENT_MAYBE_DOCUMENT_NANOPB_H_INCLUDED
#include <pb.h>

#include "google/firestore/v1/document.nanopb.h"

#include "google/protobuf/timestamp.nanopb.h"

#include <string>

namespace firebase {
namespace firestore {

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif


/* Struct definitions */
typedef struct _firestore_client_NoDocument {
    pb_bytes_array_t *name;
    google_protobuf_Timestamp read_time;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:firestore_client_NoDocument) */
} firestore_client_NoDocument;

typedef struct _firestore_client_UnknownDocument {
    pb_bytes_array_t *name;
    google_protobuf_Timestamp version;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:firestore_client_UnknownDocument) */
} firestore_client_UnknownDocument;

typedef struct _firestore_client_MaybeDocument {
    pb_size_t which_document_type;
    union {
        firestore_client_NoDocument no_document;
        google_firestore_v1_Document document;
        firestore_client_UnknownDocument unknown_document;
    };
    bool has_committed_mutations;

    std::string ToString(int indent = 0) const;
/* @@protoc_insertion_point(struct:firestore_client_MaybeDocument) */
} firestore_client_MaybeDocument;

/* Default values for struct fields */

/* Initializer values for message structs */
#define firestore_client_NoDocument_init_default {NULL, google_protobuf_Timestamp_init_default}
#define firestore_client_UnknownDocument_init_default {NULL, google_protobuf_Timestamp_init_default}
#define firestore_client_MaybeDocument_init_default {0, {firestore_client_NoDocument_init_default}, 0}
#define firestore_client_NoDocument_init_zero    {NULL, google_protobuf_Timestamp_init_zero}
#define firestore_client_UnknownDocument_init_zero {NULL, google_protobuf_Timestamp_init_zero}
#define firestore_client_MaybeDocument_init_zero {0, {firestore_client_NoDocument_init_zero}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define firestore_client_NoDocument_name_tag     1
#define firestore_client_NoDocument_read_time_tag 2
#define firestore_client_UnknownDocument_name_tag 1
#define firestore_client_UnknownDocument_version_tag 2
#define firestore_client_MaybeDocument_no_document_tag 1
#define firestore_client_MaybeDocument_document_tag 2
#define firestore_client_MaybeDocument_unknown_document_tag 3
#define firestore_client_MaybeDocument_has_committed_mutations_tag 4

/* Struct field encoding specification for nanopb */
extern const pb_field_t firestore_client_NoDocument_fields[3];
extern const pb_field_t firestore_client_UnknownDocument_fields[3];
extern const pb_field_t firestore_client_MaybeDocument_fields[5];

/* Maximum encoded size of messages (where known) */
/* firestore_client_NoDocument_size depends on runtime parameters */
/* firestore_client_UnknownDocument_size depends on runtime parameters */
/* firestore_client_MaybeDocument_size depends on runtime parameters */

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MAYBE_DOCUMENT_MESSAGES \


#endif

}  // namespace firestore
}  // namespace firebase

/* @@protoc_insertion_point(eof) */

#endif
