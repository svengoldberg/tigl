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

    // generated from /xsd:schema/xsd:complexType[491]
    class CPACSLeadingEdgeShape
    {
    public:
        TIGL_EXPORT CPACSLeadingEdgeShape();
        TIGL_EXPORT virtual ~CPACSLeadingEdgeShape();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const double& GetRelHeightLE() const;
        TIGL_EXPORT virtual void SetRelHeightLE(const double& value);

        TIGL_EXPORT virtual const double& GetXsiUpperSkin() const;
        TIGL_EXPORT virtual void SetXsiUpperSkin(const double& value);

        TIGL_EXPORT virtual const double& GetXsiLowerSkin() const;
        TIGL_EXPORT virtual void SetXsiLowerSkin(const double& value);

    protected:
        /// Relative height of the leading edge of the TED,
        /// based on the airfoil height of the parent at this position.
        /// Optional.
        double m_relHeightLE;

        /// Relative chordwise upper skin position, of the
        /// border, where the airfoil of the TED is equivalent of the
        /// airfoil from the parent. Measured from the rear to the front (0
        /// = TED trailing edge; 1 = TED leading edge). Values form the
        /// outer border default to the value of the inner border. Optional.
        double m_xsiUpperSkin;

        /// Relative chordwise lower skin position, of the
        /// border, where the airfoil of the TED is equivalent of the
        /// airfoil from the parent. Measured from the rear to the front (0
        /// = TED trailing edge; 1 = TED leading edge). Values form the
        /// outer border default to the value of the inner border. Optional.
        double m_xsiLowerSkin;

    private:
#ifdef HAVE_CPP11
        CPACSLeadingEdgeShape(const CPACSLeadingEdgeShape&) = delete;
        CPACSLeadingEdgeShape& operator=(const CPACSLeadingEdgeShape&) = delete;

        CPACSLeadingEdgeShape(CPACSLeadingEdgeShape&&) = delete;
        CPACSLeadingEdgeShape& operator=(CPACSLeadingEdgeShape&&) = delete;
#else
        CPACSLeadingEdgeShape(const CPACSLeadingEdgeShape&);
        CPACSLeadingEdgeShape& operator=(const CPACSLeadingEdgeShape&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSLeadingEdgeShape = generated::CPACSLeadingEdgeShape;
#else
typedef generated::CPACSLeadingEdgeShape CCPACSLeadingEdgeShape;
#endif
} // namespace tigl
