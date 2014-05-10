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

// This code was generated by google-apis-code-generator 1.4.3
//   Build date: 2014-04-15 19:10:39 UTC
//   on: 2014-04-30, 23:25:10 UTC
//   C++ generator version:

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   Drive API (drive/v2)
// Generated from:
//   Version: v2
//   Revision: 123
// Generated by:
//    Tool: google-apis-code-generator 1.4.3
//     C++: 0.1.2
#ifndef  GOOGLE_DRIVE_API_PROPERTY_H_
#define  GOOGLE_DRIVE_API_PROPERTY_H_

#include <string>
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

namespace Json {
class Value;
}  // namespace Json

namespace google_drive_api {
using namespace googleapis;

/**
 * A key-value pair that is either public or private to an application.
 *
 * @ingroup DataObject
 */
class Property : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Property* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Property(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Property(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Property();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_drive_api::Property</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_drive_api::Property");
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
   * ETag of the property.
   *
   * @param[in] value The new value.
   */
  void set_etag(const StringPiece& value) {
    *MutableStorage("etag") = value.data();
  }

  /**
   * Determine if the '<code>key</code>' attribute was set.
   *
   * @return true if the '<code>key</code>' attribute was set.
   */
  bool has_key() const {
    return Storage().isMember("key");
  }

  /**
   * Clears the '<code>key</code>' attribute.
   */
  void clear_key() {
    MutableStorage()->removeMember("key");
  }


  /**
   * Get the value of the '<code>key</code>' attribute.
   */
  const StringPiece get_key() const {
    const Json::Value& v = Storage("key");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>key</code>' attribute.
   *
   * The key of this property.
   *
   * @param[in] value The new value.
   */
  void set_key(const StringPiece& value) {
    *MutableStorage("key") = value.data();
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
   * This is always drive#property.
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>selfLink</code>' attribute was set.
   *
   * @return true if the '<code>selfLink</code>' attribute was set.
   */
  bool has_self_link() const {
    return Storage().isMember("selfLink");
  }

  /**
   * Clears the '<code>selfLink</code>' attribute.
   */
  void clear_self_link() {
    MutableStorage()->removeMember("selfLink");
  }


  /**
   * Get the value of the '<code>selfLink</code>' attribute.
   */
  const StringPiece get_self_link() const {
    const Json::Value& v = Storage("selfLink");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>selfLink</code>' attribute.
   *
   * The link back to this property.
   *
   * @param[in] value The new value.
   */
  void set_self_link(const StringPiece& value) {
    *MutableStorage("selfLink") = value.data();
  }

  /**
   * Determine if the '<code>value</code>' attribute was set.
   *
   * @return true if the '<code>value</code>' attribute was set.
   */
  bool has_value() const {
    return Storage().isMember("value");
  }

  /**
   * Clears the '<code>value</code>' attribute.
   */
  void clear_value() {
    MutableStorage()->removeMember("value");
  }


  /**
   * Get the value of the '<code>value</code>' attribute.
   */
  const StringPiece get_value() const {
    const Json::Value& v = Storage("value");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>value</code>' attribute.
   *
   * The value of this property.
   *
   * @param[in] value The new value.
   */
  void set_value(const StringPiece& value) {
    *MutableStorage("value") = value.data();
  }

  /**
   * Determine if the '<code>visibility</code>' attribute was set.
   *
   * @return true if the '<code>visibility</code>' attribute was set.
   */
  bool has_visibility() const {
    return Storage().isMember("visibility");
  }

  /**
   * Clears the '<code>visibility</code>' attribute.
   */
  void clear_visibility() {
    MutableStorage()->removeMember("visibility");
  }


  /**
   * Get the value of the '<code>visibility</code>' attribute.
   */
  const StringPiece get_visibility() const {
    const Json::Value& v = Storage("visibility");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>visibility</code>' attribute.
   *
   * The visibility of this property.
   *
   * @param[in] value The new value.
   */
  void set_visibility(const StringPiece& value) {
    *MutableStorage("visibility") = value.data();
  }

 private:
  void operator=(const Property&);
};  // Property
}  // namespace google_drive_api
#endif  // GOOGLE_DRIVE_API_PROPERTY_H_
