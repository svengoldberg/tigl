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

#include <cassert>
#include <CCPACSPositioning.h>
#include "CCPACSEnginePylon.h"
#include "CCPACSFuselage.h"
#include "CCPACSWing.h"
#include "CPACSPositionings.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "CTiglUIDManager.h"
#include "CTiglUIDObject.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSPositionings::CPACSPositionings(CCPACSEnginePylon* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
        m_parentType = &typeid(CCPACSEnginePylon);
    }

    CPACSPositionings::CPACSPositionings(CCPACSFuselage* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
        m_parentType = &typeid(CCPACSFuselage);
    }

    CPACSPositionings::CPACSPositionings(CCPACSWing* parent, CTiglUIDManager* uidMgr)
        : m_uidMgr(uidMgr)
    {
        //assert(parent != NULL);
        m_parent = parent;
        m_parentType = &typeid(CCPACSWing);
    }

    CPACSPositionings::~CPACSPositionings()
    {
    }

    const CTiglUIDObject* CPACSPositionings::GetNextUIDParent() const
    {
        if (m_parent) {
            if (IsParent<CCPACSEnginePylon>()) {
                return GetParent<CCPACSEnginePylon>();
            }
            if (IsParent<CCPACSFuselage>()) {
                return GetParent<CCPACSFuselage>();
            }
            if (IsParent<CCPACSWing>()) {
                return GetParent<CCPACSWing>();
            }
        }
        return nullptr;
    }

    CTiglUIDObject* CPACSPositionings::GetNextUIDParent()
    {
        if (m_parent) {
            if (IsParent<CCPACSEnginePylon>()) {
                return GetParent<CCPACSEnginePylon>();
            }
            if (IsParent<CCPACSFuselage>()) {
                return GetParent<CCPACSFuselage>();
            }
            if (IsParent<CCPACSWing>()) {
                return GetParent<CCPACSWing>();
            }
        }
        return nullptr;
    }

    CTiglUIDManager& CPACSPositionings::GetUIDManager()
    {
        return *m_uidMgr;
    }

    const CTiglUIDManager& CPACSPositionings::GetUIDManager() const
    {
        return *m_uidMgr;
    }

    void CPACSPositionings::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element positioning
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/positioning")) {
            tixi::TixiReadElements(tixiHandle, xpath + "/positioning", m_positionings, 1, tixi::xsdUnbounded, reinterpret_cast<CCPACSPositionings*>(this), m_uidMgr);
        }

    }

    void CPACSPositionings::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write element positioning
        tixi::TixiSaveElements(tixiHandle, xpath + "/positioning", m_positionings);

    }

    const std::vector<std::unique_ptr<CCPACSPositioning>>& CPACSPositionings::GetPositionings() const
    {
        return m_positionings;
    }

    std::vector<std::unique_ptr<CCPACSPositioning>>& CPACSPositionings::GetPositionings()
    {
        return m_positionings;
    }

    CCPACSPositioning& CPACSPositionings::AddPositioning()
    {
        m_positionings.push_back(make_unique<CCPACSPositioning>(reinterpret_cast<CCPACSPositionings*>(this), m_uidMgr));
        return *m_positionings.back();
    }

    void CPACSPositionings::RemovePositioning(CCPACSPositioning& ref)
    {
        for (std::size_t i = 0; i < m_positionings.size(); i++) {
            if (m_positionings[i].get() == &ref) {
                m_positionings.erase(m_positionings.begin() + i);
                return;
            }
        }
        throw CTiglError("Element not found");
    }

} // namespace generated
} // namespace tigl
