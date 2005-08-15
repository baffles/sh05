// character.cpp
//  Characters!!!

#include <iostream>
#include <math.h>
#include <strings.h>
#include <sstream>
#include "character.h"
#include "abg.h"

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
	destroy_bitmap(sprite);
}

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
	
	return sprite;
}

#ifndef DEDICATED_SERVER
BITMAP* Character::GetFrame(EDirection dir, EState state, int frame)
{
	return sprite;
}
#endif

// The end
