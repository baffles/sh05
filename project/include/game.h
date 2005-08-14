// game.h
//  Base game class for the main game

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "gamestate.h"
#include "pawn.h"
#include "client.h"

class Game: public GameState
{
	public: // Public static variables
		/// The local Game object
		static Game* local;
		
	public: // Public variables
		/// Pawn that the camera follows and such
		Pawn* localpawn;
		/// The Client we send messages to
		Client* client;
		/// The chat box lines
		std::string chat[4];
		
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
