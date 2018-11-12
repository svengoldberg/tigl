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
#include <vector>
#include "CPACSEmissivityMap.h"
#include "CPACSSpecificHeatMap.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSPostFailure;

    // This class is used in:
    // CPACSMaterials

    // generated from /xsd:schema/xsd:complexType[662]
    class CPACSMaterial
    {
    public:
        TIGL_EXPORT CPACSMaterial(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSMaterial();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT bool ValidateChoices() const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetName() const;
        TIGL_EXPORT virtual void SetName(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDescription() const;
        TIGL_EXPORT virtual void SetDescription(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const double& GetRho() const;
        TIGL_EXPORT virtual void SetRho(const double& value);

        TIGL_EXPORT virtual const double& GetK11() const;
        TIGL_EXPORT virtual void SetK11(const double& value);

        TIGL_EXPORT virtual const double& GetK12() const;
        TIGL_EXPORT virtual void SetK12(const double& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetMaxStrain() const;
        TIGL_EXPORT virtual void SetMaxStrain(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetFatigueFactor() const;
        TIGL_EXPORT virtual void SetFatigueFactor(const boost::optional<double>& value);

        TIGL_EXPORT virtual const std::vector<unique_ptr<CPACSPostFailure> >& GetPostFailures() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CPACSPostFailure> >& GetPostFailures();

        TIGL_EXPORT virtual const boost::optional<double>& GetThermalConductivity() const;
        TIGL_EXPORT virtual void SetThermalConductivity(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<CPACSSpecificHeatMap>& GetSpecificHeatMap() const;
        TIGL_EXPORT virtual boost::optional<CPACSSpecificHeatMap>& GetSpecificHeatMap();

        TIGL_EXPORT virtual const boost::optional<CPACSEmissivityMap>& GetEmissivityMap() const;
        TIGL_EXPORT virtual boost::optional<CPACSEmissivityMap>& GetEmissivityMap();

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11_choice1() const;
        TIGL_EXPORT virtual void SetSig11_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau12_choice1() const;
        TIGL_EXPORT virtual void SetTau12_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11yieldT_choice1() const;
        TIGL_EXPORT virtual void SetSig11yieldT_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11yieldC_choice1() const;
        TIGL_EXPORT virtual void SetSig11yieldC_choice1(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK22_choice2() const;
        TIGL_EXPORT virtual void SetK22_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK23_choice2() const;
        TIGL_EXPORT virtual void SetK23_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK66_choice2() const;
        TIGL_EXPORT virtual void SetK66_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11t_choice2() const;
        TIGL_EXPORT virtual void SetSig11t_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11c_choice2() const;
        TIGL_EXPORT virtual void SetSig11c_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig22t_choice2() const;
        TIGL_EXPORT virtual void SetSig22t_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig22c_choice2() const;
        TIGL_EXPORT virtual void SetSig22c_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau12_choice2() const;
        TIGL_EXPORT virtual void SetTau12_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau23_choice2() const;
        TIGL_EXPORT virtual void SetTau23_choice2(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK13_choice3() const;
        TIGL_EXPORT virtual void SetK13_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK22_choice3() const;
        TIGL_EXPORT virtual void SetK22_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK23_choice3() const;
        TIGL_EXPORT virtual void SetK23_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK33_choice3() const;
        TIGL_EXPORT virtual void SetK33_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK44_choice3() const;
        TIGL_EXPORT virtual void SetK44_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK55_choice3() const;
        TIGL_EXPORT virtual void SetK55_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetK66_choice3() const;
        TIGL_EXPORT virtual void SetK66_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11t_choice3() const;
        TIGL_EXPORT virtual void SetSig11t_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig11c_choice3() const;
        TIGL_EXPORT virtual void SetSig11c_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig22t_choice3() const;
        TIGL_EXPORT virtual void SetSig22t_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig22c_choice3() const;
        TIGL_EXPORT virtual void SetSig22c_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig33t_choice3() const;
        TIGL_EXPORT virtual void SetSig33t_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetSig33c_choice3() const;
        TIGL_EXPORT virtual void SetSig33c_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau12_choice3() const;
        TIGL_EXPORT virtual void SetTau12_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau13_choice3() const;
        TIGL_EXPORT virtual void SetTau13_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTau23_choice3() const;
        TIGL_EXPORT virtual void SetTau23_choice3(const boost::optional<double>& value);

        TIGL_EXPORT virtual CPACSPostFailure& AddPostFailure();
        TIGL_EXPORT virtual void RemovePostFailure(CPACSPostFailure& ref);

        TIGL_EXPORT virtual CPACSSpecificHeatMap& GetSpecificHeatMap(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveSpecificHeatMap();

        TIGL_EXPORT virtual CPACSEmissivityMap& GetEmissivityMap(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveEmissivityMap();

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string                                m_uID;
        std::string                                m_name;
        boost::optional<std::string>               m_description;
        double                                     m_rho;
        double                                     m_k11;
        double                                     m_k12;
        boost::optional<double>                    m_maxStrain;
        boost::optional<double>                    m_fatigueFactor;
        std::vector<unique_ptr<CPACSPostFailure> > m_postFailures;
        boost::optional<double>                    m_thermalConductivity;
        boost::optional<CPACSSpecificHeatMap>      m_specificHeatMap;
        boost::optional<CPACSEmissivityMap>        m_emissivityMap;
        boost::optional<double>                    m_sig11_choice1;
        boost::optional<double>                    m_tau12_choice1;
        boost::optional<double>                    m_sig11yieldT_choice1;
        boost::optional<double>                    m_sig11yieldC_choice1;
        boost::optional<double>                    m_k22_choice2;
        boost::optional<double>                    m_k23_choice2;
        boost::optional<double>                    m_k66_choice2;
        boost::optional<double>                    m_sig11t_choice2;
        boost::optional<double>                    m_sig11c_choice2;
        boost::optional<double>                    m_sig22t_choice2;
        boost::optional<double>                    m_sig22c_choice2;
        boost::optional<double>                    m_tau12_choice2;
        boost::optional<double>                    m_tau23_choice2;
        boost::optional<double>                    m_k13_choice3;
        boost::optional<double>                    m_k22_choice3;
        boost::optional<double>                    m_k23_choice3;
        boost::optional<double>                    m_k33_choice3;
        boost::optional<double>                    m_k44_choice3;
        boost::optional<double>                    m_k55_choice3;
        boost::optional<double>                    m_k66_choice3;
        boost::optional<double>                    m_sig11t_choice3;
        boost::optional<double>                    m_sig11c_choice3;
        boost::optional<double>                    m_sig22t_choice3;
        boost::optional<double>                    m_sig22c_choice3;
        boost::optional<double>                    m_sig33t_choice3;
        boost::optional<double>                    m_sig33c_choice3;
        boost::optional<double>                    m_tau12_choice3;
        boost::optional<double>                    m_tau13_choice3;
        boost::optional<double>                    m_tau23_choice3;

    private:
#ifdef HAVE_CPP11
        CPACSMaterial(const CPACSMaterial&) = delete;
        CPACSMaterial& operator=(const CPACSMaterial&) = delete;

        CPACSMaterial(CPACSMaterial&&) = delete;
        CPACSMaterial& operator=(CPACSMaterial&&) = delete;
#else
        CPACSMaterial(const CPACSMaterial&);
        CPACSMaterial& operator=(const CPACSMaterial&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSMaterial = generated::CPACSMaterial;
using CCPACSPostFailure = generated::CPACSPostFailure;
#else
typedef generated::CPACSMaterial CCPACSMaterial;
typedef generated::CPACSPostFailure CCPACSPostFailure;
#endif
} // namespace tigl
