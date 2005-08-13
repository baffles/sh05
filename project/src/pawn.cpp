// pawn.cpp
//  Player Pawns

#include <stdlib.h>
#include <math.h>
#include "pawn.h"
#include "abg.h"

using namespace std;

const char* PrintEPawnState(EPawnState s)
{
#	define PRINT_EPS(s) case s: return #s
	switch(s)
	{
		PRINT_EPS(PS_None);
		PRINT_EPS(PS_Walking);
		PRINT_EPS(PS_Rolling);
		PRINT_EPS(PS_RollingInAir);
		default: return "Unknown";
	}
#	undef PRINT_EGS
}

Pawn::Pawn(uint32_t pnum): instance(NULL), pnum(pnum), location(0), score(0), place(0), pstate(PS_None)
{
}

Pawn::~Pawn()
{
}

void Pawn::CheckValid()
{
	GameState::CheckValid();
	TRACE_ASSERT(instance);
}

void Pawn::Dump(ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR(instance) << TRACE_VAR(pnum) << TRACE_VAR(location) << " pstate " << PrintEPawnState(pstate) << TRACE_VAR(sx) << TRACE_VAR(sy) << TRACE_VAR(dx) << TRACE_VAR(dy) << TRACE_VAR(x) << TRACE_VAR(y) << TRACE_VAR(progress) << TRACE_VAR(timedialation);
}

void Pawn::GotoState(EPawnState news)
{
	pstate = news;
}

void Pawn::MoveTo(int _x, int _y, double timetoarrive, bool isspeed)
{
	if(isspeed)
	{
		// Time = distance / rate
		double dx, dy, d;
		dx = fabs((double) x - _x);
		dy = fabs((double) y - _y);
		d = sqrt((dx * dx) + (dy * dy));
		timetoarrive = d / timetoarrive;
	}
	sx = x;
	sy = y;
	dx = _x;
	dy = _y;
	progress = 0;
	timedialation = 1 / timetoarrive;
	GotoState(PS_Walking);
	double movespeed;
	if(timetoarrive > 1)
		movespeed = timetoarrive / floor(timetoarrive);
	else
		movespeed = timetoarrive;
	if(instance) instance->Animate(S_Walking, movespeed * 2);
}

EStatus Pawn::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	if(x != dx || y != dy)
	{
		x = sx + (int) ((dx - sx) * progress);
		y = sy + (int) ((dy - sy) * progress);
		progress += dtime * timedialation;
		if(progress >= 1)
		{
			sx = x = dx;
			sy = y = dy;
		}
	}
	
	if(instance) instance->Tick(dtime);
	
	switch(pstate)
	{
		case PS_Walking:
			if(x == dx && y == dy)
			{
				if(instance) instance->Animate(S_Standing, 1);
				GotoState(PS_None);
				s = S_ContinueNoWait;
			}
			break;
		case PS_RollingInAir:
			if(instance && instance->progress >= 1)
			{
				s = S_ContinueNoWait;
				GotoState(PS_None);
			}
			break;
		default:
			break;
	}
	
	return s;
}

void Pawn::Draw(BITMAP* dest)
{
	int sx, sy;
	GGame.board->RealToScreen(dest->w, dest->h, x, y, sx, sy);
	if(instance) instance->DrawSelf(dest, sx - (PawnSize / 2), sy - PawnSize, PawnSize, PawnSize);
}

void HumanPawn::GotoState(EPawnState news)
{
	Pawn::GotoState(news);
	clear_keybuf();
}

EStatus HumanPawn::Tick(double dtime)
{
	switch(pstate)
	{
		case PS_Rolling:
			if(keypressed() && instance && instance->state == S_Standing)
			{
				int key = readkey();
				if(key >> 8 == KEY_SPACE)
				{
					instance->Animate(S_Jumping, 1);
					pstate = PS_RollingInAir;
				}
			}
			break;
		default:
			break;
	}
	return Pawn::Tick(dtime);
}

void ComputerPawn::GotoState(EPawnState news)
{
	Pawn::GotoState(news);
	progress = 0;
	timetoreact = (double) rand() / RAND_MAX * 3;
}

EStatus ComputerPawn::Tick(double dtime)
{
	progress += dtime;
	switch(pstate)
	{
		case PS_Rolling:
			if(progress >= timetoreact && instance && instance->state == S_Standing)
			{
				instance->Animate(S_Jumping, 1);
				pstate = PS_RollingInAir;
			}
			if(instance && instance->state != S_Standing)
				progress = 0;
			break;
		default:
			break;
	}
	return Pawn::Tick(dtime);
}

// The end
