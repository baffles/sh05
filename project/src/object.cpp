// object.cpp
//  Basic object system

#include "object.h"
#include "abg.h"

using namespace std;

const char* PrintEPhysicsState(EPhysicsState s)
{
#	define PRINT_EPS(s) case s: return #s
	switch(s)
	{
		PRINT_EPS(PHYS_Normal);
		PRINT_EPS(PHYS_Falling);
		default: return "Unknown";
	}
#	undef PRINT_EGS
}

Object::Object(): flags(0), x(0), y(0), cls(-1)
{
}

Object::Object(uint32_t flags): flags(flags), x(0), y(0), w(0), h(0), cls(-1), fallspeed(0), physstate(PHYS_Normal)
{
}

void Object::CheckValid()
{
	GameState::CheckValid();
}

void Object::Dump(ostream& str)
{
	GameState::Dump(str);
	str << " flags " << hex << flags << dec << TRACE_VAR(x) << TRACE_VAR(y) << TRACE_VAR(w) << TRACE_VAR(h) << TRACE_VAR(cls) << TRACE_VAR(fallspeed) << " physstate " << PrintEPhysicsState(physstate);
}

EStatus Object::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	if(flags & OF_Physical)
	{
		//!! Obvious optimization: only check for falling if position changed
		int fell = (int) fallspeed;
		if(fell == 0)
			fell = 1;
		if(flags & OF_Interactive)
			fell = GGame.board->Drop(x, y - h, fell);
		if(fell != 0)
		{
			y -= fell;
			if(physstate != PHYS_Falling)
			{
				fallspeed = 0;
				physstate = PHYS_Falling;
			}
		}
		else
			physstate = PHYS_Normal;
		if(physstate == PHYS_Falling)
			fallspeed += (double) SpeedOfGravity / 10;
	}
	
	return s;
}

// The end
