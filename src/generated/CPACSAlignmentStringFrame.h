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
    // This class is used in:
    // CPACSStringerFramePosition

    // generated from /xsd:schema/xsd:complexType[68]
    class CPACSAlignmentStringFrame
    {
    public:
        TIGL_EXPORT CPACSAlignmentStringFrame(CTiglUIDManager* uidMgr);
        TIGL_EXPORT virtual ~CPACSAlignmentStringFrame();

        TIGL_EXPORT CTiglUIDManager& GetUIDManager();
        TIGL_EXPORT const CTiglUIDManager& GetUIDManager() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const std::string& GetUID() const;
        TIGL_EXPORT virtual void SetUID(const std::string& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetRotationLocX() const;
        TIGL_EXPORT virtual void SetRotationLocX(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTranslationLocY() const;
        TIGL_EXPORT virtual void SetTranslationLocY(const boost::optional<double>& value);

        TIGL_EXPORT virtual const boost::optional<double>& GetTranslationLocZ() const;
        TIGL_EXPORT virtual void SetTranslationLocZ(const boost::optional<double>& value);

    protected:
        CTiglUIDManager* m_uidMgr;

        std::string             m_uID;
        boost::optional<double> m_rotationLocX;
        boost::optional<double> m_translationLocY;
        boost::optional<double> m_translationLocZ;

    private:
#ifdef HAVE_CPP11
        CPACSAlignmentStringFrame(const CPACSAlignmentStringFrame&) = delete;
        CPACSAlignmentStringFrame& operator=(const CPACSAlignmentStringFrame&) = delete;

        CPACSAlignmentStringFrame(CPACSAlignmentStringFrame&&) = delete;
        CPACSAlignmentStringFrame& operator=(CPACSAlignmentStringFrame&&) = delete;
#else
        CPACSAlignmentStringFrame(const CPACSAlignmentStringFrame&);
        CPACSAlignmentStringFrame& operator=(const CPACSAlignmentStringFrame&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSAlignmentStringFrame = generated::CPACSAlignmentStringFrame;
#else
typedef generated::CPACSAlignmentStringFrame CCPACSAlignmentStringFrame;
#endif
} // namespace tigl
