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

#include <string>
#include <tixi.h>
#include "tigl_internal.h"

namespace tigl
{
class CCPACSWingRibsDefinition;

namespace generated
{
    // This class is used in:
    // CPACSWingRibsDefinition

    // generated from /xsd:schema/xsd:complexType[962]
    class CPACSWingRibExplicitPositioning
    {
    public:
        TIGL_EXPORT CPACSWingRibExplicitPositioning(CCPACSWingRibsDefinition* parent);

        TIGL_EXPORT virtual ~CPACSWingRibExplicitPositioning();

        TIGL_EXPORT CCPACSWingRibsDefinition* GetParent();

        TIGL_EXPORT const CCPACSWingRibsDefinition* GetParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetStartReference() const;
        TIGL_EXPORT virtual void SetStartReference(const std::string& value);

        TIGL_EXPORT virtual const double& GetEtaStart() const;
        TIGL_EXPORT virtual void SetEtaStart(const double& value);

        TIGL_EXPORT virtual const std::string& GetEndReference() const;
        TIGL_EXPORT virtual void SetEndReference(const std::string& value);

        TIGL_EXPORT virtual const double& GetEtaEnd() const;
        TIGL_EXPORT virtual void SetEtaEnd(const double& value);

    protected:
        CCPACSWingRibsDefinition* m_parent;

        std::string m_startReference;
        double      m_etaStart;
        std::string m_endReference;
        double      m_etaEnd;

    private:
#ifdef HAVE_CPP11
        CPACSWingRibExplicitPositioning(const CPACSWingRibExplicitPositioning&) = delete;
        CPACSWingRibExplicitPositioning& operator=(const CPACSWingRibExplicitPositioning&) = delete;

        CPACSWingRibExplicitPositioning(CPACSWingRibExplicitPositioning&&) = delete;
        CPACSWingRibExplicitPositioning& operator=(CPACSWingRibExplicitPositioning&&) = delete;
#else
        CPACSWingRibExplicitPositioning(const CPACSWingRibExplicitPositioning&);
        CPACSWingRibExplicitPositioning& operator=(const CPACSWingRibExplicitPositioning&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSWingRibExplicitPositioning = generated::CPACSWingRibExplicitPositioning;
#else
typedef generated::CPACSWingRibExplicitPositioning CCPACSWingRibExplicitPositioning;
#endif
} // namespace tigl
