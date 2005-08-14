// platform.cpp
//  Class for platforms

#include <string>
#include "platform.h"
#include "abg.h"

using namespace std;

Platform::Platform(): Object(OF_Interactive), w(0), h(0)
{
}

Platform::~Platform()
{
}

#ifndef DEDICATED_SERVER
void Platform::Draw(BITMAP* dest)
{
	int top, left;
	GGame->board->RealToScreen(dest->w, dest->h, x, y + GGame->board->platoffset, left, top);
	if(dest->w <= left || dest->h <= top)
		return;
	int bottom = top + h, right = left + w;
	if(bottom < 0 || right < 0)
		return;
		
	if(GGame->board->platmiddle)
	{
		for(int i = 0; i * GGame->board->platmiddle->w < w; i++)
		{
			masked_blit(GGame->board->platmiddle, dest, 0, 0, i * GGame->board->platmiddle->w + left, top, MIN(GGame->board->platmiddle->w, w - (i * GGame->board->platmiddle->w)), MIN(GGame->board->platmiddle->h, h));
		}
	}
}

bool Platform::InitGraphics()
{
	return true;
}
#endif

// The end
