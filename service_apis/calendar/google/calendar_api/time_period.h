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
#ifndef  GOOGLE_CALENDAR_API_TIME_PERIOD_H_
#define  GOOGLE_CALENDAR_API_TIME_PERIOD_H_

#include "googleapis/base/macros.h"
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/client/util/date_time.h"
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
class TimePeriod : public client::JsonCppData {
 public:

  /**
   * Creates a new default instance.
   *
   * @return Ownership is passed back to the caller.
   */
  static TimePeriod* New();

  /**
   * Standard constructor for an immutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TimePeriod(const Json::Value& storage);

  /**
   * Standard constructor for a mutable data object instance.
   *
   * @param[in] storage  The underlying data storage for this instance.
   */
  explicit TimePeriod(Json::Value* storage);

  /**
   * Standard destructor.
   */
  virtual ~TimePeriod();

  /**
   * Returns a string denoting the type of this data object.
   *
   * @return <code>google_calendar_api::TimePeriod</code>
   */
  const StringPiece GetTypeName() const {
    return StringPiece("google_calendar_api::TimePeriod");
  }

  /**
   * Determine if the '<code>end</code>' attribute was set.
   *
   * @return true if the '<code>end</code>' attribute was set.
   */
  bool has_end() const {
    return Storage().isMember("end");
  }

  /**
   * Clears the '<code>end</code>' attribute.
   */
  void clear_end() {
    MutableStorage()->removeMember("end");
  }


  /**
   * Get the value of the '<code>end</code>' attribute.
   */
  client::DateTime get_end() const {
    const Json::Value& storage = Storage("end");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>end</code>' attribute.
   *
   * The (exclusive) end of the time period.
   *
   * @param[in] value The new value.
   */
  void set_end(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("end"));
  }

  /**
   * Determine if the '<code>start</code>' attribute was set.
   *
   * @return true if the '<code>start</code>' attribute was set.
   */
  bool has_start() const {
    return Storage().isMember("start");
  }

  /**
   * Clears the '<code>start</code>' attribute.
   */
  void clear_start() {
    MutableStorage()->removeMember("start");
  }


  /**
   * Get the value of the '<code>start</code>' attribute.
   */
  client::DateTime get_start() const {
    const Json::Value& storage = Storage("start");
    return client::JsonValueToCppValueHelper<client::DateTime >(storage);
  }

  /**
   * Change the '<code>start</code>' attribute.
   *
   * The (inclusive) start of the time period.
   *
   * @param[in] value The new value.
   */
  void set_start(client::DateTime value) {
    client::SetJsonValueFromCppValueHelper<client::DateTime >(
      value, MutableStorage("start"));
  }

 private:
  void operator=(const TimePeriod&);
};  // TimePeriod
}  // namespace google_calendar_api
#endif  // GOOGLE_CALENDAR_API_TIME_PERIOD_H_
