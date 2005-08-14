// bullet.cpp
//  Bullet class

#include "bullet.h"
#include "board.h"
#include "abg.h"

using namespace std;

Bullet::Bullet(): Object(OF_Dynamic | OF_Interactive), sprite(NULL), xs(0), ys(0)
{
}

Bullet::~Bullet()
{
}

void Bullet::CheckValid()
{
	Object::CheckValid();
	TRACE_ASSERT(sprite);
}

void Bullet::Dump(ostream& str)
{
	Object::Dump(str);
	str << TRACE_VAR(sprite) << TRACE_VAR(xs) << TRACE_VAR(ys);
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

void Bullet::Draw(BITMAP* dest)
{
	int x, y;
	GGame.board->RealToScreen(dest->w, dest->h, this->x, this->y, x, y);
	masked_blit(sprite, dest, 0, 0, x, y, sprite->w, sprite->h);
}

bool Bullet::InitGraphics()
{
	sprite = create_bitmap(8, 8);
	clear_to_color(sprite, makecol(255, 0, 255));
	putpixel(sprite, 4, 4, -1);
	return sprite;
}

// The end
