// pawn.h
//  Player pawns

#ifndef PAWN_H_INCLUDED
#define PAWN_H_INCLUDED

#include "gamestate.h"
#include "character.h"

/// Pawn size
enum { PawnSize = 64 };

enum EPawnState
{
	PS_None,
	PS_Walking,			// Bouncing happily along
	PS_Rolling,			// Need to jump sometime
	PS_RollingInAir,	// Watch for when to stop the block
};
const char* PrintEPawnState(EPawnState s);

class Pawn: public GameState
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
		int x, y;
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

/// Local, human player
class HumanPawn: public Pawn
{
	public: // Public functions
		HumanPawn(uint32_t pnum): Pawn(pnum)
		{ }
		virtual void GotoState(EPawnState news);
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

// The end
