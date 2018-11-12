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

#include "CPACSNacelleCenterCowl.h"
#include "CTiglError.h"
#include "CTiglLogging.h"
#include "TixiHelper.h"

namespace tigl
{
namespace generated
{
    CPACSNacelleCenterCowl::CPACSNacelleCenterCowl()
        : m_xOffset(0)
    {
    }

    CPACSNacelleCenterCowl::~CPACSNacelleCenterCowl()
    {
    }

    void CPACSNacelleCenterCowl::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
    {
        // read element xOffset
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/xOffset")) {
            m_xOffset = tixi::TixiGetElement<double>(tixiHandle, xpath + "/xOffset");
        }
        else {
            LOG(ERROR) << "Required element xOffset is missing at xpath " << xpath;
        }

        // read element curveUID
        if (tixi::TixiCheckElement(tixiHandle, xpath + "/curveUID")) {
            m_curveUID = tixi::TixiGetElement<std::string>(tixiHandle, xpath + "/curveUID");
            if (m_curveUID.empty()) {
                LOG(WARNING) << "Required element curveUID is empty at xpath " << xpath;
            }
        }
        else {
            LOG(ERROR) << "Required element curveUID is missing at xpath " << xpath;
        }

    }

    void CPACSNacelleCenterCowl::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
    {
        // write element xOffset
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/xOffset");
        tixi::TixiSaveElement(tixiHandle, xpath + "/xOffset", m_xOffset);

        // write element curveUID
        tixi::TixiCreateElementIfNotExists(tixiHandle, xpath + "/curveUID");
        tixi::TixiSaveElement(tixiHandle, xpath + "/curveUID", m_curveUID);

    }

    const double& CPACSNacelleCenterCowl::GetXOffset() const
    {
        return m_xOffset;
    }

    void CPACSNacelleCenterCowl::SetXOffset(const double& value)
    {
        m_xOffset = value;
    }

    const std::string& CPACSNacelleCenterCowl::GetCurveUID() const
    {
        return m_curveUID;
    }

    void CPACSNacelleCenterCowl::SetCurveUID(const std::string& value)
    {
        m_curveUID = value;
    }

} // namespace generated
} // namespace tigl
