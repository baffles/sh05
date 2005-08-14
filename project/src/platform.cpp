// platform.cpp
//  Class for platforms

#include <string>
#include "platform.h"
#include "abg.h"

using namespace std;

Platform::Platform(): Object(OF_Interactive), left(NULL), middle(NULL), right(NULL), w(0), h(0), drawoffset(0)
{
}

Platform::~Platform()
{
	destroy_bitmap(left);
	destroy_bitmap(middle);
	destroy_bitmap(right);
}

#ifndef DEDICATED_SERVER
void Platform::Draw(BITMAP* dest)
{
	int top, left;
	GGame.board->RealToScreen(dest->w, dest->h, x, y + drawoffset, left, top);
	if(dest->w <= left || dest->h <= top)
		return;
	int bottom = top + h, right = left + w;
	if(bottom < 0 || right < 0)
		return;
		
	if(middle)
	{
		for(int i = 0; i * middle->w < w; i++)
		{
			masked_blit(middle, dest, 0, 0, i * middle->w + left, top, MIN(middle->w, w - (i * middle->w)), MIN(middle->h, h));
		}
	}
}

bool Platform::InitGraphics()
{
	string datadir = Ini::GetString(settings, "data", "dir", "../../media/Assets/Rendered");
	return (middle = load_bitmap((datadir + "/Scenery/Grass2.bmp").c_str(), NULL));
}
#endif

// The end
