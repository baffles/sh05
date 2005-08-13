// game.h
//  Base game class for the main game

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gamestate.h"

/*
Goals for when I get home: add floor support and platform support, then begin on the other object support
*/

class Game: public GameState
{
	public: // Public functions
		Game();
		virtual ~Game();
		
		virtual EStatus Tick(double dtime);
		
		virtual void Draw(BITMAP* dest);
		
		virtual bool InitLogic();
		virtual bool InitGraphics();
};

#endif

// The end
