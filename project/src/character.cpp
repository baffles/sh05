// character.cpp
//  Characters!!!

#include <iostream>
#include <math.h>
#include <strings.h>
#include <sstream>
#include "character.h"
#include "abg.h"
#ifndef DEDICATED_SERVER
#include "zipfile.h"
#endif

using namespace std;

vector<Character*> Character::chars;

void Character::StaticDestroy()
{
	for(vector<Character*>::iterator i = chars.begin(); i != chars.end(); i++)
		delete *i;
}

Character* Character::GetByName(const string& name)
{
	for(vector<Character*>::iterator i = chars.begin(); i != chars.end(); i++)
	{
		if(strcasecmp((*i)->name.c_str(), name.c_str()) == 0)
			return *i;
	}
	
	Character* c = new Character;
	c->name = name;
	if(!c->InitGraphics())
	{
		delete c;
		return NULL;
	}
	
	chars.push_back(c);
	
	return c;
}

Character::Character(): name("")
#ifndef DEDICATED_SERVER
	, sprite(NULL)
#endif
{
}

Character::~Character()
{
#ifndef DEDICATED_SERVER
	destroy_bitmap(sprite);
	for(vector<BITMAP*>::iterator i = rightwalk.begin(); i != rightwalk.end(); i++)
		destroy_bitmap(*i);
	for(vector<BITMAP*>::iterator i = rightjump.begin(); i != rightjump.end(); i++)
		destroy_bitmap(*i);
	for(vector<BITMAP*>::iterator i = leftwalk.begin(); i != leftwalk.end(); i++)
		destroy_bitmap(*i);
	for(vector<BITMAP*>::iterator i = leftjump.begin(); i != leftjump.end(); i++)
		destroy_bitmap(*i);
#endif
}

#ifndef DEDICATED_SERVER
bool Character::InitGraphics()
{
	string file = Ini::GetString(settings, "data", "dir", "../../media");
	file += "/" + name + ".zip";
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
	
	temp = pack_fopen_zip(data, Ini::GetString(manifest, "graphics", "standing", "Stand.bmp").c_str());
	if(temp)
	{
		sprite = load_bmp_pf(temp, NULL);
		pack_fclose(temp);
	}
	
	vector<string>* section = &manifest["graphics"]["walkright"];
	for(vector<string>::iterator i = section->begin(); i != section->end(); i++)
	{
		temp = pack_fopen_zip(data, i->c_str());
		if(temp)
		{
			BITMAP* frame = load_bmp_pf(temp, NULL);
			if(frame)
				rightwalk.push_back(frame);
			pack_fclose(temp);
		}
	}
	section = &manifest["graphics"]["walkleft"];
	for(vector<string>::iterator i = section->begin(); i != section->end(); i++)
	{
		temp = pack_fopen_zip(data, i->c_str());
		if(temp)
		{
			BITMAP* frame = load_bmp_pf(temp, NULL);
			if(frame)
				leftwalk.push_back(frame);
			pack_fclose(temp);
		}
	}
	section = &manifest["graphics"]["jumpright"];
	for(vector<string>::iterator i = section->begin(); i != section->end(); i++)
	{
		temp = pack_fopen_zip(data, i->c_str());
		if(temp)
		{
			BITMAP* frame = load_bmp_pf(temp, NULL);
			if(frame)
				rightjump.push_back(frame);
			pack_fclose(temp);
		}
	}
	section = &manifest["graphics"]["jumpleft"];
	for(vector<string>::iterator i = section->begin(); i != section->end(); i++)
	{
		temp = pack_fopen_zip(data, i->c_str());
		if(temp)
		{
			BITMAP* frame = load_bmp_pf(temp, NULL);
			if(frame)
				leftjump.push_back(frame);
			pack_fclose(temp);
		}
	}
	
	return sprite;
}

BITMAP* Character::GetFrame(EDirection dir, EState state, int frame)
{
	if(dir == D_Left)
	{
		switch(state)
		{
			case S_Jumping:
				if(leftjump.size())
					return leftjump[frame % leftjump.size()];
			case S_Walking:
				if(leftwalk.size())
					return leftwalk[frame % leftwalk.size()];
			default:
				return sprite;
		}
	}
	else
	{
		switch(state)
		{
			case S_Jumping:
				if(rightjump.size())
					return rightjump[frame % rightjump.size()];
			case S_Walking:
				if(rightwalk.size())
					return rightwalk[frame % rightwalk.size()];
			default:
				return sprite;
		}
	}
	return sprite;
}
#endif

// The end
