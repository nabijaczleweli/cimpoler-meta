// The MIT License (MIT)
// Copyright (c) 2016 nabijaczleweli

// Permission is hereby granted, free of charge, to any person obtaining a copy of
// this software and associated documentation files (the "Software"), to deal in
// the Software without restriction, including without limitation the rights to
// use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
// the Software, and to permit persons to whom the Software is furnished to do so,
// subject to the following conditions:

// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
// FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
// COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
// IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
// CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


#pragma once
#ifndef CIMPOLER_META_HPP
#define CIMPOLER_META_HPP


#include <string>


#ifdef _WIN32
#define CIMPOLER_META_OS_NAME "Windows"
#elif defined(__linux__)
#define CIMPOLER_META_OS_NAME "Linux"
#elif defined(unix) || defined(__unix__) || defined(__unix)
#define CIMPOLER_META_OS_NAME "UNIX"
#elif defined(__APPLE__)
#define CIMPOLER_META_OS_NAME "Mac OS X"
#elif defined(__FreeBSD__)
#define CIMPOLER_META_OS_NAME "FreeBSD"
#else
#define CIMPOLER_META_OS_NAME "an unknown OS"
#endif

#ifdef __clang__
#define CIMPOLER_META_COMPILER_NAME "Clang"
#elif defined(__GNUC__)
#define CIMPOLER_META_COMPILER_NAME "GCC"
#elif defined(_MSC_VER)
#define CIMPOLER_META_COMPILER_NAME "MSVC"
#else
#define CIMPOLER_META_COMPILER_NAME "an unknown compiler"
#endif

#if __cplusplus == 201402L
#define CIMPOLER_META_CPP_VER "C++14"
#elif __cplusplus == 201103L
#define CIMPOLER_META_CPP_VER "C++11"
#elif __cplusplus == 199711L || __cplusplus == 199707L
#define CIMPOLER_META_CPP_VER "C++98"
#elif __cplusplus_cli == 200406L
#define CIMPOLER_META_CPP_VER "C++/CLI"
#else
#define CIMPOLER_META_CPP_VER "an unknown standard"
#endif

namespace cimpoler_meta {
	static inline std::string version() {
#ifdef __clang__
		return std::to_string(__clang_major__) + '.' + std::to_string(__clang_minor__) + '.' + std::to_string(__clang_patchlevel__);
#elif defined(__GNUC__)
		return std::to_string(__GNUC__) + '.' + std::to_string(__GNUC_MINOR__) + '.' + std::to_string(__GNUC_PATCHLEVEL__);
#elif defined(_MSC_VER)
		return std::to_string(_MSC_VER);
#else
		static_assert(false, "Unsupported compiler");
#endif
	}
}


#endif  // CIMPOLER_META_HPP
