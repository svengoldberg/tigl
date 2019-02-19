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
#include <vector>
#include "tigl_internal.h"
#include "UniquePtr.h"

namespace tigl
{
class CTiglUIDManager;
class CCPACSPoint;

namespace generated
{
    // This class is used in:
    // CPACSStructuralProfile3D

    // generated from /xsd:schema/xsd:complexType[719]
    /// @brief pointListType
    /// 
    /// PointList type, containing an ordered list of points
    /// 
    class CPACSPointList
    {
    public:
        TIGL_EXPORT CPACSPointList(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSPointList();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSPoint> >& GetPoints() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSPoint> >& GetPoints();

        TIGL_EXPORT virtual CCPACSPoint& AddPoint();
        TIGL_EXPORT virtual void RemovePoint(CCPACSPoint& ref);

    protected:
        CTiglUIDManager* m_uidMgr;

        /// Data point
        std::vector<unique_ptr<CCPACSPoint> > m_points;

    private:
#ifdef HAVE_CPP11
        CPACSPointList(const CPACSPointList&) = delete;
        CPACSPointList& operator=(const CPACSPointList&) = delete;

        CPACSPointList(CPACSPointList&&) = delete;
        CPACSPointList& operator=(CPACSPointList&&) = delete;
#else
        CPACSPointList(const CPACSPointList&);
        CPACSPointList& operator=(const CPACSPointList&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSPointList = generated::CPACSPointList;
#else
typedef generated::CPACSPointList CCPACSPointList;
#endif
} // namespace tigl
