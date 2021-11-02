/*
* Copyright (C) 2021 German Aerospace Center (DLR/SC)
*
* Created: 2021-11-02 Martin Siggel <Martin.Siggel@dlr.de>
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#ifndef VERSION_H
#define VERSION_H

#include <string>
#include <regex>
#include <exception>

/**
 * @brief A class to parse and compare version strings
 */
class Version
{
public:
    explicit Version(const std::string& str)
        : m_major(0),
          m_minor(0),
          m_patch(0)
    {
        parse(str);
    }

    int vMajor() const
    {
        return m_major;
    }

    int vMinor() const
    {
        return m_minor;
    }

    int vPatch() const
    {
        return m_patch;
    }

    std::string vLabel() const
    {
        return m_label;
    }

    std::string vBuild() const
    {
        return m_build;
    }

    bool operator< (const Version& other) const
    {
        if (vMajor() < other.vMajor()) {
            return true;
        }
        else if (vMajor() > other.vMajor()) {
            return false;
        }

        // major Versions are same
        if (vMinor() < other.vMinor()) {
            return true;
        }
        else if (vMinor() > other.vMinor()) {
            return false;
        }

        // major and minor are same
        if (vPatch() < other.vPatch()) {
            return true;
        }
        else if (vPatch() > other.vPatch()) {
            return false;
        }

        // we don't compare build or pre-release right now
        // is there any sane way to do it???


        return false;

    }

    bool operator> (const Version& other) const
    {
        return other < *this;
    }

    bool operator== (const Version& other) const
    {
        return !(*this < other) && !(*this > other);
    }

private:

    int m_major, m_minor, m_patch;
    std::string m_label, m_build;

    void parse(const std::string& str)
    {
        const auto expr = std::regex("([0-9]+)\\.([0-9]+)(\\.([0-9]+))?(?:-(\\w+(\\.\\w*)?)(\\+(.*))?|\\+(.*))?");
        auto results = std::match_results<std::string::const_iterator>();

        if (std::regex_search(str, results, expr)) {
            m_major = atof(results[1].str().c_str());
            m_minor = atof(results[2].str().c_str());
            m_patch = atof(results[4].str().c_str());
            m_label = results[5];
            m_build = results[8] != "" ? results[8] : results[9];
        }
        else {
            throw std::invalid_argument("Invalid format of version string '" + str + "'." );
        }
    }


};

#endif // VERSION_H
