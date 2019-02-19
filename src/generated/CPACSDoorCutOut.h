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
#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSDoors

    // generated from /xsd:schema/xsd:complexType[290]
    class CPACSDoorCutOut
    {
    public:
        TIGL_EXPORT CPACSDoorCutOut(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSDoorCutOut();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetName() const;
        TIGL_EXPORT virtual void SetName(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetFilletRadius() const;
        TIGL_EXPORT virtual void SetFilletRadius(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDssDesignUID() const;
        TIGL_EXPORT virtual void SetDssDesignUID(const boost::optional<std::string>& value);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;

        /// Name of door cutout element
        boost::optional<std::string> m_name;

        /// Description of door cutout
        /// element
        boost::optional<std::string> m_description;

        /// Fillet radius of door cutout
        /// element
        boost::optional<double>      m_filletRadius;

        /// Reference UID to the description of a DSS (door
        /// surround structure)
        boost::optional<std::string> m_dssDesignUID;

    private:
#ifdef HAVE_CPP11
        CPACSDoorCutOut(const CPACSDoorCutOut&) = delete;
        CPACSDoorCutOut& operator=(const CPACSDoorCutOut&) = delete;

        CPACSDoorCutOut(CPACSDoorCutOut&&) = delete;
        CPACSDoorCutOut& operator=(CPACSDoorCutOut&&) = delete;
#else
        CPACSDoorCutOut(const CPACSDoorCutOut&);
        CPACSDoorCutOut& operator=(const CPACSDoorCutOut&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSDoorCutOut = generated::CPACSDoorCutOut;
#else
typedef generated::CPACSDoorCutOut CCPACSDoorCutOut;
#endif
} // namespace tigl
