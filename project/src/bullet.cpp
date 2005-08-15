// bullet.cpp
//  Bullet class

#include "bullet.h"
#include "board.h"
#include "abg.h"

using namespace std;

Bullet::Bullet(): Object(OF_Dynamic | OF_Interactive),
#ifndef DEDICATED_SERVER
	sprite(NULL),
#endif
	xs(0), ys(0)
{
}

Bullet::~Bullet()
{
}

void Bullet::CheckValid()
{
	Object::CheckValid();
#ifndef DEDICATED_SERVER
	TRACE_ASSERT(sprite);
#endif
}

void Bullet::Dump(ostream& str)
{
	Object::Dump(str);
#ifndef DEDICATED_SERVER
	str << TRACE_VAR(sprite);
#endif
	str << TRACE_VAR(xs) << TRACE_VAR(ys);
}

EStatus Bullet::Tick(double dtime)
{
	EStatus s = Object::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	x += xs;
	y += ys;
	
	if(x < 0 || x > BoardWidth || y < 0 || y > BoardHeight)
	{
		Finish();
		return S_Finished;
	}
	
	return s;
}

#ifndef DEDICATED_SERVER
void Bullet::Draw(BITMAP* dest)
{
	int x, y;
	GGame->board->RealToScreen(dest->w, dest->h, this->x, this->y, x, y);
	masked_blit(sprite, dest, 0, 0, x, y, sprite->w, sprite->h);
}

bool Bullet::InitGraphics()
{
	sprite = create_bitmap(8, 8);
	clear_to_color(sprite, makecol(255, 0, 255));
	putpixel(sprite, 4, 4, -1);
	return sprite;
}
#endif

// The end
