# cimpoler-meta [![Build Status](https://travis-ci.org/nabijaczleweli/cimpoler-meta.svg?branch=master)](https://travis-ci.org/nabijaczleweli/cimpoler-meta) [![Licence](https://img.shields.io/badge/license-MIT-blue.svg?style=flat)](LICENSE)
Header-only C++ compiler metadata extractor

## API ref
```cpp
/// Simple name of the host OS or "an unknown OS"
///
/// C string
#define CIMPOLER_META_OS_NAME

/// Simple name of the compiler or "an unknown compiler"
///
/// C string
#define CIMPOLER_META_COMPILER_NAME

/// Colloquial name of the standard supported or "an unknown standard"
///
/// C string
#define CIMPOLER_META_CPP_VER

/// Simple name of the standard library or "an unknown standard library"
///
/// C string
#define CIMPOLER_META_STDLIB

namespace cimpoler_meta {
	/// Returns the compiler's version in a human-readable format
	///
	/// Will fail to compile on an unsupported compiler
	std::string version();

	/// Returns the standard library implementation's version
	///
	/// NOTE: does not work with Intel's stdlib as it's not versioned
	///
	/// Will fail to compile on an unsupported stdandard library implementation
	std::string stdlib_version();
}
```

## Supports
### OSes
1. Windows
2. Linux
3. UNIX
4. Mac OS X
5. FreeBSD

### Compilers
1. Clang
2. GCC
3. Clang/C2
4. MSVC

### Standards
1. C++
	* 98
	* 11
	* 14
2. C++/CLI

### Standard libraries
1. Dinkumware (MSVC's)
2. libstdc++
3. libc++
4. Intel

## Questions/issues
We don't support your favourite compiler? The code is absolute shit? Your family dog just died?<br />
No worries, fire up an issue on the [issue tracker](https://github.com/nabijaczleweli/cimpoler-meta/issues) and we'll fix you right up.
