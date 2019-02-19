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
namespace generated
{
    // This class is used in:
    // CPACSControlSurfaceBorderTrailingEdge

    // generated from /xsd:schema/xsd:complexType[490]
    class CPACSLeadingEdgeHollow
    {
    public:
        TIGL_EXPORT CPACSLeadingEdgeHollow();
        TIGL_EXPORT virtual ~CPACSLeadingEdgeHollow();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const double& GetRelHeightTE() const;
        TIGL_EXPORT virtual void SetRelHeightTE(const double& value);

        TIGL_EXPORT virtual const double& GetXsiTE() const;
        TIGL_EXPORT virtual void SetXsiTE(const double& value);

    protected:
        /// Relative height of the most forward point of
        /// the LED's rear part, based on the airfoil height of the parent
        /// at this position. Optional.
        double m_relHeightTE;

        /// Relative chordwise position of the most
        /// forward point of the LED's rear part, based on the chord of the
        /// parent at this position. Optional.
        double m_xsiTE;

    private:
#ifdef HAVE_CPP11
        CPACSLeadingEdgeHollow(const CPACSLeadingEdgeHollow&) = delete;
        CPACSLeadingEdgeHollow& operator=(const CPACSLeadingEdgeHollow&) = delete;

        CPACSLeadingEdgeHollow(CPACSLeadingEdgeHollow&&) = delete;
        CPACSLeadingEdgeHollow& operator=(CPACSLeadingEdgeHollow&&) = delete;
#else
        CPACSLeadingEdgeHollow(const CPACSLeadingEdgeHollow&);
        CPACSLeadingEdgeHollow& operator=(const CPACSLeadingEdgeHollow&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSLeadingEdgeHollow = generated::CPACSLeadingEdgeHollow;
#else
typedef generated::CPACSLeadingEdgeHollow CCPACSLeadingEdgeHollow;
#endif
} // namespace tigl
