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
class CCPACSLongFloorBeam;
class CCPACSFuselageStructure;

namespace generated
{
    // This class is used in:
    // CPACSFuselageStructure

    // generated from /xsd:schema/xsd:complexType[524]
    class CPACSLongFloorBeamsAssembly
    {
    public:
        TIGL_EXPORT CPACSLongFloorBeamsAssembly(CCPACSFuselageStructure* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSLongFloorBeamsAssembly();

        TIGL_EXPORT CCPACSFuselageStructure* GetParent();

        TIGL_EXPORT const CCPACSFuselageStructure* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::vector<unique_ptr<CCPACSLongFloorBeam> >& GetLongFloorBeams() const;
        TIGL_EXPORT virtual std::vector<unique_ptr<CCPACSLongFloorBeam> >& GetLongFloorBeams();

        TIGL_EXPORT virtual CCPACSLongFloorBeam& AddLongFloorBeam();
        TIGL_EXPORT virtual void RemoveLongFloorBeam(CCPACSLongFloorBeam& ref);

    protected:
        CCPACSFuselageStructure* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::vector<unique_ptr<CCPACSLongFloorBeam> > m_longFloorBeams;

    private:
#ifdef HAVE_CPP11
        CPACSLongFloorBeamsAssembly(const CPACSLongFloorBeamsAssembly&) = delete;
        CPACSLongFloorBeamsAssembly& operator=(const CPACSLongFloorBeamsAssembly&) = delete;

        CPACSLongFloorBeamsAssembly(CPACSLongFloorBeamsAssembly&&) = delete;
        CPACSLongFloorBeamsAssembly& operator=(CPACSLongFloorBeamsAssembly&&) = delete;
#else
        CPACSLongFloorBeamsAssembly(const CPACSLongFloorBeamsAssembly&);
        CPACSLongFloorBeamsAssembly& operator=(const CPACSLongFloorBeamsAssembly&);
#endif
    };
} // namespace generated

// CPACSLongFloorBeamsAssembly is customized, use type CCPACSLongFloorBeamsAssembly directly
} // namespace tigl
