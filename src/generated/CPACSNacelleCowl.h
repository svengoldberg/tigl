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

#include <CCPACSTransformation.h>
#include <string>
#include <tixi.h>
#include "CPACSNacelleGuideCurves.h"
#include "CPACSNacelleSections.h"
#include "CPACSRotationCurve.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    // This class is used in:
    // CPACSEngineNacelle

    // generated from /xsd:schema/xsd:complexType[996]
    class CPACSNacelleCowl
    {
    public:
        TIGL_EXPORT CPACSNacelleCowl(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSNacelleCowl();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSTransformation& GetTransformation() const;
        TIGL_EXPORT virtual CCPACSTransformation& GetTransformation();

        TIGL_EXPORT virtual const CPACSNacelleSections& GetSections() const;
        TIGL_EXPORT virtual CPACSNacelleSections& GetSections();

        TIGL_EXPORT virtual const CPACSNacelleGuideCurves& GetGuideCurves() const;
        TIGL_EXPORT virtual CPACSNacelleGuideCurves& GetGuideCurves();

        TIGL_EXPORT virtual const CPACSRotationCurve& GetRotationCurve() const;
        TIGL_EXPORT virtual CPACSRotationCurve& GetRotationCurve();

    protected:
        CTiglUIDManager* m_uidMgr;

        CCPACSTransformation    m_transformation;
        CPACSNacelleSections    m_sections;
        CPACSNacelleGuideCurves m_guideCurves;
        CPACSRotationCurve      m_rotationCurve;

    private:
#ifdef HAVE_CPP11
        CPACSNacelleCowl(const CPACSNacelleCowl&) = delete;
        CPACSNacelleCowl& operator=(const CPACSNacelleCowl&) = delete;

        CPACSNacelleCowl(CPACSNacelleCowl&&) = delete;
        CPACSNacelleCowl& operator=(CPACSNacelleCowl&&) = delete;
#else
        CPACSNacelleCowl(const CPACSNacelleCowl&);
        CPACSNacelleCowl& operator=(const CPACSNacelleCowl&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSNacelleCowl = generated::CPACSNacelleCowl;
#else
typedef generated::CPACSNacelleCowl CCPACSNacelleCowl;
#endif
} // namespace tigl
