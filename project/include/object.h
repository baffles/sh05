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
};

class Object: public GameState
{
	public: // Public variables
		/// EObjectFlags representation
		uint32_t flags;
		/// Position information
		int x, y;
		/// Type of object this object is
		int cls;
		
	public: // Public functions
		Object();
		Object(uint32_t flags);
		virtual ~Object()
		{ }
		
		// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		EStatus Tick(double dtime)
		{ return S_ContinueNoWait; }
		
		void Draw(BITMAP* dest)
		{ }
};

#endif

// The end
