// pawn.h
//  Player pawns

#ifndef PAWN_H_INCLUDED
#define PAWN_H_INCLUDED

#include "object.h"
#include "character.h"

enum { PawnHeight = 64 };
enum { PawnWidth = 24 };

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
		uint32_t pnum;
		int location;
		int score;
		int place;
		EPawnState pstate;
		
		int sx, sy;
		int dx, dy;
		double progress;
		double timedialation;
		
	public: // Public functions
		Pawn(uint32_t pnum);
		virtual ~Pawn() = 0;
		
		/// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& l);
		
		virtual void GotoState(EPawnState news);
		
		void Move(int x, int y)
		{ this->x = sx = dx = x; this->y = sy = dy = y; }
		void MoveTo(int x, int y, double timetoarrive, bool isspeed = false);
		
		virtual EStatus Tick(double dtime);
		virtual void Draw(BITMAP* dest);
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
