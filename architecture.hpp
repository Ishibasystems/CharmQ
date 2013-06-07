#include <cstdio>
#include <cstdlib>
#include <cstring>

#define _VERSION_ "PC-9800 series"

#ifdef __linux__
	#define __OS__ "Linux"
#endif

#ifdef __QNX__
	#define __OS__ "QNX"
#endif

#ifdef __FreeBSD__
	#define __OS__ "FreeBSD"
#endif

#ifdef __NetBSD__
	#define __OS__ "NetBSD"
#endif

#ifdef __OpenBSD__
	#define __OS__ "OpenBSD"
#endif

#ifdef __DragonFly__
	#define __OS__ "DragonFly"
#endif

#ifdef _WIN32
	#define __OS__ "Windows x86"
#endif

#ifdef _WIN64
	#define __OS__ "Windows x64"
#endif

#ifdef __APPLE__
	#ifdef __MACH__
		#define __OS__ "Mac OS"
	#else
		#define __OS__ "Mac OS X"
	#endif
#endif

#if defined(__unix__) && !defined(__OS__)
	#define __OS__ "UNIX"
#endif

#if defined(__unix__) || defined(__linux__) || defined(__FreeBSD__) ||defined(__NetBSD__)
	#include <unistd.h>
	#include <sys/stat.h>
	#include <sys/types.h>
#endif

#if defined(_WIN32) || defined(_WIN64)
	#include <windows.h>
	#include <direct.h>
#endif
