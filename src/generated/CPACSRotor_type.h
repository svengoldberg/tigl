// Copyright (c) 2016 RISC Software GmbH
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
    // CPACSRotor
    
    // generated from /xsd:schema/xsd:complexType[771]/xsd:complexContent/xsd:extension/xsd:all/xsd:element[4]/xsd:simpleType
    enum CPACSRotor_type
    {
        mainRotor,
        tailRotor,
        fenestron,
        propeller
    };
    
    inline std::string CPACSRotor_typeToString(const CPACSRotor_type& value)
    {
        switch(value) {
        case mainRotor: return "mainRotor";
        case tailRotor: return "tailRotor";
        case fenestron: return "fenestron";
        case propeller: return "propeller";
        default: throw CTiglError("Invalid enum value \"" + std_to_string(static_cast<int>(value)) + "\" for enum type CPACSRotor_type");
        }
    }
    inline CPACSRotor_type stringToCPACSRotor_type(const std::string& value)
    {
        struct ToLower { std::string operator()(std::string str) { for (std::size_t i = 0; i < str.length(); i++) { str[i] = std::tolower(str[i]); } return str; } } toLower;
        if (toLower(value) == "mainrotor") { return mainRotor; }
        if (toLower(value) == "tailrotor") { return tailRotor; }
        if (toLower(value) == "fenestron") { return fenestron; }
        if (toLower(value) == "propeller") { return propeller; }
        throw CTiglError("Invalid string value \"" + value + "\" for enum type CPACSRotor_type");
    }
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using ECPACSRotor_type = generated::CPACSRotor_type;
#else
typedef generated::CPACSRotor_type ECPACSRotor_type;
#endif
using generated::mainRotor;
using generated::tailRotor;
using generated::fenestron;
using generated::propeller;
} // namespace tigl
