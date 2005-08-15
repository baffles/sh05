// pawn.cpp
//  Player Pawns

#include <stdlib.h>
#include <math.h>
#include "pawn.h"
#include "abg.h"
#include "bullet.h"

using namespace std;

const char* PrintEPawnState(EPawnState s)
{
#	define PRINT_EPS(s) case s: return #s
	switch(s)
	{
		PRINT_EPS(PS_None);
		PRINT_EPS(PS_Walking);
		PRINT_EPS(PS_Jumping);
		PRINT_EPS(PS_Falling);
		default: return "Unknown";
	}
#	undef PRINT_EGS
}

Pawn::Pawn(uint32_t pnum): Object(OF_Dynamic | OF_Interactive | OF_Physical), instance(NULL), pnum(pnum), location(0), score(0), place(0), pstate(PS_None), jumptime(0), xs(0)
{
	w = PawnWidth;
	h = PawnHeight;
}

Pawn::~Pawn()
{
}

void Pawn::CheckValid()
{
	Object::CheckValid();
	TRACE_ASSERT(instance);
}

void Pawn::Dump(ostream& str)
{
	Object::Dump(str);
	str << TRACE_VAR(instance) << TRACE_VAR(pnum) << TRACE_VAR(location) << " pstate " << PrintEPawnState(pstate) << TRACE_VAR(sx) << TRACE_VAR(sy) << TRACE_VAR(dx) << TRACE_VAR(dy) << TRACE_VAR(x) << TRACE_VAR(y) << TRACE_VAR(progress) << TRACE_VAR(timedialation) << TRACE_VAR(xs);
}

void Pawn::GotoState(EPawnState news)
{
	pstate = news;
	progress = 0;
	jumptime = 0;
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
	timedialation = 1 / timetoarrive;
	GotoState(PS_Walking);
	double movespeed;
	if(timetoarrive > 1)
		movespeed = timetoarrive / floor(timetoarrive);
	else
		movespeed = timetoarrive;
}

EStatus Pawn::Tick(double dtime)
{
	EStatus s = Object::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	x += xs * (int) (dtime * 60);
	if(xs > 0)
		xs = MAX(xs - (physstate == PHYS_Falling ? WalkSpeed / 3 : WalkSpeed), 0);
	else if(xs < 0)
		xs = MIN(xs + (physstate == PHYS_Falling ? WalkSpeed / 3 : WalkSpeed), 0);
		
	if(x < 0) x = 0;
	if(x + w > BoardWidth) x = BoardWidth - w;
	
	switch(pstate)
	{
		case PS_Walking:
			break;
		case PS_Jumping:
			y += (int) (SpeedOfGravity * 1.25);
			jumptime += dtime;
			if(jumptime >= .2)
				GotoState(PS_None);
			break;
		default:
			break;
	}
	
	return s;
}

#ifndef DEDICATED_SERVER
void Pawn::Draw(BITMAP* dest)
{
	int sx, sy;
	GGame->board->RealToScreen(dest->w, dest->h, x, y, sx, sy);
	if(instance) masked_blit(instance->GetFrame(D_Left, S_Standing, 0), dest, 0, 0, sx, sy, PawnWidth, PawnHeight);
}

EStatus HumanPawn::Tick(double dtime)
{
	switch(physstate)
	{
		case PHYS_Normal:
			if(key[KEY_RIGHT])
			{
				xs = MIN(xs + WalkSpeed, WalkSpeed * 3);
				face = D_Right;
			}
			else if(key[KEY_LEFT])
			{
				xs = MAX(xs - WalkSpeed, -WalkSpeed * 3);
				face = D_Left;
			}
			if(key[KEY_SPACE] && physstate == PHYS_Normal)
			{
				GotoState(PS_Jumping);
			}
			break;
		case PHYS_Falling:
			if(key[KEY_RIGHT])
			{
				xs = MIN(xs + WalkSpeed, WalkSpeed * 3) / 3;
				face = D_Right;
			}
			else if(key[KEY_LEFT])
			{
				xs = MAX(xs - WalkSpeed, -WalkSpeed * 3) / 3;
				face = D_Left;
			}
			break;
	}
	if(key[KEY_A] || key[KEY_S] || key[KEY_D] || key[KEY_F])
	{
		Bullet* b = new Bullet;
		GGame->AddObject(b);
		b->x = x + (face == D_Left ? 0 : PawnWidth * 2 / 3);
		b->y = y - (PawnWidth * 2 / 3);
		b->xs = 5 * (face == D_Left ? -1 : 1);
		b->InitGraphics();
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
	return Pawn::Tick(dtime);
}
#endif

// The end
