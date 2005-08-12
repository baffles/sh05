// board.h
//  Board class

#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <vector>
#include "gamestate.h"

class Board: public GameState
{
	public: // Public variables
		int camx, camy;
		/// Pawn to follow
		Pawn* follow;
		
	public: // Public functions
		Board();
		virtual ~Board()
		{ }
		
		void RealToScreen(int w, int h, int inx, int iny, int& x, int& y);
		
		virtual EStatus Tick(double dtime);
		
		virtual void DrawPortrait(BITMAP* dest, int x, int y, int w, int h) = 0;
		virtual void Draw(BITMAP* dest) = 0;
		virtual void GetPossibleMoves(uint32_t snum, std::vector<uint32_t>& possible) = 0;
		virtual void GetLocationOfSquare(uint32_t snum, int& x, int& y) = 0;
};

#endif

// The end
