// gamestate.cpp
//  Base class for Game States

#include "gamestate.h"
#include "pawn.h"
#include "abg.h"

using namespace std;

const char* PrintEStatus(EStatus s)
{
#	define PRINT_ES(s) case s: return #s
	switch(s)
	{
		PRINT_ES(S_Continue);
		PRINT_ES(S_ContinueNoWait);
		PRINT_ES(S_Wait);
		PRINT_ES(S_Finished);
		PRINT_ES(S_Abort);
		default: return "Unknown";
	}
#	undef PRINT_ES
}

const char* PrintEGameState(EGameState s)
{
#	define PRINT_EGS(s) case s: return #s
	switch(s)
	{
		PRINT_EGS(GS_Normal);
		PRINT_EGS(GS_Waiting);
		PRINT_EGS(GS_Finished);
		PRINT_EGS(GS_Destroy);
		default: return "Unknown";
	}
#	undef PRINT_EGS
}

GameState* GameState::rootstate = NULL;
GameState* GameState::nextstate;
list<GameState*> GameState::states;
TimeType GameState::now;
#ifdef TRACE_IDENTITY
	map<const char*, int32_t>* GameState::trace_curid = NULL;
	bool GameState::trace_initialized = false;
#endif

#ifndef DEDICATED_SERVER
int GameState::curpage = 0;
BITMAP* GameState::pages[3] = { NULL, NULL, NULL };
BITMAP* GameState::buffer = NULL;
BITMAP* GameState::active_page = NULL;
EUpdateMode GameState::updmode = UM_None;
#endif

StateRef::StateRef(GameState* ref): ref(ref)
{
}

bool StateRef::operator <(GameState* r)
{
	return ref->zorder < r->zorder;
}

GameState* StateRef::operator ->()
{
	return ref;
}

GameState* StateRef::operator *()
{
	return ref;
}

StateRef::operator GameState*()
{
	return ref;
}

