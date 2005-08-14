// game.cpp
//  Base game class for the main game

#ifndef DEDICATED_SERVER

#include "abg.h"
#include "game.h"
#include "platform.h"
#include "pawn.h"

using namespace std;

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
	GGame.board->camx = localpawn->x;
	//if(ABS(localpawn->y - GGame.board->camy) > 100)
	//	GGame.board->ScrollToLevel(localpawn->y / 200);
		
	return S_Continue;
}

void Game::Draw(BITMAP* dest)
{
	GGame.board->Draw(dest);
	GameState::Draw(dest);
}
		
bool Game::InitLogic()
{
	Platform* p = new Platform;
	p->x = 300;
	p->y = 200;
	p->w = BoardWidth - 600;
	p->h = 60;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	p = new Platform;
	p->x = 300;
	p->y = 100;
	p->w = BoardWidth - 600;
	p->h = 40;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	p = new Platform;
	p->x = 300;
	p->y = 160;
	p->w = BoardWidth - 600;
	p->h = 40;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	localpawn = new HumanPawn(1);
	localpawn->instance = Character::GetByName("CGamesPlay");
	localpawn->Move(20, PawnHeight + 10);
	localpawn->InitGraphics();
	AddManagedChild(localpawn);
	return GGame.board->InitLogic() & localpawn->InitLogic();
}

bool Game::InitGraphics()
{
	return GGame.board->InitGraphics();
}

#endif

// The end
