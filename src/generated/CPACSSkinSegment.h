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
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDManager;

namespace generated
{
    class CPACSSkinSegments;

    // This class is used in:
    // CPACSSkinSegments

    // generated from /xsd:schema/xsd:complexType[819]
    class CPACSSkinSegment
    {
    public:
        TIGL_EXPORT CPACSSkinSegment(CPACSSkinSegments* parent, CTiglUIDManager* uidMgr);

        TIGL_EXPORT virtual ~CPACSSkinSegment();

        TIGL_EXPORT CPACSSkinSegments* GetParent();

        TIGL_EXPORT const CPACSSkinSegments* GetParent() const;

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetSheetElementUID() const;
        TIGL_EXPORT virtual void SetSheetElementUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetStartFrameUID() const;
        TIGL_EXPORT virtual void SetStartFrameUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetEndFrameUID() const;
        TIGL_EXPORT virtual void SetEndFrameUID(const std::string& value);

        TIGL_EXPORT virtual const std::string& GetStartStringerUID() const;
        TIGL_EXPORT virtual void SetStartStringerUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetEndStringerUID() const;
        TIGL_EXPORT virtual void SetEndStringerUID(const boost::optional<std::string>& value);

    protected:
        CPACSSkinSegments* m_parent;

        CTiglUIDManager* m_uidMgr;

        std::string                  m_uID;
        std::string                  m_sheetElementUID;
        std::string                  m_startFrameUID;
        std::string                  m_endFrameUID;
        std::string                  m_startStringerUID;
        boost::optional<std::string> m_endStringerUID;

    private:
#ifdef HAVE_CPP11
        CPACSSkinSegment(const CPACSSkinSegment&) = delete;
        CPACSSkinSegment& operator=(const CPACSSkinSegment&) = delete;

        CPACSSkinSegment(CPACSSkinSegment&&) = delete;
        CPACSSkinSegment& operator=(CPACSSkinSegment&&) = delete;
#else
        CPACSSkinSegment(const CPACSSkinSegment&);
        CPACSSkinSegment& operator=(const CPACSSkinSegment&);
#endif
    };
} // namespace generated

// CPACSSkinSegment is customized, use type CCPACSSkinSegment directly

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSSkinSegments = generated::CPACSSkinSegments;
#else
typedef generated::CPACSSkinSegments CCPACSSkinSegments;
#endif
} // namespace tigl
