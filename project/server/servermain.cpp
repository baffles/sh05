// servermain.cpp
//  Main server file for Allegro Battle Ground

#include "servermain.h"
#include "server.h"

using namespace std;

GameInfo GGame;
uint32_t GTime = 0;
Ini::File settings;

static double this_second = 0;

void ResetGame()
{
	for(vector<Pawn*>::iterator i = GGame.players.begin(); i != GGame.players.end(); i++)
	{
		TRACE_END_STATE(*i);
		delete *i;
	}
	GGame.players.clear();
	if(GGame.board)
	{
		TRACE_END_STATE(GGame.board);
		delete GGame.board;
		GGame.board = NULL;
	}
}

void NewGame()
{
	ResetGame();
	GGame.players.clear();
}

void GlobalTick(double dtime)
{
	this_second += dtime;
	while(this_second >= 1)
	{
		GTime++;
		this_second -= 1;
	}
}

int main(int argc, char *argv[])
{
	Ini::Load("server.ini", settings);
	if(enet_initialize() != 0)
		return -1;
	srand(time(NULL));
	
	int sport = atoi(Ini::GetString(settings, "Server", "Port", "21870").c_str());
	
	GGame.board = new Board;
	
	GameState::rootstate = new Server(sport);
	GameState::rootstate->InitLogic();
	GameState::AddRoot(GameState::rootstate);
	GameState::Run();
	
	ResetGame();
	
	Character::StaticDestroy();
	
	Ini::Save("server.ini", settings);
	enet_deinitialize();
	
	TRACE_END();
	
	return 0;
}

// The End!
