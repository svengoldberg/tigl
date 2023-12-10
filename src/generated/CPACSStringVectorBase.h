// Copyright (c) 2020 RISC Software GmbH
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
#include <typeinfo>
#include "CTiglError.h"
#include "tigl_internal.h"

namespace tigl
{
class CTiglUIDObject;
class CCPACSWingProfileCST;
class CCPACSCurveParamPointMap;
class CCPACSCurvePointListXYZ;
class CCPACSPointListRelXYZVector;
class CCPACSPointListXYVector;
class CCPACSRotorBladeAttachment;

namespace generated
{
    class CPACSTrackJointPosition;

    // This class is used in:
    // CPACSCst2D
    // CPACSCurveParamPointMap
    // CPACSCurvePointListXYZ
    // CPACSPointListRelXYZVector
    // CPACSPointListXYVector
    // CPACSRotorBladeAttachment
    // CPACSTrackJointPosition

    /// @brief stringVectorBaseType
    /// 
    /// Base type for string vector nodes
    /// The vector base type can include optional uncertainty
    /// information. The description of uncertainties is placed in
    /// addtional attributes. First, it is described by an attribute that
    /// describes the type of uncertainty function called functionName.
    /// The functionName attribute includes the tag name of the
    /// distribution function which is listened in the table shown below.
    /// Each uncertainty function is further describes by a set of
    /// parameters that are described in the table below.
    /// If the uncertainty values change for the elements of
    /// the vector than the attribute may be written as a list of values
    /// separated by semicolons
    /// DEPRECATED: As of CPACS version 3.3, the mapType attribute is set to optional to ensure the compatibility of older data sets.
    /// However, since the type is uniquely defined via the XSD, the attribute is superfluous
    /// and will therefore be completely omitted in the next major release (Note: requires
    /// TiXI >= 3.3). Please contact the CPACS team
    /// if for any reason you see a long-term need for the mapType attribute.
    /// @see uncertaintyFunctions
    /// 
    class CPACSStringVectorBase
    {
    public:
        TIGL_EXPORT CPACSStringVectorBase(CCPACSWingProfileCST* parent);
        TIGL_EXPORT CPACSStringVectorBase(CCPACSCurveParamPointMap* parent);
        TIGL_EXPORT CPACSStringVectorBase(CCPACSCurvePointListXYZ* parent);
        TIGL_EXPORT CPACSStringVectorBase(CCPACSPointListRelXYZVector* parent);
        TIGL_EXPORT CPACSStringVectorBase(CCPACSPointListXYVector* parent);
        TIGL_EXPORT CPACSStringVectorBase(CCPACSRotorBladeAttachment* parent);
        TIGL_EXPORT CPACSStringVectorBase(CPACSTrackJointPosition* parent);

        TIGL_EXPORT virtual ~CPACSStringVectorBase();

        template<typename P>
        bool IsParent() const
        {
            return m_parentType != NULL && *m_parentType == typeid(P);
        }

        template<typename P>
        P* GetParent()
        {
            static_assert(std::is_same<P, CCPACSWingProfileCST>::value || std::is_same<P, CCPACSCurveParamPointMap>::value || std::is_same<P, CCPACSCurvePointListXYZ>::value || std::is_same<P, CCPACSPointListRelXYZVector>::value || std::is_same<P, CCPACSPointListXYVector>::value || std::is_same<P, CCPACSRotorBladeAttachment>::value || std::is_same<P, CPACSTrackJointPosition>::value, "template argument for P is not a parent class of CPACSStringVectorBase");
            if (!IsParent<P>()) {
                throw CTiglError("bad parent");
            }
            return static_cast<P*>(m_parent);
        }

        template<typename P>
        const P* GetParent() const
        {
            static_assert(std::is_same<P, CCPACSWingProfileCST>::value || std::is_same<P, CCPACSCurveParamPointMap>::value || std::is_same<P, CCPACSCurvePointListXYZ>::value || std::is_same<P, CCPACSPointListRelXYZVector>::value || std::is_same<P, CCPACSPointListXYVector>::value || std::is_same<P, CCPACSRotorBladeAttachment>::value || std::is_same<P, CPACSTrackJointPosition>::value, "template argument for P is not a parent class of CPACSStringVectorBase");
            if (!IsParent<P>()) {
                throw CTiglError("bad parent");
            }
            return static_cast<P*>(m_parent);
        }

        TIGL_EXPORT virtual CTiglUIDObject* GetNextUIDParent();
        TIGL_EXPORT virtual const CTiglUIDObject* GetNextUIDParent() const;

        TIGL_EXPORT virtual void ReadCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath);
        TIGL_EXPORT virtual void WriteCPACS(const TixiDocumentHandle& tixiHandle, const std::string& xpath) const;

        TIGL_EXPORT virtual const boost::optional<std::string>& GetMapType() const;
        TIGL_EXPORT virtual void SetMapType(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetMu() const;
        TIGL_EXPORT virtual void SetMu(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetDelta() const;
        TIGL_EXPORT virtual void SetDelta(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetA() const;
        TIGL_EXPORT virtual void SetA(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetB() const;
        TIGL_EXPORT virtual void SetB(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetC() const;
        TIGL_EXPORT virtual void SetC(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetV() const;
        TIGL_EXPORT virtual void SetV(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const boost::optional<std::string>& GetW() const;
        TIGL_EXPORT virtual void SetW(const boost::optional<std::string>& value);

        TIGL_EXPORT virtual const std::string& GetValue() const;
        TIGL_EXPORT virtual void SetValue(const std::string& value);

    protected:
        void* m_parent;
        const std::type_info* m_parentType;

        boost::optional<std::string> m_mapType;
        boost::optional<std::string> m_mu;
        boost::optional<std::string> m_delta;
        boost::optional<std::string> m_a;
        boost::optional<std::string> m_b;
        boost::optional<std::string> m_c;
        boost::optional<std::string> m_v;
        boost::optional<std::string> m_w;
        std::string                  m_value;

    private:
        CPACSStringVectorBase(const CPACSStringVectorBase&) = delete;
        CPACSStringVectorBase& operator=(const CPACSStringVectorBase&) = delete;

        CPACSStringVectorBase(CPACSStringVectorBase&&) = delete;
        CPACSStringVectorBase& operator=(CPACSStringVectorBase&&) = delete;
    };
} // namespace generated

// CPACSStringVectorBase is customized, use type CCPACSStringVector directly

// Aliases in tigl namespace
using CCPACSTrackJointPosition = generated::CPACSTrackJointPosition;
} // namespace tigl
