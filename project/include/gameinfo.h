// gameinfo.h
//  Game status information

#ifndef GAMEINFO_H_INCLUDED
#define GAMEINFO_H_INCLUDED

#include <vector>
#include "pawn.h"
#include "board.h"

/// Possible gametypes
enum EGameType
{
	GT_FreeForAll,
	GT_Teams,
	GT_OddManOut,
	GT_OneOnOne,
	GT_SinglePlayer,
};

class GameInfo
{
	public: // Public variables
		EGameType type;
		uint32_t turn, nturns;
		uint32_t curplayerturn;
		std::vector<Pawn*> players;
		Board* board;
};

#endif

// The end
