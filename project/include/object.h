// object.h
//  Base object class

#ifndef OBJECT_H_INCLUDED
#define OBJECT_H_INCLUDED

#include "gamestate.h"

enum EObjectFlags
{
	OF_Unimportant	= 0x00000001, // Is not necessary to gameplay (i.e. a decoration)
	OF_Dynamic		= 0x00000002, // Needs to be updated during gameplay
	OF_Interactive	= 0x00000004, // Has the capacity to collide
	OF_Physical		= 0x00000008, // Is affected by gravity
};

enum EPhysicsState
{
	PHYS_Normal,
	PHYS_Falling
};
const char* PrintEPhysicsState(EPhysicsState s);

enum { SpeedOfGravity = 10 };

class Object: public GameState
{
	public: // Public variables
		/// EObjectFlags representation
		uint32_t flags;
		/// Position information
		int x, y;
		/// Size information
		int w, h;
		/// Type of object this object is
		int cls;
		/// Speed at which the object is falling presently
		double fallspeed;
		/// EPhysicsState representation
		EPhysicsState physstate;
		
	public: // Public functions
		Object();
		Object(uint32_t flags);
		virtual ~Object()
		{ }
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus Tick(double dtime);
		
#ifndef DEDICATED_SERVER
		void Draw(BITMAP* dest)
		{ }
#endif
};

#endif

// The end
