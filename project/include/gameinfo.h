// gameinfo.h
//  Game status information

#ifndef GAMEINFO_H_INCLUDED
#define GAMEINFO_H_INCLUDED

#include <vector>
#include "pawn.h"
#include "board.h"

class GameInfo: public GameState
{
	public: // Public variables
		std::vector<Pawn*> players;
		std::vector<Object*> objects;
		Board* board;
		
	public: // Public functions
		GameInfo();
		virtual ~GameInfo();
		
		// Debugging funtions
		void CheckValid();
		void Dump(std::ostream& str);
		
		void AddPlayer(Pawn* p);
		void AddObject(Object* o);
		void SetBoard(Board* b);
};

#endif

// The end
