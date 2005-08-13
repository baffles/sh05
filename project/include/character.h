// character.h
//  Characters!!!

#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include <vector>
#include <allegro.h>
#include "plat.h"
#include "gamestate.h"

#define ADD_CHARACTER(char) \
	char* The##char = new char

enum EDirection
{
	D_Down, D_Up, D_Left, D_Right,
	D_DownLeft, D_DownRight, D_UpLeft, D_UpRight
};

enum EState
{
	S_Standing, S_Walking, S_Jumping
};
	
class Character
{
	public: // Public static variables
		static std::vector<Character*>* chars;
		static bool initialized;
		
	public: // Public static functions
		static void Initialize();
		static void RegisterCharacter(Character* c);
		static void StaticInitGraphics();
		static void StaticDestroy();
		static Character* GetByName(const char* name);
		
	public: // Public variables
		bool playable;
		const char* name;
		const char* flavor;
		uint32_t id;
		
		EDirection dir;
		EState state;
		double progress;
		double animphase;
		double timedialation;
		
	public: // Public functions
		Character();
		virtual ~Character()
		{ }
		
		virtual bool InitGraphics()
		{ return true; }
		
		virtual void DrawPortrait(BITMAP* dest, int x, int y, int w, int h) = 0;
		
		virtual void DrawSelf(BITMAP* dest, int x, int y, int w, int h) = 0;
		
		void StandardStates(BITMAP* dest, int x, int y, int w, int h, BITMAP* frame);
		
		virtual EStatus Tick(double dtime);
		virtual void Animate(EState animation, double timetoarrive);
		virtual void Face(EDirection newdir);
};

#endif

// The end