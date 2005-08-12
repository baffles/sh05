// board.cpp
//  Boaard clss

#include "board.h"
#include "pawn.h"

using namespace std;

Board::Board(): follow(NULL)
{
}

EStatus Board::Tick(double dtime)
{
	if(follow)
	{
		TRACE_VALID(follow);
		camx = follow->x;
		camy = -follow->y;
	}

	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	return S_ContinueNoWait;
}

void Board::RealToScreen(int w, int h, int inx, int iny, int& x, int& y)
{
	// Convert absolute to screen
	int tlx = camx - (w / 2);
	int tly = camy - (h / 2);
	x = inx - tlx;
	y = -iny - tly;
}

// The end
