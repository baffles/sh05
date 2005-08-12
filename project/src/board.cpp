// board.cpp
//  Boaard clss

#include "board.h"
#include "pawn.h"

using namespace std;

vector<Board*>* Board::boards = NULL;
bool Board::initialized = false;

void Board::Initialize()
{
	if(initialized)
		return;
	boards = new vector<Board*>;
	initialized = true;
}

void Board::RegisterBoard(Board* c)
{
	Initialize();
	boards->push_back(c);
	c->id = boards->size() - 1;
}

void Board::StaticInitGraphics()
{
	Initialize();
	vector<Board*>::iterator i = boards->begin();
	while(i != boards->end())
	{
		if(!(*i)->InitGraphics())
			i = boards->erase(i);
		else
			i++;
	}
}

void Board::StaticDestroy()
{
	if(!initialized) return;
	for(vector<Board*>::iterator i = boards->begin(); i != boards->end(); i++)
		delete *i;
	delete boards;
	boards = NULL;
	initialized = false;
}

Board::Board(): follow(NULL)
{
	Board::RegisterBoard(this);
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
