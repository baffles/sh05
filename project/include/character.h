// character.h
//  Characters!!!

#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <vector>
#include <string>
#ifndef DEDICATED_SERVER
#	include <allegro.h>
#endif
#include "plat.h"
#include "gamestate.h"

enum EDirection
{
	D_Left, D_Right
};

enum EState
{
	S_Standing, S_Walking, S_Jumping
};

class Character
{
	public: // Public static variables
		static std::vector<Character*> chars;
		
	public: // Public static functions
		static void StaticDestroy();
		static Character* GetByName(const std::string& name);
		
	public: // Public variables
		std::string name;
		
#ifndef DEDICATED_SERVER
		BITMAP* sprite;
		std::vector<BITMAP*> rightwalk;
		std::vector<BITMAP*> leftwalk;
		std::vector<BITMAP*> rightjump;
		std::vector<BITMAP*> leftjump;
#endif
		
	public: // Public functions
		Character();
		virtual ~Character();
		
		virtual bool InitGraphics();

#ifndef DEDICATED_SERVER
		virtual BITMAP* GetFrame(EDirection dir, EState state, int frame);
#endif
};

#endif

// The end
