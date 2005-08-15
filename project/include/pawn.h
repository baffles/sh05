// pawn.h
//  Player pawns

#ifndef PAWN_H_INCLUDED
#define PAWN_H_INCLUDED

#include <string>
#include "object.h"
#include "character.h"

enum { PawnHeight = 64 };
enum { PawnWidth = 24 };
enum { WalkSpeed = 2 };

enum EPawnState
{
	PS_None,
	PS_Walking,			// Bouncing happily along
	PS_Jumping,			// Going up
	PS_Falling,			// Going down
};
const char* PrintEPawnState(EPawnState s);

class Pawn: public Object
{
	public: // Public variables
		Character* instance;
		/// Player's name
		std::string name;
		/// Server-assigned number
		uint32_t pnum;
		int location;
		int score;
		int place;
		EPawnState pstate;
		EDirection face;
		EState spritestate;
		
		int sx, sy;
		int dx, dy;
		double progress;
		double timedialation;
		
		/// Amount of time Pawn has been jumping for
		double jumptime;
		/// Movement speed
		int xs;
		
	public: // Public functions
		Pawn(uint32_t pnum);
		virtual ~Pawn();
		
		/// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& l);
		
		virtual void GotoState(EPawnState news);
		
		void Move(int x, int y)
		{ this->x = sx = dx = x; this->y = sy = dy = y; }
		void MoveTo(int x, int y, double timetoarrive, bool isspeed = false);
		
		virtual EStatus Tick(double dtime);
#ifndef DEDICATED_SERVER
		virtual void Draw(BITMAP* dest);
#endif
};

#ifndef DEDICATED_SERVER
/// Local, human player
class HumanPawn: public Pawn
{
	public: // Public functions
		HumanPawn(uint32_t pnum): Pawn(pnum)
		{ }
		virtual EStatus Tick(double dtime);
};

/// Computer player
class ComputerPawn: public Pawn
{
	public: // Public variables
		double timetoreact;
		double progress;
	public: // Public functions
		ComputerPawn(uint32_t pnum): Pawn(pnum)
		{ }
		virtual void GotoState(EPawnState news);
		virtual EStatus Tick(double dtime);
};
#endif

#endif

// The end
