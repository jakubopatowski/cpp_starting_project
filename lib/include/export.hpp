#pragma once

#ifdef __WINDOWS__
#if defined( LIB_MAKE )
#define LIB_EXPORT __declspec( dllexport )
#else
#define LIB_EXPORT __declspec( dllimport )
#endif
#else
#define LIB_EXPORT
#endif