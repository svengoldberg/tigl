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

#include "CPACSPointPolar.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSPointPolar::CPACSPointPolar(CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
    }

    CPACSPointPolar::~CPACSPointPolar()
    {
        if (m_uidMgr) m_uidMgr->TryUnregisterObject(m_uID);
    }

    CTiglUIDManager& CPACSPointPolar::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSPointPolar::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSPointPolar::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read attribute uID
        if (tixi::TixiCheckAttribute(tixiHandle, xpath, "uID")) {
            m_uID = tixi::TixiGetAttribute<std::string>(tixiHandle, xpath, "uID");
            if (m_uID.empty()) {
                LOG(WARNING) << "Required attribute uID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required attribute uID is missing at xpath " << xpath;
        }

        // read element r
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/r")) {
            m_r = tixi::TixiGetElement<double>(tixiHandle, xpath + "/r");
        }

        // read element phi
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/phi")) {
            m_phi = tixi::TixiGetElement<double>(tixiHandle, xpath + "/phi");
        }

        if (m_uidMgr && !m_uID.empty()) m_uidMgr->RegisterObject(m_uID, *this);
    }

    void CPACSPointPolar::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write attribute uID
        tixi::TixiSaveAttribute(tixiHandle, xpath, "uID", m_uID);

        // write element r
        if (m_r) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/r");
            tixi::TixiSaveElement(tixiHandle, xpath + "/r", *m_r);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/r")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/r");
            }
        }

        // write element phi
        if (m_phi) {
            tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/phi");
            tixi::TixiSaveElement(tixiHandle, xpath + "/phi", *m_phi);
        }
        else {
            if (tixi::TixiCheckElement(tixiHandle, xpath + "/phi")) {
                tixi::TixiRemoveElement(tixiHandle, xpath + "/phi");
            }
        }

    }

    const std::string& CPACSPointPolar::GetUID() const
    {
        return m_uID;
    }

    void CPACSPointPolar::SetUID(const std::string& value)
    {
        if (m_uidMgr) {
            m_uidMgr->TryUnregisterObject(m_uID);
            m_uidMgr->RegisterObject(value, *this);
        }
        m_uID = value;
    }

    const boost::optional<double>& CPACSPointPolar::GetR() const
    {
        return m_r;
    }

    void CPACSPointPolar::SetR(const boost::optional<double>& value)
    {
        m_r = value;
    }

    const boost::optional<double>& CPACSPointPolar::GetPhi() const
    {
        return m_phi;
    }

    void CPACSPointPolar::SetPhi(const boost::optional<double>& value)
    {
        m_phi = value;
    }

} // namespace generated
} // namespace tigl
