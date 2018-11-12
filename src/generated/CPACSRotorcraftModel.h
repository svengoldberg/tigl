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
#include <CCPACSFuselages.h>
#include <CCPACSRotorBlades.h>
#include <CCPACSRotors.h>
#include <CCPACSWings.h>
#include <string>
#include <tixi.h>
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSRotorcraft

    // generated from /xsd:schema/xsd:complexType[791]
    class CPACSRotorcraftModel
    {
    public:
        TIGL_EXPORT CPACSRotorcraftModel(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSRotorcraftModel();

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

        TIGL_EXPORT virtual const boost::optional<CCPACSFuselages>& GetFuselages() const;
        TIGL_EXPORT virtual boost::optional<CCPACSFuselages>& GetFuselages();

        TIGL_EXPORT virtual const boost::optional<CCPACSWings>& GetWings() const;
        TIGL_EXPORT virtual boost::optional<CCPACSWings>& GetWings();

        TIGL_EXPORT virtual const boost::optional<CCPACSRotors>& GetRotors() const;
        TIGL_EXPORT virtual boost::optional<CCPACSRotors>& GetRotors();

        TIGL_EXPORT virtual const boost::optional<CCPACSRotorBlades>& GetRotorBlades() const;
        TIGL_EXPORT virtual boost::optional<CCPACSRotorBlades>& GetRotorBlades();

        TIGL_EXPORT virtual CCPACSFuselages& GetFuselages(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveFuselages();

        TIGL_EXPORT virtual CCPACSWings& GetWings(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveWings();

        TIGL_EXPORT virtual CCPACSRotors& GetRotors(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveRotors();

        TIGL_EXPORT virtual CCPACSRotorBlades& GetRotorBlades(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveRotorBlades();

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                        m_uID;
        std::string                        m_name;
        boost::optional<std::string>       m_description;
        boost::optional<CCPACSFuselages>   m_fuselages;
        boost::optional<CCPACSWings>       m_wings;
        boost::optional<CCPACSRotors>      m_rotors;
        boost::optional<CCPACSRotorBlades> m_rotorBlades;

    private:
#ifdef HAVE_CPP11
        CPACSRotorcraftModel(const CPACSRotorcraftModel&) = delete;
        CPACSRotorcraftModel& operator=(const CPACSRotorcraftModel&) = delete;

        CPACSRotorcraftModel(CPACSRotorcraftModel&&) = delete;
        CPACSRotorcraftModel& operator=(CPACSRotorcraftModel&&) = delete;
#else
        CPACSRotorcraftModel(const CPACSRotorcraftModel&);
        CPACSRotorcraftModel& operator=(const CPACSRotorcraftModel&);
#endif
    };
} // namespace generated

// CPACSRotorcraftModel is customized, use type CCPACSRotorcraftModel directly
} // namespace tigl
