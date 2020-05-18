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
#include "CPACSCap.h"
#include "CPACSLateralCap.h"
#include "CreateIfNotExists.h"
#include "CTiglUIDObject.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSStructuralWallElements;

    // This class is used in:
    // CPACSStructuralWallElements

    class CPACSStructuralWallElement : public CTiglOptUIDObject
    {
    public:
        TIGL_EXPORT CPACSStructuralWallElement(CPACSStructuralWallElements* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSStructuralWallElement();

        TIGL_EXPORT CPACSStructuralWallElements* GetParent();

        TIGL_EXPORT const CPACSStructuralWallElements* GetParent() const;

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<std::string>& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::string& GetSheetElementUID() const;
        TIGL_EXPORT virtual void SetSheetElementUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<CPACSCap>& GetInnerLongitudinalCap() const;
        TIGL_EXPORT virtual boost::optional<CPACSCap>& GetInnerLongitudinalCap();

        TIGL_EXPORT virtual const boost::optional<CPACSCap>& GetOuterLongitudinalCap() const;
        TIGL_EXPORT virtual boost::optional<CPACSCap>& GetOuterLongitudinalCap();

        TIGL_EXPORT virtual const boost::optional<CPACSLateralCap>& GetLateralCaps() const;
        TIGL_EXPORT virtual boost::optional<CPACSLateralCap>& GetLateralCaps();

        TIGL_EXPORT virtual CPACSCap& GetInnerLongitudinalCap(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveInnerLongitudinalCap();

        TIGL_EXPORT virtual CPACSCap& GetOuterLongitudinalCap(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveOuterLongitudinalCap();

        TIGL_EXPORT virtual CPACSLateralCap& GetLateralCaps(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveLateralCaps();

    protected:
        CPACSStructuralWallElements* m_parent;

        CTiglUIDManager* m_uidMgr;

        boost::optional<std::string>     m_uID;

        /// Reference to a sheet element definition specifying the physical properties of the wall's shell.
        std::string                      m_sheetElementUID;

        /// Reinforcement at inner side of wall. This is either, depending on the extrusion direction flag, the edge of the wall that connects the positions ("positiveDirection") or the edge of the wall where the wall intersects with the fuselage skin in the opposite direction of the extrusion direction.
        boost::optional<CPACSCap>        m_innerLongitudinalCap;

        /// Reinforcement at outer side of wall. The outer side of the wall is defined as the edge of the wall at the intersection of the wall with the fuselage skin running along the main direction of the wall.
        boost::optional<CPACSCap>        m_outerLongitudinalCap;

        /// Lateral caps are the reinforcements of
        /// the wall at the edges lateral to the
        /// main direction of the wall. These caps
        /// can be either defined at start, end,
        /// start and end or at all wall positions
        /// according to the placement flag.
        boost::optional<CPACSLateralCap> m_lateralCaps;

    private:
        CPACSStructuralWallElement(const CPACSStructuralWallElement&) = delete;
        CPACSStructuralWallElement& operator=(const CPACSStructuralWallElement&) = delete;

        CPACSStructuralWallElement(CPACSStructuralWallElement&&) = delete;
        CPACSStructuralWallElement& operator=(CPACSStructuralWallElement&&) = delete;
    };
} // namespace generated

// Aliases in tigl namespace
using CCPACSStructuralWallElement = generated::CPACSStructuralWallElement;
using CCPACSStructuralWallElements = generated::CPACSStructuralWallElements;
} // namespace tigl
