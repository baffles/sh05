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
	
	GGame.board->camx = localpawn->x;

	if(ABS(((localpawn->y + 200) / 200) - GGame.board->camy) > 0)
		GGame.board->ScrollToLevel((localpawn->y + 200) / 200);
		
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
	p->y = 240;
	p->w = BoardWidth - 600;
	p->h = 60;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	p = new Platform;
	p->x = 300;
	p->y = 60;
	p->w = BoardWidth - 600;
	p->h = 40;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	p = new Platform;
	p->x = 300;
	p->y = 120;
	p->w = BoardWidth - 600;
	p->h = 40;
	p->drawoffset = 30;
	GGame.board->AddManagedChild(p);
	GGame.board->geometry.push_back(p);
	p->InitGraphics();
	
	p = new Platform;
	p->x = 300;
	p->y = 180;
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
