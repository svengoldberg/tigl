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

#include <boost/optional.hpp>
#include <boost/utility/in_place_factory.hpp>
#include <CCPACSPointListXYZ.h>
#include <CCPACSWingProfileCST.h>
#include <string>
#include <TiglSymmetryAxis.h>
#include <tixi.h>
#include <typeinfo>
#include "CreateIfNotExists.h"
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSFuselageProfiles
    // CPACSRotorAirfoils
    // CPACSWingAirfoils

    // generated from /xsd:schema/xsd:complexType[746]
    class CPACSProfileGeometry
    {
    public:
        TIGL_EXPORT CPACSProfileGeometry(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSProfileGeometry();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT bool ValidateChoices() const;

        TIGL_EXPORT virtual const boost::optional<TiglSymmetryAxis>& GetSymmetry() const;
        TIGL_EXPORT virtual void SetSymmetry(const boost::optional<TiglSymmetryAxis>& value);

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<CCPACSPointListXYZ>& GetPointList_choice1() const;
        TIGL_EXPORT virtual boost::optional<CCPACSPointListXYZ>& GetPointList_choice1();

        TIGL_EXPORT virtual const boost::optional<CCPACSWingProfileCST>& GetCst2D_choice2() const;
        TIGL_EXPORT virtual boost::optional<CCPACSWingProfileCST>& GetCst2D_choice2();

        TIGL_EXPORT virtual CCPACSPointListXYZ& GetPointList_choice1(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemovePointList_choice1();

        TIGL_EXPORT virtual CCPACSWingProfileCST& GetCst2D_choice2(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveCst2D_choice2();

    protected:
        CTiglUIDManager* m_uidMgr;

        boost::optional<TiglSymmetryAxis>     m_symmetry;
        std::string                           m_uID;
        std::string                           m_name;
        boost::optional<std::string>          m_description;
        boost::optional<CCPACSPointListXYZ>   m_pointList_choice1;
        boost::optional<CCPACSWingProfileCST> m_cst2D_choice2;

    private:
#ifdef HAVE_CPP11
        CPACSProfileGeometry(const CPACSProfileGeometry&) = delete;
        CPACSProfileGeometry& operator=(const CPACSProfileGeometry&) = delete;

        CPACSProfileGeometry(CPACSProfileGeometry&&) = delete;
        CPACSProfileGeometry& operator=(CPACSProfileGeometry&&) = delete;
#else
        CPACSProfileGeometry(const CPACSProfileGeometry&);
        CPACSProfileGeometry& operator=(const CPACSProfileGeometry&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSProfileGeometry = generated::CPACSProfileGeometry;
#else
typedef generated::CPACSProfileGeometry CCPACSProfileGeometry;
#endif
} // namespace tigl
