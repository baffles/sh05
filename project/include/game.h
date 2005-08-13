// game.h
//  Base game class for the main game

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gamestate.h"

/*
What exactly happens in the game?
People are all on different stages, killing each other, and trying to get to the exit

Meaning:
The Board holds a bunch of objects (platforms) which are interacted with via the Pawns on the Board.
Board needs a list of child objects
Pawns are not chlidren of the Board
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
