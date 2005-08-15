// bullet.cpp
//  Bullet class

#include "bullet.h"
#include "board.h"
#include "abg.h"

using namespace std;

Bullet::Bullet(): Object(OF_Dynamic | OF_Interactive), id(0),
#ifndef DEDICATED_SERVER
	sprite(NULL),
#endif
	xs(0), ys(0), sender(NULL)
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
	TRACE_ASSERT(sender);
}

void Bullet::Dump(ostream& str)
{
	Object::Dump(str);
#ifndef DEDICATED_SERVER
	str << TRACE_VAR(sprite);
#endif
	str << TRACE_VAR(id) << TRACE_VAR(xs) << TRACE_VAR(ys) << " sender ";
	TRACE_PRINT_ID(str, sender);
}

EStatus Bullet::Tick(double dtime)
{
	EStatus s = Object::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	s = S_ContinueNoWait;
	
	x += xs;
	y += ys;
	
	for(vector<Pawn*>::iterator i = GGame->players.begin(); i != GGame->players.end(); i++)
	{
		//cout << "Collision detection. BX = " << x << " BY = " << y << " IX = " << (*i)->x << " IY = " << (*i)->y << " IH = " << (*i)->h << " IW = " << (*i)->w << endl;
		//cout << "Collision detection. BY = " << y << " IY = " << (*i)->y << " IH = " << (*i)->h << endl;
		// Collision detection. BX = 96 BY = 42 IX = 92 IY = 58 IH = 48 IW = 24
		//if(*i != sender && (*i)->x <= x && x < (*i)->x + (*i)->w && (*i)->y <= y && y < (*i)->y + (*i)->h)
		/*if(*i != sender &&
			(((x < (*i)->x + (*i)->w) && (x > (*i)->x)) || ((x > (*i)->x) && (x < (*i)->x + (*i)->w))) &&
			((y > (*i)->y) && (y < (*i)->y + (*i)->h)))*/
		if(*i != sender && (*i)->x <= x && x < (*i)->x + (*i)->w  &&  (*i)->y >= y && y < (*i)->y + (*i)->h)
		{
			(*i)->health -= 2;
			//cout << "hit " << (*i)->pnum << endl;
			//if(*i == game->localpawn)
			//{
				// lets be good and update our damage
				(*i)->needupdate = true;
			//}
			Finish();
			return S_Finished;
		}
	}
	
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
