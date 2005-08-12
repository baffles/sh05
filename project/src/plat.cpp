// plat.cpp
//  Platform compatibility layer

#include <stdlib.h>
#include "plat.h"

using namespace std;

#ifdef __linux__
TimeType GetNow()
{
	timeval now;
	gettimeofday(&now, NULL);
	return (TimeType) now;
}

TimeType GetDiff(TimeType _then, double& dtime)
{
	timeval then = (timeval) _then;
	timeval now;
	gettimeofday(&now, NULL);
	timeval diff;
	
	diff.tv_sec = now.tv_sec - then.tv_sec;
	diff.tv_usec = now.tv_usec - then.tv_usec;
	while(diff.tv_usec < 0)
	{
		diff.tv_sec--;
		diff.tv_usec = 1000000 + now.tv_usec - then.tv_usec;
	}
		
	dtime = diff.tv_sec;
	dtime += (double) diff.tv_usec / 1e6;
	
	return (TimeType) now;
}

void Sleep(uint32_t msecs)
{
	timeval t;
	t.tv_sec = msecs / 1000;
	t.tv_usec = 1000 * (msecs % 1000);
	select(0, NULL, NULL, NULL, &t);
}
#endif

#if __MINGW32__ || _MSC_VER
static LARGE_INTEGER pers;
TimeType GetNow()
{
	LARGE_INTEGER now;
	QueryPerformanceFrequency(&pers);
	QueryPerformanceCounter(&now);
	return (TimeType) now;
}

TimeType GetDiff(TimeType _then, double& dtime)
{
	LARGE_INTEGER then = (LARGE_INTEGER) _then;
	LARGE_INTEGER now;
	QueryPerformanceCounter(&now);
	LARGE_INTEGER diff;
 	diff.QuadPart = now.QuadPart - then.QuadPart;
	dtime = (double) diff.QuadPart / pers.QuadPart;
	return (TimeType) now;
}

void Sleep(uint32_t milliseconds)
{
	Sleep((unsigned long) milliseconds);
}
#endif

// The end
