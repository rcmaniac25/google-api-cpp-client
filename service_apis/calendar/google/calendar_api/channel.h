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
#ifndef  GOOGLE_CALENDAR_API_CHANNEL_H_
#define  GOOGLE_CALENDAR_API_CHANNEL_H_

#include <string>
#include "googleapis/base/integral_types.h"
#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"

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
class Channel : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static Channel* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Channel(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit Channel(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~Channel();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::Channel</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::Channel");
  }

  /**
   * Determine if the '<code>address</code>' attribute was set.
   *
   * @return true if the '<code>address</code>' attribute was set.
   */
  bool has_address() const {
    return Storage().isMember("address");
  }

  /**
   * Clears the '<code>address</code>' attribute.
   */
  void clear_address() {
    MutableStorage()->removeMember("address");
  }


  /**
   * Get the value of the '<code>address</code>' attribute.
   */
  const StringPiece get_address() const {
    const Json::Value& v = Storage("address");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>address</code>' attribute.
   *
   * The address where notifications are delivered for this channel.
   *
   * @param[in] value The new value.
   */
  void set_address(const StringPiece& value) {
    *MutableStorage("address") = value.data();
  }

  /**
   * Determine if the '<code>expiration</code>' attribute was set.
   *
   * @return true if the '<code>expiration</code>' attribute was set.
   */
  bool has_expiration() const {
    return Storage().isMember("expiration");
  }

  /**
   * Clears the '<code>expiration</code>' attribute.
   */
  void clear_expiration() {
    MutableStorage()->removeMember("expiration");
  }


  /**
   * Get the value of the '<code>expiration</code>' attribute.
   */
  int64 get_expiration() const {
    const Json::Value& storage = Storage("expiration");
    return client::JsonValueToCppValueHelper<int64 >(storage);
  }

  /**
   * Change the '<code>expiration</code>' attribute.
   *
   * Date and time of notification channel expiration, expressed as a Unix
   * timestamp, in milliseconds. Optional.
   *
   * @param[in] value The new value.
   */
  void set_expiration(int64 value) {
    client::SetJsonValueFromCppValueHelper<int64 >(
      value, MutableStorage("expiration"));
  }

  /**
   * Determine if the '<code>id</code>' attribute was set.
   *
   * @return true if the '<code>id</code>' attribute was set.
   */
  bool has_id() const {
    return Storage().isMember("id");
  }

  /**
   * Clears the '<code>id</code>' attribute.
   */
  void clear_id() {
    MutableStorage()->removeMember("id");
  }


  /**
   * Get the value of the '<code>id</code>' attribute.
   */
  const StringPiece get_id() const {
    const Json::Value& v = Storage("id");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>id</code>' attribute.
   *
   * A UUID or similar unique string that identifies this channel.
   *
   * @param[in] value The new value.
   */
  void set_id(const StringPiece& value) {
    *MutableStorage("id") = value.data();
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
   * Identifies this as a notification channel used to watch for changes to a
   * resource. Value: the fixed string "api#channel".
   *
   * @param[in] value The new value.
   */
  void set_kind(const StringPiece& value) {
    *MutableStorage("kind") = value.data();
  }

  /**
   * Determine if the '<code>params</code>' attribute was set.
   *
   * @return true if the '<code>params</code>' attribute was set.
   */
  bool has_params() const {
    return Storage().isMember("params");
  }

  /**
   * Clears the '<code>params</code>' attribute.
   */
  void clear_params() {
    MutableStorage()->removeMember("params");
  }


  /**
   * Get a reference to the value of the '<code>params</code>' attribute.
   */
  const client::JsonCppAssociativeArray<string > get_params() const {
     const Json::Value& storage = Storage("params");
    return client::JsonValueToCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Gets a reference to a mutable value of the '<code>params</code>' property.
   *
   * Additional parameters controlling delivery channel behavior. Optional.
   *
   * @return The result can be modified to change the attribute value.
   */
  client::JsonCppAssociativeArray<string > mutable_params() {
    Json::Value* storage = MutableStorage("params");
    return client::JsonValueToMutableCppValueHelper<client::JsonCppAssociativeArray<string > >(storage);
  }

  /**
   * Determine if the '<code>payload</code>' attribute was set.
   *
   * @return true if the '<code>payload</code>' attribute was set.
   */
  bool has_payload() const {
    return Storage().isMember("payload");
  }

  /**
   * Clears the '<code>payload</code>' attribute.
   */
  void clear_payload() {
    MutableStorage()->removeMember("payload");
  }


  /**
   * Get the value of the '<code>payload</code>' attribute.
   */
  bool get_payload() const {
    const Json::Value& storage = Storage("payload");
    return client::JsonValueToCppValueHelper<bool >(storage);
  }

  /**
   * Change the '<code>payload</code>' attribute.
   *
   * A Boolean value to indicate whether payload is wanted. Optional.
   *
   * @param[in] value The new value.
   */
  void set_payload(bool value) {
    client::SetJsonValueFromCppValueHelper<bool >(
      value, MutableStorage("payload"));
  }

  /**
   * Determine if the '<code>resourceId</code>' attribute was set.
   *
   * @return true if the '<code>resourceId</code>' attribute was set.
   */
  bool has_resource_id() const {
    return Storage().isMember("resourceId");
  }

  /**
   * Clears the '<code>resourceId</code>' attribute.
   */
  void clear_resource_id() {
    MutableStorage()->removeMember("resourceId");
  }


  /**
   * Get the value of the '<code>resourceId</code>' attribute.
   */
  const StringPiece get_resource_id() const {
    const Json::Value& v = Storage("resourceId");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>resourceId</code>' attribute.
   *
   * An opaque ID that identifies the resource being watched on this channel.
   * Stable across different API versions.
   *
   * @param[in] value The new value.
   */
  void set_resource_id(const StringPiece& value) {
    *MutableStorage("resourceId") = value.data();
  }

  /**
   * Determine if the '<code>resourceUri</code>' attribute was set.
   *
   * @return true if the '<code>resourceUri</code>' attribute was set.
   */
  bool has_resource_uri() const {
    return Storage().isMember("resourceUri");
  }

  /**
   * Clears the '<code>resourceUri</code>' attribute.
   */
  void clear_resource_uri() {
    MutableStorage()->removeMember("resourceUri");
  }


  /**
   * Get the value of the '<code>resourceUri</code>' attribute.
   */
  const StringPiece get_resource_uri() const {
    const Json::Value& v = Storage("resourceUri");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>resourceUri</code>' attribute.
   *
   * A version-specific identifier for the watched resource.
   *
   * @param[in] value The new value.
   */
  void set_resource_uri(const StringPiece& value) {
    *MutableStorage("resourceUri") = value.data();
  }

  /**
   * Determine if the '<code>token</code>' attribute was set.
   *
   * @return true if the '<code>token</code>' attribute was set.
   */
  bool has_token() const {
    return Storage().isMember("token");
  }

  /**
   * Clears the '<code>token</code>' attribute.
   */
  void clear_token() {
    MutableStorage()->removeMember("token");
  }


  /**
   * Get the value of the '<code>token</code>' attribute.
   */
  const StringPiece get_token() const {
    const Json::Value& v = Storage("token");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>token</code>' attribute.
   *
   * An arbitrary string delivered to the target address with each notification
   * delivered over this channel. Optional.
   *
   * @param[in] value The new value.
   */
  void set_token(const StringPiece& value) {
    *MutableStorage("token") = value.data();
  }

  /**
   * Determine if the '<code>type</code>' attribute was set.
   *
   * @return true if the '<code>type</code>' attribute was set.
   */
  bool has_type() const {
    return Storage().isMember("type");
  }

  /**
   * Clears the '<code>type</code>' attribute.
   */
  void clear_type() {
    MutableStorage()->removeMember("type");
  }


  /**
   * Get the value of the '<code>type</code>' attribute.
   */
  const StringPiece get_type() const {
    const Json::Value& v = Storage("type");
    if (v == Json::Value::null) return StringPiece("");
    return StringPiece(v.asCString());
  }

  /**
   * Change the '<code>type</code>' attribute.
   *
   * The type of delivery mechanism used for this channel.
   *
   * @param[in] value The new value.
   */
  void set_type(const StringPiece& value) {
    *MutableStorage("type") = value.data();
  }

 private:
  void operator=(const Channel&);
};  // Channel
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_CHANNEL_H_
