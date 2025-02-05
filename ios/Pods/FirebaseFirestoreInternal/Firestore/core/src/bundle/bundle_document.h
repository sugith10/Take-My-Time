/*
 * Copyright 2021 Google LLC
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
#ifndef FIRESTORE_CORE_SRC_BUNDLE_BUNDLE_DOCUMENT_H_
#define FIRESTORE_CORE_SRC_BUNDLE_BUNDLE_DOCUMENT_H_

#include <utility>

#include "Firestore/core/src/bundle/bundle_element.h"
#include "Firestore/core/src/model/mutable_document.h"

namespace firebase {
namespace firestore {
namespace bundle {

/** Represents a document that was saved to a bundle. */
class BundleDocument : public BundleElement {
 public:
  BundleDocument() = default;

  explicit BundleDocument(model::MutableDocument document)
      : document_(std::move(document)) {
  }

  Type element_type() const override {
    return Type::Document;
  }

  /** Returns the key for this document. */
  const model::DocumentKey& key() const {
    return document_.key();
  }

  /** Returns the document. */
  const model::MutableDocument& document() const {
    return document_;
  }

 private:
  model::MutableDocument document_;
};

inline bool operator==(const BundleDocument& lhs, const BundleDocument& rhs) {
  return lhs.document() == rhs.document();
}

inline bool operator!=(const BundleDocument& lhs, const BundleDocument& rhs) {
  return !(lhs == rhs);
}

}  // namespace bundle
}  // namespace firestore
}  // namespace firebase

#endif  // FIRESTORE_CORE_SRC_BUNDLE_BUNDLE_DOCUMENT_H_
