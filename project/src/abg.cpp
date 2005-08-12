// abg.cpp
//  Main file for Allegro Battle Ground

#define ALLEGRO_NO_MAGIC_MAIN

#include "abg.h"
#include "gamestate.h"

using namespace std;

GameInfo GGame;
uint32_t GTime = 0;

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
	GGame.turn = 0;
	GGame.nturns = 1;
	GGame.players.clear();
	GGame.curplayerturn = 0;
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

int main(int argc, char* argv[])
{
	allegro_init();
	set_config_file("data/tinparty.ini");
	install_keyboard();
	srand(time(NULL));

	GameState::StaticInitGraphics(UM_SystemBuffer, true, 320, 240, 32, GFX_AUTODETECT_WINDOWED);
	
	Character::StaticInitGraphics();
	
	GGame.board = NULL;
	
	/*GameState::rootstate = new Menu;
	GameState::rootstate->InitGraphics();
	GameState::rootstate->InitLogic();
	GameState::AddRoot(GameState::rootstate);
	GameState::Run();*/
	
	ResetGame();

	GameState::StaticDestroyGraphics();
	
	Character::StaticDestroy();
	
	TRACE_END();
	
	return 0;
}
END_OF_MAIN()

// The end
