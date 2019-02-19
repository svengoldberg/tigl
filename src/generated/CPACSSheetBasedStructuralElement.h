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

#include <CCPACSMaterialDefinition.h>
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSSheetBasedStructuralElements

    // generated from /xsd:schema/xsd:complexType[808]
    /// @brief sheetBasedStructuralElementType
    /// 
    /// sheetBasedStructuralElementType type, sheet definition
    /// for use in fuselage/structure
    /// 
    class CPACSSheetBasedStructuralElement
    {
    public:
        TIGL_EXPORT CPACSSheetBasedStructuralElement(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSSheetBasedStructuralElement();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const CCPACSMaterialDefinition& GetMaterialDefinition() const;
        TIGL_EXPORT virtual CCPACSMaterialDefinition& GetMaterialDefinition();

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string              m_uID;

        /// Material definition of the skin segment
        /// (Material, thickness, (lay-up))
        CCPACSMaterialDefinition m_materialDefinition;

    private:
#ifdef HAVE_CPP11
        CPACSSheetBasedStructuralElement(const CPACSSheetBasedStructuralElement&) = delete;
        CPACSSheetBasedStructuralElement& operator=(const CPACSSheetBasedStructuralElement&) = delete;

        CPACSSheetBasedStructuralElement(CPACSSheetBasedStructuralElement&&) = delete;
        CPACSSheetBasedStructuralElement& operator=(CPACSSheetBasedStructuralElement&&) = delete;
#else
        CPACSSheetBasedStructuralElement(const CPACSSheetBasedStructuralElement&);
        CPACSSheetBasedStructuralElement& operator=(const CPACSSheetBasedStructuralElement&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSSheetBasedStructuralElement = generated::CPACSSheetBasedStructuralElement;
#else
typedef generated::CPACSSheetBasedStructuralElement CCPACSSheetBasedStructuralElement;
#endif
} // namespace tigl
