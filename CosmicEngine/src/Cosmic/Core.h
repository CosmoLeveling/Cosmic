#pragma once

#ifdef C_PLATFORM_WINDOWS
	#ifdef C_BUILD_DLL
		#define HAZEL_API __declspec(dllexport)
	#else
		#define HAZEL_API __declspec(dllimport)
	#endif
#else
	#error Cosmic only supports Windows!
#endif