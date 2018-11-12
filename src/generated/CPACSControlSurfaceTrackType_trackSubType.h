// Copyright (c) 2018 RISC Software GmbH
//
// This file was generated by CPACSGen from CPACS XML Schema (c) German Aerospace Center (DLR/SC).
// Do not edit, all changes are lost when files are re-generated.
//
// Licensed under the Apache License, Version 2.0 (the "License")
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include <string>
#include <cctype>

#include "CTiglError.h"
#include "to_string.h"

namespace tigl
{
namespace generated
{
    // This enum is used in:
    // CPACSControlSurfaceTrackType

    // generated from /xsd:schema/xsd:complexType[192]/xsd:complexContent/xsd:extension/xsd:sequence/xsd:element[3]/xsd:complexType/xsd:simpleContent
    enum CPACSControlSurfaceTrackType_trackSubType
    {
        trackSubType1,
        trackSubType2,
        trackSubType3,
        trackSubType4,
        trackSubType5,
        trackSubType6,
        trackSubType7
    };

    inline std::string CPACSControlSurfaceTrackType_trackSubTypeToString(const CPACSControlSurfaceTrackType_trackSubType& value)
    {
        switch(value) {
        case trackSubType1: return "trackSubType1";
        case trackSubType2: return "trackSubType2";
        case trackSubType3: return "trackSubType3";
        case trackSubType4: return "trackSubType4";
        case trackSubType5: return "trackSubType5";
        case trackSubType6: return "trackSubType6";
        case trackSubType7: return "trackSubType7";
        default: throw CTiglError("Invalid enum value \"" + std_to_string(static_cast<int>(value)) + "\" for enum type CPACSControlSurfaceTrackType_trackSubType");
        }
    }
    inline CPACSControlSurfaceTrackType_trackSubType stringToCPACSControlSurfaceTrackType_trackSubType(const std::string& value)
    {
        struct ToLower { std::string operator()(std::string str) { for (std::size_t i = 0; i < str.length(); i++) { str[i] = std::tolower(str[i]); } return str; } } toLower;
        if (toLower(value) == "tracksubtype1") { return trackSubType1; }
        if (toLower(value) == "tracksubtype2") { return trackSubType2; }
        if (toLower(value) == "tracksubtype3") { return trackSubType3; }
        if (toLower(value) == "tracksubtype4") { return trackSubType4; }
        if (toLower(value) == "tracksubtype5") { return trackSubType5; }
        if (toLower(value) == "tracksubtype6") { return trackSubType6; }
        if (toLower(value) == "tracksubtype7") { return trackSubType7; }
        throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSControlSurfaceTrackType_trackSubType");
    }
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using ECPACSControlSurfaceTrackType_trackSubType = generated::CPACSControlSurfaceTrackType_trackSubType;
#else
typedef generated::CPACSControlSurfaceTrackType_trackSubType ECPACSControlSurfaceTrackType_trackSubType;
#endif
using generated::trackSubType1;
using generated::trackSubType2;
using generated::trackSubType3;
using generated::trackSubType4;
using generated::trackSubType5;
using generated::trackSubType6;
using generated::trackSubType7;
} // namespace tigl
