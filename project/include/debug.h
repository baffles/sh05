// debug.h
//  Debugging macros

// TRACE_FULL: Track IDs, check validity, follow creation and destruction, follow ticks
// TRACE_PARTIAL: Track IDs, check validity, follow creation and destruction
// TRACE_VALIDITY: Track IDs, check validity
// TRACE_IDENTITY: Track IDs

#ifdef TRACE_FULL
#	ifndef TRACE_VALIDITY
#		define TRACE_VALIDITY
#	endif
#	ifndef TRACE_IDENTITY
#		define TRACE_IDENTITY
#	endif
#	ifndef TRACE_PARTIAL
#		define TRACE_PARTIAL
#	endif
#	define TRACE_TICK(tstate) \
		TRACE_PRINT_INDENT(cout, tstate); cout << "Ticking "; TRACE_PRINT_ID(cout, tstate); cout << endl;
#else
#	define TRACE_TICK(tstate)
#endif

#ifdef TRACE_PARTIAL
#	ifndef TRACE_VALIDITY
#		define TRACE_VALIDITY
#	endif
#	ifndef TRACE_IDENTITY
#		define TRACE_IDENTITY
#	endif
#endif

#ifdef TRACE_VALIDITY
#	ifndef TRACE_IDENTITY
#		define TRACE_IDENTITY
#	endif
#	define TRACE_VALID(tstate) \
		(tstate)->CheckValid()
#	define TRACE_ASSERT(stmt) \
		{if(!(stmt)) { \
			cout << "Invalid! " #stmt << endl; cout << __FILE__ "(" << __LINE__ << "): " << __FUNCTION__ << endl; DEBUG_BREAK(); \
		}}
			
#else
#	define TRACE_VALID(tstate)
#	define TRACE_ASSERT(stmt)
#endif

#ifdef TRACE_IDENTITY
#	define TRACE_INITIALIZE() \
		{if(!GameState::trace_initialized) { \
			GameState::trace_curid = new map<const char*, int32_t>; GameState::trace_initialized = true; \
		} }
#	define TRACE_END() \
		{if(GameState::trace_initialized) { \
			delete GameState::trace_curid; GameState::trace_curid = NULL; GameState::trace_initialized = false; \
		}}
#	define TRACE_PRINT_ID(str, tstate) \
		{if(!(tstate)) str << "NULL"; else str << typeid(*(tstate)).name() << " " << (tstate)->trace_id << " (" << (void*) (tstate) << ")";}

// Only print indents if following ticks
#	ifdef TRACE_FULL
#		define TRACE_PRINT_INDENT(str, tstate) \
			{for(GameState* _trace_indent = (tstate)->parent; _trace_indent; _trace_indent = _trace_indent->parent) str << "    ";}
#	else
#		define TRACE_PRINT_INDENT(str, tstate)
#	endif

// Print notifications of creation and destruction if necessary
#	define _TRACE_INIT_STATE(tstate) \
			{if(!(tstate)->trace_id) { \
			TRACE_INITIALIZE(); \
			(tstate)->trace_id = (*trace_curid)[typeid(*(tstate)).name()] + 1; \
			(*trace_curid)[typeid(*(tstate)).name()] = (tstate)->trace_id; \
			}}
#	define _TRACE_END_STATE(tstate) \
			(tstate)->trace_id = 0
#	ifdef TRACE_PARTIAL
#		define TRACE_INIT_STATE(tstate) \
			{if(!(tstate)->trace_id) { \
			_TRACE_INIT_STATE(tstate); \
			TRACE_PRINT_INDENT(cout, tstate); cout << "Adding " << (tstate) << endl; \
			}}
#		define TRACE_END_STATE(tstate) \
			{if((tstate)->trace_id) { \
			TRACE_PRINT_INDENT(cout, tstate); cout << "Destroying " << (tstate) << endl; \
			_TRACE_END_STATE(tstate); }}
#	else
#		define TRACE_INIT_STATE(tstate) _TRACE_INIT_STATE(tstate)
#		define TRACE_END_STATE(tstate) _TRACE_END_STATE(tstate)
#	endif
#else
#	define TRACE_INITIALIZE()
#	define TRACE_PRINT_INDENT(str, tstate)
#	define TRACE_PRINT_ID(str, tstate)
#	define TRACE_INIT_STATE(tstate)
#	define TRACE_END_STATE(tstate)
#	define TRACE_END()
#endif

#define TRACE_VAR(var) \
	" " #var " " << (var)

// The end
