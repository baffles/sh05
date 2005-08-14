// gamestate.h
//  Base class for Game States

#ifndef GAMESTATE_H_INCLUDED
#define GAMESTATE_H_INCLUDED

#include <map>
#include <list>
#include <iostream>
#ifndef DEDICATED_SERVER
#	include <allegro.h>
#else
#	define GFX_AUTODETECT 0
#	define GFX_AUTODETECT_WINDOWED 0
#	define END_OF_MAIN()
//#	define BITMAP void
#	define destroy_bitmap(b)
#	define load_bitmap(f, p) (void*) 1
	typedef int PALETTE[256];
#endif
#include "debug.h"
#include "plat.h"

class Pawn;
class GameState;

/// Minimum dtime in seconds
#define MIN_DTIME ((double) 1 / 60)
/// Rate that Textboxes write text. In characters/second
enum { TypingRate = 20 };

/// Return codes for states
enum EStatus
{
	S_Continue,			// Continue normally
	S_ContinueNoWait,	// Continue normally but don't count this object as running
	S_Wait,				// This state is in a wait state
	S_Finished,			// Done with the state
	S_Abort,			// Break out of a wait
};
const char* PrintEStatus(EStatus s);

enum EGameState
{
	GS_Normal,
	GS_Waiting,
	GS_Sleeping,
	GS_Finished,
	GS_Destroy
};
const char* PrintEGameState(EGameState s);

enum ETextboxMode
{
	TM_Transparent,
	TM_Filled
};

enum EUpdateMode
{
	UM_None,
	UM_TripleBuffer,
	UM_PageFlip,
	UM_SystemBuffer,
	UM_DoubleBuffer,
	UM_TripleBufferWMB,
	UM_PageFlipWMB
};

class StateRef
{
	public: // Public variables
		GameState* ref;
		
	public: // Public functions
		StateRef(GameState* ref);
		bool operator <(GameState* r);
		GameState* operator ->();
		GameState* operator *();
		operator GameState*();
};

/// A screen mode.
class GameState
{
	public: // Public static variables
		/// The state that gets drawn
		static GameState* rootstate;
		/// State that will replace rootstate
		static GameState* nextstate;
		/// All states
		static std::list<GameState*> states;
		static TimeType now;
#		ifdef TRACE_IDENTITY
			static std::map<const char*, int32_t>* trace_curid;
			static bool trace_initialized;
#		endif

	private: // Private static variables
		static int curpage;
		static EUpdateMode updmode;
#ifndef DEDICATED_SERVER
		static BITMAP *pages[3];
		static BITMAP* active_page;
		static BITMAP* buffer;
#endif
		
	public: // Public static functions
#ifndef DEDICATED_SERVER
		/// Initialize the graphics system
		/// @param umode Screen update mode to attempt to use.
		/// @param windowed whether or not to run the game in a window. Ignored if mode != GFX_AUTODETECT
		/// @param screenw Width of the screen, in pixels
		/// @param screenh Height of the screen, in pixels
		/// @param depth Color depth of the screen, in bits per pixel
		/// @param mode Screen mode to use
		static bool StaticInitGraphics(EUpdateMode umode = UM_TripleBufferWMB, bool windowed = true, uint32_t screenw = 800, uint32_t screenh = 600, uint32_t depth = 32, int mode = GFX_AUTODETECT);
		/// Shut down the graphics system
		static void StaticDestroyGraphics();
#endif
		/// Runs through the states, ticking them
		static void Run();
		/// Ticks the states one time only.
		/// @param dtime Is set to the amount of time elapsed
		/// @return The value of the tick
		static EStatus TickAllOnce(double& dtime);
		/// Replace the current state with the given one
		static void ExecManaged(GameState* state);
		/// Replace the current state with the given one that will not be deleted automatically.
		static void ExecUnmanaged(GameState* state);
		/// Add a root state that will NOT be deleted automatically
		static void AddRoot(GameState* state);
		/// Add a root state that will be deleted when done
		static void AddManagedRoot(GameState* state);
		/// Remove a root state from the list manually.
		/// @param state State to remove.
		/// @returns true if the child was successfully found, false otherwise.
		static bool RemoveRoot(GameState* state);

	private: // Private static functions
		/// Get the current surface
#ifndef DEDICATED_SERVER
		static BITMAP* StaticGetScreenBitmap();
		/// Refresh the screen
		static void StaticUpdateScreen();
#endif
		
	public: // Public variables
		/// Higher values of this will be drawn and ticked later.
		int zorder;
		EGameState state;
		/// Whether or not to destroy the state when it reports itself as done.
		bool destroyself;
		/// States that are ticked and drawn with this one.
		std::list<StateRef> children;
		/// I'm not too sure where this is actually used.
		GameState* parent;
#		ifdef TRACE_IDENTITY
			int32_t trace_id;
#		endif
		
	public: // Public functions
		GameState();
		virtual ~GameState() = 0;
		
		// Debugging functions
		friend std::ostream& operator <<(std::ostream& l, GameState* r);
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		/// Add a child that will NOT be deleted automatically
		void AddChild(GameState* state);
		/// Add a child that will be deleted when done
		void AddManagedChild(GameState* state);
		/// Remove a child from the list manually.
		/// @param state Child to remove.
		/// @returns true if the child was successfully found, false otherwise.
		bool RemoveChild(GameState* state);
		/// Delete all existing children
		void ClearChildren();
		/// Ticks the game one time only.
		/// @param dtime Is set to the amount of time elapsed
		/// @return The value of the tick
#ifndef DEDICATED_SERVER
		EStatus DoTickOnce(double& dtime);
#endif
		/// Wait for the children states to finish for time seconds.
		/// @param time Number of seconds to wait for. <0 means no limit.
		/// @return true if the wait finished successfully, false otherwise
		bool WaitChildren(double time = -1);
		/// Waits for time seconds.
		/// @param time Number of seconds to wait for.
		/// @return true if the wait finished successfully, false otherwise
		bool Sleep(double time);
		/// Mark this state as finished. It won't be ticked any more, and states waiting on it will resume.
		/// @param deleteme If true, the object will not be remove from te children list (i.e. not drawn)
		void Finish(bool deleteme = true);
		
		virtual bool InitLogic()
		{ return true; }
		virtual bool InitGraphics()
		{ return true; }
		
		virtual EStatus Tick(double dtime);
#ifndef DEDICATED_SERVER
		virtual void Draw(BITMAP* dest);
#endif
		
	private: // Private functions
};

class SubStateText: public GameState
{
	public: // Public variables
		std::string text;
		uint32_t len;
		double tnl;
		char* buffer;
		uint32_t pos;
		uint32_t lastword;
		uint32_t thisline;
		bool waitonme;
		int x, y, w, h;
		ETextboxMode mode;
		
	public: // Public functions
		SubStateText(const char* text, int x, int y, int w, int h, ETextboxMode mode = TM_Transparent, bool waitonme = false);
		virtual ~SubStateText();
		
		/// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		void SetText(const char* text);
		
		virtual EStatus Tick(double dtime);
#ifndef DEDICATED_SERVER
		virtual void Draw(BITMAP* dest);
#endif
};

/// Waits while moving a pawn to the given point and deletes itself when done.
class SubStateWalkPawn: public GameState
{
	public: // Public variables
		Pawn* p;
		double timetoarrive;
		
	public: // Public functions
		SubStateWalkPawn(Pawn* p, int x, int y, double timetoarrive, bool isspeed = false);
		
		/// Debugging functions
		virtual void CheckValid();
		virtual void Dump(std::ostream& str);
		
		virtual EStatus Tick(double dtime);
};

#endif

// The end
