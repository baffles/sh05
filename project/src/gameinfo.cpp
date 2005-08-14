// gameinfo.cpp
//  Game status information

#include "gameinfo.h"

using namespace std;

GameInfo::GameInfo(): board(NULL)
{
}

GameInfo::~GameInfo()
{
	board = NULL;
	players.clear();
	objects.clear();
}

void GameInfo::CheckValid()
{
	GameState::CheckValid();
	TRACE_ASSERT(board);
}

void GameInfo::Dump(ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR(board) << TRACE_VAR(players.size()) << TRACE_VAR(objects.size());
}

void GameInfo::AddPlayer(Pawn* p)
{
	AddManagedChild(p);
	players.push_back(p);
}

void GameInfo::AddObject(Object* o)
{
	AddManagedChild(o);
	objects.push_back(o);
}

void GameInfo::SetBoard(Board* b)
{
	if(board)
		board->Finish();
	board = b;
	AddManagedChild(b);
}

// The end
