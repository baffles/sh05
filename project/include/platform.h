// platform.h
//  Class describing a platform

#ifndef PLATFORM_H_INCLUDED
#define PLATFORM_H_INCLUDED

#include "object.h"

class Platform: public Object
{
	public: // Public variables
		/// Size information
		int w, h;
		
	public: // Public functions
		Platform();
		virtual ~Platform();
		
#ifndef DEDICATED_SERVER
		void Draw(BITMAP* dest);
		
		bool InitGraphics();
#endif
};

#endif

// The end
