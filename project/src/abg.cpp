// abg.cpp
//  Main file for Allegro Battle Ground

#define ALLEGRO_NO_MAGIC_MAIN

#include "abg.h"
#include "gamestate.h"

using namespace std;

GameInfo GGame;
uint32_t caret_width = 0;
uint32_t caret_height = 0;
BITMAP* caret = NULL;
uint32_t GTime = 0;

static uint32_t caret_rotation = 0;
static double caret_phase = 0;
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
	caret_rotation += (uint32_t) (dtime * 128);
	caret_rotation = caret_rotation & 0xff;
	caret_phase += dtime * 2;
	caret_phase = fmod(caret_phase, 6.28);
	this_second += dtime;
	while(this_second >= 1)
	{
		GTime++;
		this_second -= 1;
	}
}

void DrawCaret(BITMAP* dest, uint32_t x, uint32_t y)
{
	rotate_sprite(dest, caret, x + (caret_width / 5), y + (caret_height / 4) + (uint32_t) (sin(caret_phase) * caret_height / 8), itofix(caret_rotation));
}

int main(int argc, char* argv[])
{
	allegro_init();
	set_config_file("data/tinparty.ini");
	install_keyboard();
	srand(time(NULL));

	GameState::StaticInitGraphics(UM_SystemBuffer, true, 320, 240, 32, GFX_AUTODETECT_WINDOWED);
	
	Character::StaticInitGraphics();
	Board::StaticInitGraphics();
	
	caret = load_bitmap("data/caret.tga", NULL);
	if(!caret)
		cout << "Failed to load data/caret.tga" << endl;
	caret_width = (uint32_t) sqrt((double) caret->w * caret->w + caret->h * caret->h);
	caret_height = caret->h * 2;
	
	GGame.board = NULL;
	
	/*GameState::rootstate = new Menu;
	GameState::rootstate->InitGraphics();
	GameState::rootstate->InitLogic();
	GameState::AddRoot(GameState::rootstate);
	GameState::Run();*/
	
	ResetGame();

	GameState::StaticDestroyGraphics();
	
	destroy_bitmap(caret);
	
	Board::StaticDestroy();
	Character::StaticDestroy();
	
	TRACE_END();
	
	return 0;
}
END_OF_MAIN()

// The end
