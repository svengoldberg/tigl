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

#include "CPACSPointListXYVector.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSPointListXYVector::CPACSPointListXYVector()
    {
    }

    CPACSPointListXYVector::~CPACSPointListXYVector()
    {
    }

    void CPACSPointListXYVector::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element x
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/x")) {
            m_x.ReadCPACS(tixiHandle, xpath + "/x");
        }
        else {
            LOG(ERROR) << "Required element x is missing at xpath " << xpath;
        }

        // read element y
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/y")) {
            m_y.ReadCPACS(tixiHandle, xpath + "/y");
        }
        else {
            LOG(ERROR) << "Required element y is missing at xpath " << xpath;
        }

    }

    void CPACSPointListXYVector::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write element x
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/x");
        m_x.WriteCPACS(tixiHandle, xpath + "/x");

        // write element y
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/y");
        m_y.WriteCPACS(tixiHandle, xpath + "/y");

    }

    const CCPACSStringVector& CPACSPointListXYVector::GetX() const
    {
        return m_x;
    }

    CCPACSStringVector& CPACSPointListXYVector::GetX()
    {
        return m_x;
    }

    const CCPACSStringVector& CPACSPointListXYVector::GetY() const
    {
        return m_y;
    }

    CCPACSStringVector& CPACSPointListXYVector::GetY()
    {
        return m_y;
    }

} // namespace generated
} // namespace tigl