#ifndef DEDICATED_SERVER
bool GameState::StaticInitGraphics(EUpdateMode umode, bool windowed, uint32_t screenw, uint32_t screenh, uint32_t depth, int mode)
{
	set_color_depth(depth);
	set_gfx_mode(windowed && mode == GFX_AUTODETECT ? GFX_AUTODETECT_WINDOWED : mode, screenw, screenh, 0, 0);
	set_display_switch_mode(SWITCH_BACKGROUND);

	if(updmode != UM_None) return false;
	
	switch(umode)
	{
		case UM_TripleBufferWMB:
			if(!(gfx_capabilities & GFX_CAN_TRIPLE_BUFFER))
				enable_triple_buffer();

			if(gfx_capabilities & GFX_CAN_TRIPLE_BUFFER)
			{
				pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
				pages[1] = create_video_bitmap(SCREEN_W, SCREEN_H);
				pages[2] = create_video_bitmap(SCREEN_W, SCREEN_H);
				if(pages[0] && pages[1] && pages[2])
				{
					clear_bitmap(pages[0]);
					clear_bitmap(pages[1]);
					clear_bitmap(pages[2]);
					active_page = pages[0];
					buffer = create_bitmap(SCREEN_W, SCREEN_H);
					show_video_bitmap(pages[2]);
					updmode = UM_TripleBufferWMB;
					return true;
				}
				destroy_bitmap(pages[0]);
				pages[0] = NULL;
				destroy_bitmap(pages[1]);
				pages[1] = NULL;
				destroy_bitmap(pages[2]);
				pages[2] = NULL;
			}
			cout << "Failed at triple buffer + memory buffer" << endl;
		// fall through if triple buffering isn't supported
			
		case UM_PageFlipWMB:
			pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
			pages[1] = create_video_bitmap(SCREEN_W, SCREEN_H);
			if(pages[0] && pages[1])
			{
				clear_bitmap(pages[0]);
				clear_bitmap(pages[1]);
				active_page = pages[0];
				buffer = create_bitmap(SCREEN_W, SCREEN_H);
				show_video_bitmap(pages[1]);
				updmode = UM_PageFlipWMB;
				return true;
			}
			destroy_bitmap(pages[0]);
			pages[0] = NULL;
			destroy_bitmap(pages[1]);
			pages[1] = NULL;
			umode = UM_SystemBuffer;
			cout << "Failed at page flipping + memory buffer" << endl;
		// fall through if page flipping isn't supported
		
		default: break;
	}
	
	switch(umode)
	{
		case UM_TripleBuffer:
			if(!(gfx_capabilities & GFX_CAN_TRIPLE_BUFFER))
				enable_triple_buffer();

			if(gfx_capabilities & GFX_CAN_TRIPLE_BUFFER)
			{
				pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
				pages[1] = create_video_bitmap(SCREEN_W, SCREEN_H);
				pages[2] = create_video_bitmap(SCREEN_W, SCREEN_H);
				if(pages[0] && pages[1] && pages[2])
				{
					clear_bitmap(pages[0]);
					clear_bitmap(pages[1]);
					clear_bitmap(pages[2]);
					active_page = buffer = pages[0];
					show_video_bitmap(pages[2]);
					updmode = UM_TripleBuffer;
					return true;
				}
				destroy_bitmap(pages[0]);
				pages[0] = NULL;
				destroy_bitmap(pages[1]);
				pages[1] = NULL;
				destroy_bitmap(pages[2]);
				pages[2] = NULL;
			}
			cout << "Failed at triple buffer" << endl;
		// fall through if triple buffering isn't supported
			
		case UM_PageFlip:
			pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
			pages[1] = create_video_bitmap(SCREEN_W, SCREEN_H);
			if(pages[0] && pages[1])
			{
				clear_bitmap(pages[0]);
				clear_bitmap(pages[1]);
				active_page = buffer = pages[0];
				show_video_bitmap(pages[1]);
				updmode = UM_PageFlip;
				return true;
			}
			destroy_bitmap(pages[0]);
			pages[0] = NULL;
			destroy_bitmap(pages[1]);
			pages[1] = NULL;
			cout << "Failed at page flipping" << endl;
		// fall through if page flipping isn't supported
			
		case UM_SystemBuffer:
			buffer = create_system_bitmap(SCREEN_W, SCREEN_H);
			pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
			if(buffer && pages[0])
			{
				clear_bitmap(buffer);
				clear_bitmap(pages[0]);
				show_video_bitmap(pages[0]);
				updmode = UM_SystemBuffer;
				return true;
			}
			destroy_bitmap(pages[0]);
			pages[0] = NULL;
			destroy_bitmap(buffer);
			buffer = NULL;
			cout << "Failed at system buffering" << endl;
		// fall through if system buffering isn't supported
			
		case UM_DoubleBuffer:
			buffer = create_bitmap(SCREEN_W, SCREEN_H);
			pages[0] = create_video_bitmap(SCREEN_W, SCREEN_H);
			if(buffer && pages[0])
			{
				clear_bitmap(buffer);
				clear_bitmap(pages[0]);
				show_video_bitmap(pages[0]);
				updmode = UM_DoubleBuffer;
				return true;
			}
			destroy_bitmap(pages[0]);
			pages[0] = NULL;
			destroy_bitmap(buffer);
			buffer = NULL;
			cout << "Failed at double buffering" << endl;
		// fall through if double buffering isn't supported
			
		default:
			// if there's been a total failure to set an update method ( personally, I think that's impossible),
			// returns the default value of updatemethod, which is NOUPDATEMETHOD. The user can check for
			// (!initialize_screen_updating()) and act accordingly. Wonder what he'd do ...
			return false;
	}
}

void GameState::StaticDestroyGraphics()
{
	// just in case. Buffer is always either a memory bitmap, or equal to active_page.
	// active_page always points to video memory (an element of page[]) or nothing.
	if(is_memory_bitmap(buffer))
		destroy_bitmap(buffer);
	buffer = NULL;
	
	active_page = NULL;
	
	destroy_bitmap(pages[0]);
	pages[0] = NULL;
	destroy_bitmap(pages[1]);
	pages[1] = NULL;
	destroy_bitmap(pages[2]);
	pages[2] = NULL;
	
	updmode = UM_None;
}
#endif

void GameState::Run()
{
	double dtime = 0;
	now = GetNow();
	
	rootstate->Tick(dtime);
	while(states.size())
	{
		EStatus s = TickAllOnce(dtime);
		if(s == S_Abort || s == S_Finished)
			break;
	}
	for(list<GameState*>::iterator i = states.begin(); i != states.end(); i++)
	{
		if((*i)->destroyself)
		{
			TRACE_END_STATE(*i);
			delete *i;
		}
	}
	states.clear();
}

