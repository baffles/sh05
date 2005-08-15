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

Pawn::Pawn(uint32_t pnum): Object(OF_Dynamic | OF_Interactive | OF_Physical), instance(NULL), pnum(pnum), score(0), place(0), pstate(PS_None), face(D_Right), spritestate(S_Standing), jumptime(0), xs(0), animphase(0), nextshot(0)
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
	TRACE_ASSERT(pstate >= PS_None && pstate <= PS_Falling);
	TRACE_ASSERT(face == D_Left || face == D_Right);
	TRACE_ASSERT(spritestate >= S_Standing && spritestate <= S_Jumping);
}

void Pawn::Dump(ostream& str)
{
	Object::Dump(str);
	str << TRACE_VAR(instance) << TRACE_VAR(pnum) << " pstate " << PrintEPawnState(pstate) << TRACE_VAR(face) << TRACE_VAR(spritestate) << TRACE_VAR(jumptime) << TRACE_VAR(xs) << TRACE_VAR(animphase) << TRACE_VAR(nextshot);
}

void Pawn::GotoState(EPawnState news)
{
	pstate = news;
	jumptime = 0;
}

EStatus Pawn::Tick(double dtime)
{
	EStatus s = Object::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	animphase += dtime;
	if(animphase >= 60)
		animphase -= 60;
	if(xs == 0)
		spritestate = S_Standing;
		
	if(nextshot > 0)
	{
		nextshot -= dtime;
		if(nextshot < 0)
			nextshot = 0;
	}
	
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
	if(instance) masked_blit(instance->GetFrame(face, spritestate, (int) (animphase * 20)), dest, 0, 0, sx, sy, PawnWidth, PawnHeight);
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
				spritestate = S_Walking;
			}
			else if(key[KEY_LEFT])
			{
				xs = MAX(xs - WalkSpeed, -WalkSpeed * 3);
				face = D_Left;
				spritestate = S_Walking;
			}
			if(key[KEY_SPACE] && physstate == PHYS_Normal)
			{
				GotoState(PS_Jumping);
			}
			break;
		case PHYS_Falling:
			spritestate = S_Jumping;
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
	if((key[KEY_A] || key[KEY_S] || key[KEY_D] || key[KEY_F]) && nextshot <= 0)
	{
		Bullet* b = new Bullet;
		GGame->AddObject(b);
		b->x = x + (face == D_Left ? 0 : PawnWidth * 2 / 3);
		b->y = y - (PawnWidth * 2 / 3);
		b->xs = 5 * (face == D_Left ? -1 : 1);
		b->InitGraphics();
		nextshot = .1;
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
