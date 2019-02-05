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
#include <CCPACSTransformation.h>
#include <CCPACSWingSectionElements.h>
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSWingSections;

namespace generated
{
    // This class is used in:
    // CPACSWingSections

    // generated from /xsd:schema/xsd:complexType[965]
    class CPACSWingSection
    {
    public:
        TIGL_EXPORT CPACSWingSection(CCPACSWingSections* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSWingSection();

        TIGL_EXPORT CCPACSWingSections* GetParent();

        TIGL_EXPORT const CCPACSWingSections* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const CCPACSTransformation& GetTransformation() const;
        TIGL_EXPORT virtual CCPACSTransformation& GetTransformation();

        TIGL_EXPORT virtual const CCPACSWingSectionElements& GetElements() const;
        TIGL_EXPORT virtual CCPACSWingSectionElements& GetElements();

    protected:
        CCPACSWingSections* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;
        std::string                  m_name;
        boost::optional<std::string> m_description;
        CCPACSTransformation         m_transformation;
        CCPACSWingSectionElements    m_elements;

    private:
#ifdef HAVE_CPP11
        CPACSWingSection(const CPACSWingSection&) = delete;
        CPACSWingSection& operator=(const CPACSWingSection&) = delete;

        CPACSWingSection(CPACSWingSection&&) = delete;
        CPACSWingSection& operator=(CPACSWingSection&&) = delete;
#else
        CPACSWingSection(const CPACSWingSection&);
        CPACSWingSection& operator=(const CPACSWingSection&);
#endif
    };
} // namespace generated

// CPACSWingSection is customized, use type CCPACSWingSection directly
} // namespace tigl
