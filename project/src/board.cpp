// board.cpp
//  Boaard clss

#include <sstream>
#include "board.h"
#include "pawn.h"
#include "abg.h"
#include "zipfile.h"

using namespace std;

Board::Board(): camx(160), camy(1), _camy(100),
#ifndef DEDICATED_SERVER
	background(NULL), floor(NULL), platleft(NULL), platmiddle(NULL), platright(NULL),
#endif
	platoffset(0), state(BS_Normal)
{
}

Board::~Board()
{
	destroy_bitmap(background);
	destroy_bitmap(floor);
	destroy_bitmap(platleft);
	destroy_bitmap(platmiddle);
	destroy_bitmap(platright);
}
 
void Board::CheckValid()
{
	GameState::CheckValid();
}

void Board::Dump(std::ostream& str)
{
	GameState::Dump(str);
	str << TRACE_VAR(background) << TRACE_VAR(floor) << TRACE_VAR(platleft) << TRACE_VAR(platmiddle) << TRACE_VAR(platright) << TRACE_VAR(platoffset) << TRACE_VAR(camx) << TRACE_VAR(camy) << TRACE_VAR(_camy) << endl;
}

void Board::RealToScreen(int w, int h, int inx, int iny, int& x, int& y)
{
	// Convert absolute to screen
	int left = camx - (w / 2);
	int top = _camy + (h / 2);
	x = inx - left;
	y = -iny + top;
}

void Board::ScrollToLevel(int newlevel)
{
	if(newlevel < 1 || newlevel > 3)
		return;
	state = BS_Scrolling;
	camy = newlevel;
}

int Board::Drop(int x, int y, int maxdist)
{
	for(vector<Platform*>::iterator i = geometry.begin(); i != geometry.end(); i++)
	{
		if((*i)->x <= x && x <= (*i)->x + (*i)->w && y >= (*i)->y && y - maxdist <= (*i)->y)
			return y - (*i)->y;
	}
	
	if(y - maxdist <= 10)
		return y - 10;
	
	return maxdist;
}

EStatus Board::Tick(double dtime)
{
	EStatus s = GameState::Tick(dtime);
	if(s != S_Continue) return s;
	
	if(state == BS_Scrolling)
	{
		if(camy * 200 - 100 > _camy)
			_camy += 2;
		else if(camy * 200 - 100 < _camy)
			_camy -= 2;
		else
			state = BS_Normal;
	}
	
	return S_ContinueNoWait;
}

#ifndef DEDICATED_SERVER
void Board::Draw(BITMAP* dest)
{
	if(background)
	{
		int bgx = camx / 3;
		int bgy = BoardHeight - _camy - (dest->h / 2);
		blit(background, dest, bgx, bgy, 0, 0, dest->w, dest->h);
	}
	if(floor)
	{
		int fy = -floor->h + _camy + (dest->h / 2);
		if(fy < dest->h)
		{	// Visible
			int left = (camx - (dest->w / 2)) % floor->w;
			// Blit the leftmost floor pane
			masked_blit(floor, dest, left, 0, 0, fy, floor->w - left, floor->h);
			// Blit those further right
			int i = 0;
			while(i * floor->w + (floor->w - left) < dest->w)
			{
				masked_blit(floor, dest, 0, 0, (floor->w - left) + i * floor->w, fy, floor->w, floor->h);
				i++;
			}
		}
	}
	
	GameState::Draw(dest);
}

bool Board::InitGraphics()
{
	string file = Ini::GetString(settings, "data", "dir", "../../media");
	file += "/" + Ini::GetString(settings, "data", "level", "NightSky.zip");
	PACKFILE* data = pack_fopen_zip_dir(file.c_str());
	if(!data)
		return false;
		
	PACKFILE* temp;
	
	temp = pack_fopen_zip(data, "manifest.ini");
	if(!temp)
		return false;
	
	stringstream inifile;
	while(1)
	{
		char c = pack_getc(temp);
		if(pack_feof(temp))
			break;
		inifile.put(c);
	}
	pack_fclose(temp);
	Ini::File manifest;
	Ini::Load(inifile, manifest);
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "background", "BG.bmp").c_str());
	if(temp)
	{
		background = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "floor", "Floor.bmp").c_str());
	if(temp)
	{
		floor = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "platleft", "PlatL.bmp").c_str());
	if(temp)
	{
		platleft = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "platmiddle", "PlatM.bmp").c_str());
	if(temp)
	{
		platmiddle = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "platright", "PlatR.bmp").c_str());
	if(temp)
	{
		platright = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	pack_fclose(data);
	
	Ini::Save(cout, manifest);
	
	return background && floor && platleft && platmiddle && platright;
}
#endif
		
bool Board::InitLogic()
{
	return true;
}


// The end
