// plat.h
//  Platform compatibility

#ifdef __linux__
#	include <stdint.h>
#	include <sys/time.h>
#	include <signal.h>
#	define DEBUG_BREAK() raise(SIGTRAP)
typedef timeval TimeType;
#endif

#ifdef __MINGW32__
#	include <stdint.h>
# ifndef DEDICATED_SERVER
#  include <allegro.h>
#	 include <winalleg.h>
# else
#  include <windows.h>
# endif
#	define ABG_WINDOWS
typedef LARGE_INTEGER TimeType;
#endif

#ifdef _MSC_VER
# ifndef DEDICATED_SERVER
#  include <allegro.h>
#	 include <winalleg.h>
# else
#  include <windows.h>
# endif
#	define ABG_WINDOWS
#	undef min
#	undef max
#	define DEBUG_BREAK() DebugBreak()
//typedef __int8 int8_t;
//typedef unsigned __int8 uint8_t;
//typedef __int16 int16_t;
//typedef unsigned __int16 uint16_t;
//typedef __int32 int32_t;
//typedef unsigned __int32 uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
typedef LARGE_INTEGER TimeType;
#endif

TimeType GetNow();
TimeType GetDiff(TimeType _then, double& dtime);
#ifndef ABG_WINDOWS
	void Sleep(uint32_t msecs);
#endif

// The end
