// Copyright 2010 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License. You may obtain a copy of
// the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the
// License for the specific language governing permissions and limitations under
// the License.

// This code was generated by google-apis-code-generator 1.5.0
//   Build date: 2014-11-17 18:43:33 UTC
//   on: 2014-12-19, 09:55:43 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Calendar API (calendar/v3)
// Generated from:
//   Version: v3
//   Revision: 111
// Generated by:
//    Tool: google-apis-code-generator 1.5.0
//     C++: 0.1.2
#ifndef  GOOGLE_CALENDAR_API_ACL_H_
#define  GOOGLE_CALENDAR_API_ACL_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

#include "google/calendar_api/acl_rule.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_calendar_api {
using namespace googleapis;

/**
 * No description provided.
 *
 * @ingroup DataObject
 */
class Acl : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Acl* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Acl(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Acl(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Acl();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::Acl</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::Acl");
  }

  /**
   * Determine if the '<code>etag</code>' attribute was set.
   *
   * @return true if the '<code>etag</code>' attribute was set.
   */
  bool has_etag() const {
    return Storage().isMember("etag");
  }

  /**
   * Clears the '<code>etag</code>' attribute.
   */
  void clear_etag() {
    MutableStorage()->removeMember("etag");
  }


  /**
   * Get the value of the '<code>etag</code>' attribute.
   */
  const StringPiece get_etag() const {
    const Json::Value& v = Storage("etag");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>etag</code>' attribute.
   *
   * ETag of the collection.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>items</code>' attribute was set.
   *
   * @return true if the '<code>items</code>' attribute was set.
   */
  bool has_items() const {
    return Storage().isMember("items");
  }

  /**
   * Clears the '<code>items</code>' attribute.
   */
  void clear_items() {
    MutableStorage()->removeMember("items");
  }


  /**
   * Get a reference to the value of the '<code>items</code>' attribute.
   */
  const client::JsonCppArray<AclRule > get_items() const {
     const Json::Value& storage = Storage("items");
    return client::JsonValueToCppValueHelper<client::JsonCppArray<AclRule > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>items</code>' property.
   *
   * List of rules on the access control list.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppArray<AclRule > mutable_items() {
    Json::Value* storage = MutableStorage("items");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppArray<AclRule > >(storage);
  }

  /**
   * Determine if the '<code>kind</code>' attribute was set.
   *
   * @return true if the '<code>kind</code>' attribute was set.
   */
  bool has_kind() const {
    return Storage().isMember("kind");
  }

  /**
   * Clears the '<code>kind</code>' attribute.
   */
  void clear_kind() {
    MutableStorage()->removeMember("kind");
  }


  /**
   * Get the value of the '<code>kind</code>' attribute.
   */
  const StringPiece get_kind() const {
    const Json::Value& v = Storage("kind");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>kind</code>' attribute.
   *
   * Type of the collection ("calendar#acl").
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>nextPageToken</code>' attribute was set.
   *
   * @return true if the '<code>nextPageToken</code>' attribute was set.
   */
  bool has_next_page_token() const {
    return Storage().isMember("nextPageToken");
  }

  /**
   * Clears the '<code>nextPageToken</code>' attribute.
   */
  void clear_next_page_token() {
    MutableStorage()->removeMember("nextPageToken");
  }


  /**
   * Get the value of the '<code>nextPageToken</code>' attribute.
   */
  const StringPiece get_next_page_token() const {
    const Json::Value& v = Storage("nextPageToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextPageToken</code>' attribute.
   *
   * Token used to access the next page of this result. Omitted if no further
   * results are available, in which case nextSyncToken is provided.
   *
   * @param[in] value The new value.
   */
  void set_next_page_token(const StringPiece& value) {
    *MutableStorage("nextPageToken") = value.data();
  }

  /**
   * Determine if the '<code>nextSyncToken</code>' attribute was set.
   *
   * @return true if the '<code>nextSyncToken</code>' attribute was set.
   */
  bool has_next_sync_token() const {
    return Storage().isMember("nextSyncToken");
  }

  /**
   * Clears the '<code>nextSyncToken</code>' attribute.
   */
  void clear_next_sync_token() {
    MutableStorage()->removeMember("nextSyncToken");
  }


  /**
   * Get the value of the '<code>nextSyncToken</code>' attribute.
   */
  const StringPiece get_next_sync_token() const {
    const Json::Value& v = Storage("nextSyncToken");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>nextSyncToken</code>' attribute.
   *
   * Token used at a later point in time to retrieve only the entries that have
   * changed since this result was returned. Omitted if further results are
   * available, in which case nextPageToken is provided.
   *
   * @param[in] value The new value.
   */
  void set_next_sync_token(const StringPiece& value) {
    *MutableStorage("nextSyncToken") = value.data();
  }

 private:
  void operator=(const Acl&);
};  // Acl
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_ACL_H_
