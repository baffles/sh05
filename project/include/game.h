// game.h
//  Base game class for the main game

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gamestate.h"
#include "pawn.h"

class Game: public GameState
{
	public: // Public variables
		Pawn* localpawn;
		
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
