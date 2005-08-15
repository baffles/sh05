// bullet.h
//  Bullet class

#ifndef BULLET_H_INLCUDED
#define BULLET_H_INCLUDED

#include "object.h"

class Bullet: public Object
{
	public: // Public variables
#ifndef DEDICATED_SERVER
		/// Sprite
		BITMAP* sprite;
#endif
		/// Speed
		int xs, ys;
		/// Pawn who sent this Bullet
		Pawn* sender;
		
	public: // Public functions
		Bullet();
		virtual ~Bullet();
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus Tick(double dtime);
		
#ifndef DEDICATED_SERVER
		void Draw(BITMAP* dest);
		
		bool InitGraphics();
#endif
};

#endif

// The end
