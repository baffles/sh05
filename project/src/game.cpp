// game.cpp
//  Base game class for the main game

#include "abg.h"
#include "game.h"

Game::Game()
{
}

Game::~Game()
{
}

EStatus Game::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	GGame.board->Tick(dtime);
	
	if(key[KEY_ESC])
	{
		Finish();
		return S_Finished;
	}
	if(key[KEY_UP] && GGame.board->camy * 200 - 100 == GGame.board->_camy)
		GGame.board->ScrollToLevel(GGame.board->camy + 1);
	if(key[KEY_DOWN] && GGame.board->camy * 200 - 100 == GGame.board->_camy)
		GGame.board->ScrollToLevel(GGame.board->camy - 1);
	if(key[KEY_RIGHT])
	{
		if(GGame.board->camx < BoardWidth)
			GGame.board->camx++;
	}
	if(key[KEY_LEFT])
	{
		if(GGame.board->camx > 0)
			GGame.board->camx--;
	}
		
	return S_Continue;
}

void Game::Draw(BITMAP* dest)
{
	GGame.board->Draw(dest);
}
		
bool Game::InitLogic()
{
	return GGame.board->InitLogic();
}

bool Game::InitGraphics()
{
	return GGame.board->InitGraphics();
}

// The end