EStatus GameState::TickAllOnce(double& dtime)
{
	TimeType then = now;
	now = GetDiff(then, dtime);
	while(dtime < MIN_DTIME)
	{
		::Sleep((uint32_t) ((MIN_DTIME - dtime) * 1000));
		now = GetDiff(then, dtime);
	}
	GlobalTick(dtime);
	list<GameState*>::iterator i = states.begin();
	while(i != states.end())
	{
		EStatus s = (*i)->Tick(dtime);
		switch(s)
		{
			case S_Finished:
				if((*i)->state == GS_Destroy)
				{
					if(*i == rootstate)
					{
						if(nextstate)
						{
							if(nextstate->InitGraphics() && nextstate->InitLogic())
							{
								states.push_back(nextstate);
								rootstate = nextstate;
								nextstate = NULL;
							}
							else
							{
								TRACE_END_STATE(nextstate);
								delete nextstate;
								nextstate = NULL;
							}
						}
						else
							return S_Finished;
						
					}
					if((*i)->destroyself)
					{
						TRACE_END_STATE(*i);
						delete *i;
					}
					i = states.erase(i);
					continue;
				}
				break;
			case S_Abort:
				cout << "Globally aborting due to " << *i << endl;
				return S_Abort;
			case S_ContinueNoWait:
			case S_Continue:
			case S_Wait:
				break;
		}
		i++;
	}
#ifndef DEDICATED_SERVER
	BITMAP* p = StaticGetScreenBitmap();
	rootstate->Draw(p);
	StaticUpdateScreen();
#endif
	
	return S_Continue;
}

void GameState::ExecManaged(GameState* state)
{
	rootstate->state = GS_Destroy;
	nextstate = state;
	state->parent = NULL;
	state->destroyself = true;
}

void GameState::ExecUnmanaged(GameState* state)
{
	rootstate->state = GS_Destroy;
	nextstate = state;
	state->parent = NULL;
	state->destroyself = false;
}

void GameState::AddRoot(GameState* state)
{
	state->parent = NULL;
	TRACE_INIT_STATE(state);
	states.push_back(state);
}

void GameState::AddManagedRoot(GameState* state)
{
	state->parent = NULL;
	TRACE_INIT_STATE(state);
	states.push_back(state);
	state->destroyself = true;
}

bool GameState::RemoveRoot(GameState* state)
{
	for(list<GameState*>::iterator i = states.begin(); i != states.end(); i++)
	{
		if(state == *i)
		{
			if(state->destroyself)
			{
				TRACE_END_STATE(state);
				delete state;
			}
			states.erase(i);
			if(rootstate == state)
				rootstate = states.back();
			return true;
		}
	}
	return false;
}

#ifndef DEDICATED_SERVER
BITMAP* GameState::StaticGetScreenBitmap()
{
	return buffer;
}
#endif

#ifndef DEDICATED_SERVER
void GameState::StaticUpdateScreen()
{
	switch(updmode)
	{
		case UM_TripleBufferWMB:
			blit(buffer, active_page, 0, 0, 0, 0, buffer->w, buffer->h);
			while(poll_scroll());
			request_video_bitmap(active_page);
			
			if(active_page == pages[0])
				active_page = pages[1];
			else if(active_page == pages[1])
				active_page = pages[2];
			else
				active_page = pages[0];
			return;
		
		case UM_PageFlipWMB:
			blit(buffer, active_page, 0, 0, 0, 0, buffer->w, buffer->h);
			show_video_bitmap(active_page);
			buffer = active_page = (active_page == pages[0] ? pages[1] : pages[0]);
			return;
		
		case UM_TripleBuffer:
			while(poll_scroll());
			request_video_bitmap(active_page);
			
			if(active_page == pages[0])
				active_page = pages[1];
			else if(active_page == pages[1])
				active_page = pages[2];
			else
				active_page = pages[0];
			
			buffer = active_page;
			return;
		
		case UM_PageFlip:
			show_video_bitmap(active_page);
			buffer = active_page = (active_page == pages[0] ? pages[1] : pages[0]);
			return;
			
		case UM_SystemBuffer:
			//if(waitforvsync) vsync();
			blit(buffer, pages[0], 0, 0, 0, 0, buffer->w, buffer->h);
			return;
			
		case UM_DoubleBuffer:
			//if(waitforvsync) vsync();
			blit(buffer, pages[0], 0, 0, 0, 0, buffer->w, buffer->h);
			return;
			
		default:
			return;
	}
}
#endif

GameState::GameState(): zorder(0), state(GS_Normal), destroyself(false), parent(NULL)
#ifdef TRACE_IDENTITY
	, trace_id(0)
#endif
{
}

GameState::~GameState()
{
	for(list<StateRef>::iterator i = children.begin(); i != children.end(); i++)
	{
		if((*i)->destroyself)
		{
			TRACE_END_STATE(*i);
			delete *i;
		}
	}
	TRACE_END_STATE(this);
}

ostream& operator <<(ostream& str, GameState* r)
{
	r->Dump(str);
	return str;
}

void GameState::CheckValid()
{
}

