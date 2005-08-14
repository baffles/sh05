// board.h
//  Board class

#ifndef BOARD_H_INCLUDED
#define BOARD_H_INCLUDED

#include <vector>
#include "gamestate.h"
#include "platform.h"

enum { BoardHeight = 600 };
enum { BoardWidth = 1920 };

enum EBoardState
{
	BS_Normal,
	BS_Scrolling
};

class Board: public GameState
{
	public: // Public variables
		/// Camera X value
		int camx;
		/// Floor which the camera is on
		int camy;
		/// World y position of camera
		int _camy;
		/// List of platforms in the level
		std::vector<Platform*> geometry;
#ifndef DEDICATED_SERVER
		/// Parallax background
		BITMAP* background;
		/// Floor tile
		BITMAP* floor;
		/// Palette we're using
		PALETTE pal;
#endif
		/// State the baord is in
		EBoardState state;
		
	public: // Public functions
		Board();
		virtual ~Board();
		
		void RealToScreen(int w, int h, int inx, int iny, int& x, int& y);
		void ScrollToLevel(int newlevel);
		/// Finds the first encountered surface, returning maxdist if none
		virtual int Drop(int x, int y, int maxdist);
		
		virtual EStatus Tick(double dtime);
		
#ifndef DEDICATED_SERVER
		virtual void Draw(BITMAP* dest);
		virtual bool InitGraphics();
#endif
		
		virtual bool InitLogic();
};

#endif

// The end
