// Copyright (c) 2020 RISC Software GmbH
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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <string>
#include <tixi.h>
#include "CPACSComposites.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CTiglUIDObject;

namespace generated
{
    class CPACSVehicles;

    // This class is used in:
    // CPACSVehicles

    /// @brief Materials
    /// 
    /// Materials type, containing material and composite data.
    /// A material describes the properties of a certain material.
    /// Several materials can be combined within one composite.
    /// 
    class CPACSMaterials
    {
    public:
        TIGL_EXPORT CPACSMaterials(CPACSVehicles* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSMaterials();

        TIGL_EXPORT CPACSVehicles* GetParent();

        TIGL_EXPORT const CPACSVehicles* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<CPACSComposites>& GetComposites() const;
        TIGL_EXPORT virtual boost::optional<CPACSComposites>& GetComposites();

        TIGL_EXPORT virtual CPACSComposites& GetComposites(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveComposites();

    protected:
        CPACSVehicles* m_parent;

        CTiglUIDManager* m_uidMgr;

        boost::optional<CPACSComposites> m_composites;

    private:
        CPACSMaterials(const CPACSMaterials&) = delete;
        CPACSMaterials& operator=(const CPACSMaterials&) = delete;

        CPACSMaterials(CPACSMaterials&&) = delete;
        CPACSMaterials& operator=(CPACSMaterials&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSMaterials = generated::CPACSMaterials;
using CCPACSVehicles = generated::CPACSVehicles;
} // namespace tigl