void GameState::Dump(ostream& str)
{
	TRACE_PRINT_ID(str, this);
	str << TRACE_VAR(zorder) << " state "<< PrintEGameState(state) << TRACE_VAR(destroyself)
		<< TRACE_VAR(children.size()) << " parent ";
	TRACE_PRINT_ID(str, parent);
}

void GameState::AddChild(GameState* state)
{
	TRACE_INIT_STATE(this);
	state->parent = this;
	TRACE_INIT_STATE(state);
	children.push_back(state);
}

void GameState::AddManagedChild(GameState* state)
{
	TRACE_INIT_STATE(this);
	state->parent = this;
	TRACE_INIT_STATE(state);
	children.push_back(state);
	state->destroyself = true;
}

bool GameState::RemoveChild(GameState* state)
{
	for(list<StateRef>::iterator i = children.begin(); i != children.end(); i++)
	{
		if(state == *i)
		{
			if(state->destroyself)
			{
				TRACE_END_STATE(state);
				delete state;
			}
			children.erase(i);
			return true;
		}
	}
	return false;
}

void GameState::ClearChildren()
{
	for(list<StateRef>::iterator i = children.begin(); i != children.end(); i++)
	{
		if((*i)->destroyself)
		{
			TRACE_END_STATE(*i);
			delete *i;
		}
	}
	children.clear();
}

#ifndef DEDICATED_SERVER
EStatus GameState::DoTickOnce(double& dtime)
{
	TimeType then = now;
	now = GetDiff(now, dtime);
	if(dtime < MIN_DTIME)
	{
		::Sleep((uint32_t) ((MIN_DTIME - dtime) * 1000));
		now = GetDiff(then, dtime);
	}
	GlobalTick(dtime);
	EStatus s = Tick(dtime);
	if(s == S_Abort)
		return S_Abort;
	BITMAP* p = StaticGetScreenBitmap();
	Draw(p);
	StaticUpdateScreen();
	return s;
}
#endif

bool GameState::WaitChildren(double time)
{
	TRACE_INIT_STATE(this);
	children.sort();
	state = GS_Waiting;
	double total = 0;
	double dtime;
	do
	{
		EStatus s = TickAllOnce(dtime);
		total += dtime;
		if(s == S_Abort)
			return false;
	}
	while(state == GS_Waiting && (children.size() && (time < 0 || total <= time)));
	
	return true;
}

bool GameState::Sleep(double time)
{
	TRACE_INIT_STATE(this);
	children.sort();
	state = GS_Sleeping;
	double total = 0;
	double dtime;
	do
	{
		EStatus s = TickAllOnce(dtime);
		total += dtime;
		if(s == S_Abort)
			return false;
	}
	while(total <= time);
	
	state = GS_Normal;
	return true;
}

void GameState::Finish(bool deleteme)
{
	if(deleteme)
	{
		TRACE_END_STATE(this);
		state = GS_Destroy;
	}
	else state = GS_Finished;
}

EStatus GameState::Tick(double dtime)
{
	TRACE_INIT_STATE(this);
	TRACE_VALID(this);
	int nrunning = 0;
	list<StateRef>::iterator i = children.begin();
	while(i != children.end())
	{
		EStatus s = (*i)->Tick(dtime);
		switch(s)
		{
			case S_Finished:
				if((*i)->state == GS_Destroy)
				{
					if((*i)->destroyself)
					{
						TRACE_END_STATE(*i);
						delete *i;
					}
					else
						(*i)->parent = NULL;
					i = children.erase(i);
					continue;
				}
				break;
			case S_Abort:
				cout << this << " aborting due to " << *i << endl;
				state = GS_Normal;
				return S_Abort;
			case S_ContinueNoWait:
				break;
			case S_Continue:
			case S_Wait:
				nrunning++;
				break;
		}
		i++;
	}
	
	TRACE_TICK(this);
	
	switch(state)
	{
		case GS_Waiting:
			if(nrunning != 0)
				return S_Wait;
			state = GS_Normal;
			// We have to return S_Wait one last time because we are not the original stack frame of the tick.
			return S_Wait;
		case GS_Finished:
		case GS_Destroy:
			return S_Finished;
		case GS_Normal:
			return S_Continue;
		case GS_Sleeping:
			return S_Wait;
	}
	
	return S_Continue;
}

#ifndef DEDICATED_SERVER
void GameState::Draw(BITMAP* dest)
{
	for(list<StateRef>::iterator i = children.begin(); i != children.end(); i++)
	{
		(*i)->Draw(dest);
	}
}
#endif

