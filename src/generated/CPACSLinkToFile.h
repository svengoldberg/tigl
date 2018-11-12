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
#include "CPACSLinkToFileType_format.h"
#include "tigl_internal.h"

namespace tigl
{
namespace generated
{
    // This class is used in:
    // CPACSGenericGeometricComponent

    // generated from /xsd:schema/xsd:complexType[503]
    class CPACSLinkToFile
    {
    public:
        TIGL_EXPORT CPACSLinkToFile();
        TIGL_EXPORT virtual ~CPACSLinkToFile();

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<CPACSLinkToFileType_format>& GetFormat() const;
        TIGL_EXPORT virtual void SetFormat(const boost::optional<CPACSLinkToFileType_format>& value);

        TIGL_EXPORT virtual const std::string& GetSimpleContent() const;
        TIGL_EXPORT virtual void SetSimpleContent(const std::string& value);

    protected:
        boost::optional<CPACSLinkToFileType_format> m_format;
        std::string                                 m_simpleContent;

    private:
#ifdef HAVE_CPP11
        CPACSLinkToFile(const CPACSLinkToFile&) = delete;
        CPACSLinkToFile& operator=(const CPACSLinkToFile&) = delete;

        CPACSLinkToFile(CPACSLinkToFile&&) = delete;
        CPACSLinkToFile& operator=(CPACSLinkToFile&&) = delete;
#else
        CPACSLinkToFile(const CPACSLinkToFile&);
        CPACSLinkToFile& operator=(const CPACSLinkToFile&);
#endif
    };
} // namespace generated

// Aliases in tigl namespace
#ifdef HAVE_CPP11
using CCPACSLinkToFile = generated::CPACSLinkToFile;
#else
typedef generated::CPACSLinkToFile CCPACSLinkToFile;
#endif
} // namespace tigl
