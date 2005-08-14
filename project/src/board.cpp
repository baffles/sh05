// board.cpp
//  Boaard clss

#include "board.h"
#include "pawn.h"
#include "abg.h"

using namespace std;

Board::Board(): camx(160), camy(1), _camy(100), background(NULL), floor(NULL), state(BS_Normal)
{
}

Board::~Board()
{
	destroy_bitmap(background);
}

void Board::RealToScreen(int w, int h, int inx, int iny, int& x, int& y)
{
	// Convert absolute to screen
	int left = camx - (w / 2);
	int top = _camy + (h / 2);
	x = inx - left;
	y = -iny + top;
}

void Board::ScrollToLevel(int newlevel)
{
	if(newlevel < 1 || newlevel > 3)
		return;
	state = BS_Scrolling;
	camy = newlevel;
}

EStatus Board::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	
	if(state == BS_Scrolling)
	{
		if(camy * 200 - 100 > _camy)
			_camy += 2;
		else if(camy * 200 - 100 < _camy)
			_camy -= 2;
		else
			state = BS_Normal;
	}
	
	return S_ContinueNoWait;
}

void Board::Draw(BITMAP* dest)
{
	if(background)
	{
		int bgx = camx / 3;
		int bgy = BoardHeight - _camy - (dest->h / 2);
		blit(background, dest, bgx, bgy, 0, 0, dest->w, dest->h);
	}
	if(floor)
	{
		int fy = -floor->h + _camy + (dest->h / 2);
		if(fy < dest->h)
		{	// Visible
			int left = (camx - (dest->w / 2)) % floor->w;
			// Blit the leftmost floor pane
			masked_blit(floor, dest, left, 0, 0, fy, floor->w - left, floor->h);
			// Blit those further right
			int i = 0;
			while(i * floor->w + (floor->w - left) < dest->w)
			{
				masked_blit(floor, dest, 0, 0, (floor->w - left) + i * floor->w, fy, floor->w, floor->h);
				i++;
			}
		}
	}
}
		
bool Board::InitLogic()
{
	return true;
}

bool Board::InitGraphics()
{
	string datadir = Ini::GetString(settings, "data", "dir", "../../media/Assets/Rendered");
	return (background = load_bitmap((datadir + "/Parallax/NightSky.bmp").c_str(), NULL)) &&
		(floor = load_bitmap((datadir + "/Scenery/Grass2.bmp").c_str(), NULL));
}


// The end
