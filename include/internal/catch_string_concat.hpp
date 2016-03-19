/*
*  Created by Ross on 20/03/2016.
*  Copyright 2011 Two Blue Cubes Ltd. All rights reserved.
*
*  Distributed under the Boost Software License, Version 1.0. (See accompanying
*  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
*
*/
#ifndef TWOBLUECUBES_CATCH_STRING_CONCAT_HPP_INCLUDED
#define TWOBLUECUBES_CATCH_STRING_CONCAT_HPP_INCLUDED

#include <cstring>
#include <string>

namespace Catch {

    inline std::size_t string_length(char c) { return 1; }

    inline std::size_t string_length(const char *s) { return std::strlen(s); }

    template<std::size_t N>
    inline std::size_t string_length(const char(&s)[N]) { return N - 1; }

    inline std::size_t string_length(const std::string& s) { return s.size(); }

    template<typename T1, typename T2>
    inline std::string string_concat(const T1& s1, const T2& s2) {
        std::string result;
        result.reserve(string_length(s1) + string_length(s2));
        result += s1;
        result += s2;
        return result;
    }

    template<typename T1, typename T2, typename T3>
    inline std::string string_concat(const T1& s1, const T2& s2, const T3& s3) {
        std::string result;
        result.reserve(string_length(s1) + string_length(s2) + string_length(s3));
        result += s1;
        result += s2;
        result += s3;
        return result;
    }

    template<typename T1, typename T2, typename T3, typename T4>
    inline std::string string_concat(const T1& s1, const T2& s2, const T3& s3, const T4& s4) {
        std::string result;
        result.reserve(string_length(s1) + string_length(s2) + string_length(s3) + string_length(s4));
        result += s1;
        result += s2;
        result += s3;
        result += s4;
        return result;
    }

    template<typename T1, typename T2, typename T3, typename T4, typename T5>
    inline std::string string_concat(const T1& s1, const T2& s2, const T3& s3, const T4& s4, const T5& s5) {
        std::string result;
        result.reserve(string_length(s1) + string_length(s2) + string_length(s3) + string_length(s4) + string_length(s5));
        result += s1;
        result += s2;
        result += s3;
        result += s4;
        result += s5;
        return result;
    }
}

#endif // TWOBLUECUBES_CATCH_STRING_CONCAT_HPP_INCLUDED
