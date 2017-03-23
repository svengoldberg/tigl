// Copyright (c) 2016 RISC Software GmbH
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

#include "TixiHelper.h"
#include "CTiglLogging.h"
#include "CTiglError.h"
#include "CPACSPlasticityCurvePoint.h"

namespace tigl
{
    namespace generated
    {
        CPACSPlasticityCurvePoint::CPACSPlasticityCurvePoint(){}
        CPACSPlasticityCurvePoint::~CPACSPlasticityCurvePoint() {}
        
        void CPACSPlasticityCurvePoint::ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath)
        {
            // read element tangentModulus
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/tangentModulus")) {
                m_tangentModulus = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/tangentModulus");
            }
            else {
                LOG(ERROR) << "Required element tangentModulus is missing at xpath " << xpath;
            }
            
            // read element trueStress
            if (tixihelper::TixiCheckElement(tixiHandle, xpath + "/trueStress")) {
                m_trueStress = tixihelper::TixiGetElement<double>(tixiHandle, xpath + "/trueStress");
            }
            else {
                LOG(ERROR) << "Required element trueStress is missing at xpath " << xpath;
            }
            
        }
        
        void CPACSPlasticityCurvePoint::WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const
        {
            // write element tangentModulus
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/tangentModulus");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/tangentModulus", m_tangentModulus);
            
            // write element trueStress
            tixihelper::TixiCreateElementIfNotExists(tixiHandle, xpath + "/trueStress");
            tixihelper::TixiSaveElement(tixiHandle, xpath + "/trueStress", m_trueStress);
            
        }
        
        const double& CPACSPlasticityCurvePoint::GetTangentModulus() const
        {
            return m_tangentModulus;
        }
        
        void CPACSPlasticityCurvePoint::SetTangentModulus(const double& value)
        {
            m_tangentModulus = value;
        }
        
        const double& CPACSPlasticityCurvePoint::GetTrueStress() const
        {
            return m_trueStress;
        }
        
        void CPACSPlasticityCurvePoint::SetTrueStress(const double& value)
        {
            m_trueStress = value;
        }
        
    }
}
