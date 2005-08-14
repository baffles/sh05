// bullet.h
//  Bullet class

#ifndef BULLET_H_INLCUDED
#define BULLET_H_INCLUDED

#include "object.h"

class Bullet: public Object
{
	public: // Public variables
		/// Sprite
		BITMAP* sprite;
		/// Speed
		int xs, ys;
		
	public: // Public functions
		Bullet();
		virtual ~Bullet();
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus Tick(double dtime);
		
		void Draw(BITMAP* dest);
		
		bool InitGraphics();
};

#endif

// The end
