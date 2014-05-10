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
// Description:
//   The API to interact with Drive.
// Classes:
//   Property
// Documentation:
//   https://developers.google.com/drive/

#include "google/drive_api/property.h"
#include <string>
#include "googleapis/client/data/jsoncpp_data.h"
#include "googleapis/strings/stringpiece.h"


#include <string>
#include "googleapis/strings/strcat.h"

namespace google_drive_api {
using namespace googleapis;


// Object factory method (static).
Property* Property::New() {
  return new client::JsonCppCapsule<Property>;
}

// Standard immutable constructor.
Property::Property(const Json::Value& storage)
  : client::JsonCppData(storage) {
}

// Standard mutable constructor.
Property::Property(Json::Value* storage)
  : client::JsonCppData(storage) {
}

// Standard destructor.
Property::~Property() {
}
}  // namespace google_drive_api