SubStateText::SubStateText(const string& text, int x, int y, int w, int h, ETextboxMode mode, bool waitonme): text(text), tnl(0), pos(0), lastword(0), thisline(0), waitonme(waitonme), x(x), y(y), w(w), h(h), mode(mode)
{
	len = text.length();
	buffer = new char [len + 1];
	buffer[0] = '\0';
	zorder = 20;
}

SubStateText::~SubStateText()
{
	delete [] buffer;
}

void SubStateText::CheckValid()
{
	GameState::CheckValid();
	TRACE_ASSERT(buffer);
	TRACE_ASSERT(pos <= len);
}

void SubStateText::Dump(ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR(tnl) << TRACE_VAR(pos) << TRACE_VAR(len) << TRACE_VAR((void*) buffer) << TRACE_VAR(lastword) << TRACE_VAR(thisline) << TRACE_VAR(waitonme) << TRACE_VAR(x) << TRACE_VAR(y) << TRACE_VAR(w) << TRACE_VAR(h) << TRACE_VAR(mode);
}

void SubStateText::SetText(const string& _text)
{
	text = _text;
	tnl = pos = lastword = thisline = 0;
	state = GS_Normal;
	len = text.length();
	buffer = new char [len + 1];
	buffer[0] = '\0';
}

void SubStateText::SetTextFast(const string& _text)
{
	state = GS_Normal;
	len = text.length() + _text.length();
	buffer = new char [len + 1];
	buffer[pos + 1] = '\0';
	text += _text;
}

#ifndef DEDICATED_SERVER
static int32_t en_text_width(FONT* font, const char* msg)
{
	uint32_t count = 0;
	char temp[2] = " ";
	for(int i = 0; msg[i] != '\0'; i++)
	{
		if(msg[i] != '$')
		{
			temp[0] = msg[i];
			count += text_length(font, temp);
		}
		else if(msg[i + 1] != '$')
			i += 6;
		else
		{
			temp[0] = msg[i + 1];
			count += text_length(font, temp);
		}
	}
	return count;
}
#endif

EStatus SubStateText::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue && s != S_ContinueNoWait) return s;
	if(!waitonme) s = S_ContinueNoWait;
	
#ifndef DEDICATED_SERVER
	tnl += dtime * TypingRate;
	if(keypressed())
	{
		tnl += TypingRate * text.length();
	}
	while(tnl >= 1)
	{
		tnl -= 1;
		if(text[pos] == '\0')
		{
			Finish(false);
			return S_Finished;
		}
		else if(text[pos] == ' ')
		{
			lastword = pos;
			buffer[pos] = text[pos];
			pos++;
			buffer[pos] = '\0';
		}
		else if(text[pos] == '$')
		{
			buffer[pos] = text[pos];
			pos++;
			if(text[pos] != '$')
			{
				buffer[pos] = text[pos];
				pos++;
				buffer[pos] = text[pos];
				pos++;
				buffer[pos] = text[pos];
				pos++;
				buffer[pos] = text[pos];
				pos++;
				buffer[pos] = text[pos];
				pos++;
				buffer[pos] = text[pos];
				pos++;
			}
			buffer[pos] = text[pos];
			pos++;
			buffer[pos] = '\0';
		}
		else
		{
			buffer[pos] = text[pos];
			pos++;
			buffer[pos] = '\0';
		}
		if(en_text_width(font, &buffer[thisline]) > w)
		{
			if(lastword > thisline)
			{
				buffer[lastword] = '\n';
				thisline = lastword + 1;
			}
			else
				cout << "Can't wrap" << endl;
		}
	}
#endif

	return s;
}

#ifndef DEDICATED_SERVER
void SubStateText::Draw(BITMAP* dest)
{
	if(mode == TM_Filled)
	{
		rectfill(dest, x, y, x + w - 1, y + h - 1, makecol(255, 255, 255));
		rect(dest, x, y, x + w - 1, y + h - 1, 0);
		en_renderf(dest, font, x + 3, y + 3, "$aa0000%s", buffer);
	}
	else
		en_renderf(dest, font, x, y, "$aa0000%s", buffer);
}
#endif

SubStateWalkPawn::SubStateWalkPawn(Pawn* p, int x, int y, double _timetoarrive, bool isspeed): p(p), timetoarrive(_timetoarrive)
{
	p->MoveTo(x, y, timetoarrive, isspeed);
}

void SubStateWalkPawn::CheckValid()
{
	GameState::CheckValid();
	TRACE_ASSERT(p);
}

void SubStateWalkPawn::Dump(ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR((void*) p);
}

EStatus SubStateWalkPawn::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	if(p->pstate == PS_None)
	{
		Finish();
		return S_Finished;
	}
	return S_Continue;
}

// The end
