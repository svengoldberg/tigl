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
#include <CCPACSEtaIsoLine.h>
#include <CCPACSXsiIsoLine.h>
#include <string>
#include <tixi.h>
#include "CPACSContourReference.h"
#include "CPACSLeadingEdgeHollow.h"
#include "CPACSLeadingEdgeShape.h"
#include "CreateIfNotExists.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    class CPACSControlSurfaceOuterShapeTrailingEdge;

    // This class is used in:
    // CPACSControlSurfaceOuterShapeTrailingEdge

    // generated from /xsd:schema/xsd:complexType[173]
    class CPACSControlSurfaceBorderTrailingEdge
    {
    public:
        TIGL_EXPORT CPACSControlSurfaceBorderTrailingEdge(CPACSControlSurfaceOuterShapeTrailingEdge* parent);

        TIGL_EXPORT virtual ~CPACSControlSurfaceBorderTrailingEdge();

        TIGL_EXPORT CPACSControlSurfaceOuterShapeTrailingEdge* GetParent();

        TIGL_EXPORT const CPACSControlSurfaceOuterShapeTrailingEdge* GetParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const CCPACSEtaIsoLine& GetEtaLE() const;
        TIGL_EXPORT virtual CCPACSEtaIsoLine& GetEtaLE();

        TIGL_EXPORT virtual const boost::optional<CCPACSEtaIsoLine>& GetEtaTE() const;
        TIGL_EXPORT virtual boost::optional<CCPACSEtaIsoLine>& GetEtaTE();

        TIGL_EXPORT virtual const CCPACSXsiIsoLine& GetXsiLE() const;
        TIGL_EXPORT virtual CCPACSXsiIsoLine& GetXsiLE();

        TIGL_EXPORT virtual const boost::optional<CPACSLeadingEdgeHollow>& GetInnerShape() const;
        TIGL_EXPORT virtual boost::optional<CPACSLeadingEdgeHollow>& GetInnerShape();

        TIGL_EXPORT virtual const boost::optional<CPACSLeadingEdgeShape>& GetLeadingEdgeShape() const;
        TIGL_EXPORT virtual boost::optional<CPACSLeadingEdgeShape>& GetLeadingEdgeShape();

        TIGL_EXPORT virtual const boost::optional<CPACSContourReference>& GetAirfoil() const;
        TIGL_EXPORT virtual boost::optional<CPACSContourReference>& GetAirfoil();

        TIGL_EXPORT virtual CCPACSEtaIsoLine& GetEtaTE(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveEtaTE();

        TIGL_EXPORT virtual CPACSLeadingEdgeHollow& GetInnerShape(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveInnerShape();

        TIGL_EXPORT virtual CPACSLeadingEdgeShape& GetLeadingEdgeShape(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveLeadingEdgeShape();

        TIGL_EXPORT virtual CPACSContourReference& GetAirfoil(CreateIfNotExistsTag);
        TIGL_EXPORT virtual void RemoveAirfoil();

    protected:
        CPACSControlSurfaceOuterShapeTrailingEdge* m_parent;

        /// Relative spanwise inner/outer position of the
        /// leading edge of the control surface. Reference is eta/xsi from
        /// the parent.
        CCPACSEtaIsoLine                        m_etaLE;

        /// Relative spanwise inner/outer position of the
        /// trailing edge of the control surface. Reference is eta/xsi from
        /// the parent. Defaults to 'etaLE'.
        boost::optional<CCPACSEtaIsoLine>       m_etaTE;

        /// Relative chordwise inner/outer position of the
        /// leading edge of the control surface. Reference is eta/xsi from
        /// the parent.
        CCPACSXsiIsoLine                        m_xsiLE;

        boost::optional<CPACSLeadingEdgeHollow> m_innerShape;

        boost::optional<CPACSLeadingEdgeShape>  m_leadingEdgeShape;

        boost::optional<CPACSContourReference>  m_airfoil;

    private:
#ifdef HAVE_CPP11
        CPACSControlSurfaceBorderTrailingEdge(const CPACSControlSurfaceBorderTrailingEdge&) = delete;
        CPACSControlSurfaceBorderTrailingEdge& operator=(const CPACSControlSurfaceBorderTrailingEdge&) = delete;

        CPACSControlSurfaceBorderTrailingEdge(CPACSControlSurfaceBorderTrailingEdge&&) = delete;
        CPACSControlSurfaceBorderTrailingEdge& operator=(CPACSControlSurfaceBorderTrailingEdge&&) = delete;
#else
        CPACSControlSurfaceBorderTrailingEdge(const CPACSControlSurfaceBorderTrailingEdge&);
        CPACSControlSurfaceBorderTrailingEdge& operator=(const CPACSControlSurfaceBorderTrailingEdge&);
#endif
    };
} // namespace generated

// CPACSControlSurfaceBorderTrailingEdge is customized, use type CCPACSControlSurfaceBorderTrailingEdge directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSControlSurfaceOuterShapeTrailingEdge = generated::CPACSControlSurfaceOuterShapeTrailingEdge;
#else
typedef generated::CPACSControlSurfaceOuterShapeTrailingEdge CCPACSControlSurfaceOuterShapeTrailingEdge;
#endif
} // namespace tigl
