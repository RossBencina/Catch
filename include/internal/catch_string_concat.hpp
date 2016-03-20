/*
*  Created by Ross on 20/03/2016.
*  Copyright 2016 Two Blue Cubes Ltd. All rights reserved.
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

    namespace Detail {
        inline std::size_t stringoidSize( char c )               { return 1; }
        inline std::size_t stringoidSize( const char *s )        { return std::strlen(s); }
        inline std::size_t stringoidSize( const std::string& s ) { return s.size(); }
    } // namespace Detail

    template<typename T1, typename T2>
    inline std::string concatenateStrings( const T1& s1, const T2& s2 ) {
        std::string result;
        result.reserve( Detail::stringoidSize( s1 ) + Detail::stringoidSize( s2 ) );
        result += s1;
        result += s2;
        return result;
    }

    template<typename T1, typename T2, typename T3>
    inline std::string concatenateStrings( const T1& s1, const T2& s2, const T3& s3 ) {
        std::string result;
        result.reserve( Detail::stringoidSize( s1 ) + Detail::stringoidSize( s2 )
            + Detail::stringoidSize( s3 ) );
        result += s1;
        result += s2;
        result += s3;
        return result;
    }

    template<typename T1, typename T2, typename T3, typename T4>
    inline std::string concatenateStrings( const T1& s1, const T2& s2, const T3& s3, const T4& s4 ) {
        std::string result;
        result.reserve( Detail::stringoidSize( s1 ) + Detail::stringoidSize( s2 )
            + Detail::stringoidSize( s3 ) + Detail::stringoidSize( s4 ) );
        result += s1;
        result += s2;
        result += s3;
        result += s4;
        return result;
    }

    template<typename T1, typename T2, typename T3, typename T4, typename T5>
    inline std::string concatenateStrings( const T1& s1, const T2& s2, const T3& s3, const T4& s4, const T5& s5 ) {
        std::string result;
        result.reserve( Detail::stringoidSize( s1 ) + Detail::stringoidSize( s2 )
            + Detail::stringoidSize( s3 ) + Detail::stringoidSize( s4 ) + Detail::stringoidSize( s5 ) );
        result += s1;
        result += s2;
        result += s3;
        result += s4;
        result += s5;
        return result;
    }
}

#endif // TWOBLUECUBES_CATCH_STRING_CONCAT_HPP_INCLUDED
