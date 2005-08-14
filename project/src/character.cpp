// character.cpp
//  Characters!!!

#include <iostream>
#include <math.h>
#include <strings.h>
#include "character.h"

using namespace std;

vector<Character*>* Character::chars = NULL;
bool Character::initialized = false;

void Character::Initialize()
{
	if(initialized)
		return;
	chars = new vector<Character*>;
	initialized = true;
}

void Character::RegisterCharacter(Character* c)
{
	Initialize();
	chars->push_back(c);
	c->id = chars->size() - 1;
}

void Character::StaticInitGraphics()
{
	Initialize();
	vector<Character*>::iterator i = chars->begin();
	while(i != chars->end())
	{
		if(!(*i)->InitGraphics())
			i = chars->erase(i);
		else
			i++;
	}
}

void Character::StaticDestroy()
{
	if(!initialized) return;
	for(vector<Character*>::iterator i = chars->begin(); i != chars->end(); i++)
		delete *i;
	delete chars;
	chars = NULL;
	initialized = false;
}

Character* Character::GetByName(const char* name)
{
	for(vector<Character*>::iterator i = chars->begin(); i != chars->end(); i++)
	{
		if(strcasecmp((*i)->name, name) == 0)
			return *i;
	}
	return NULL;
}

Character::Character(): name(""), flavor("")
{
	Character::RegisterCharacter(this);
}

#ifndef DEDICATED_SERVER
void Character::StandardStates(BITMAP* dest, int x, int y, int w, int h, BITMAP* frame)
{
	switch(state)
	{
		case S_Standing:
			stretch_sprite(dest, frame, x, y, w, h);
			break;
		case S_Walking:
		{
			stretch_sprite(dest, frame, x, y, w, h);
			break;
		}
		case S_Jumping:
			stretch_sprite(dest, frame, x, y - (uint32_t) (sin(3.14 * progress) * 1.5 * h), w, h);
			break;
		default:
			cout << "Character " << name << ": StandardStates with unknown state " << state << endl;
	}
}
#endif

EStatus Character::Tick(double dtime)
{
	progress += dtime * timedialation;
	animphase += dtime * timedialation;
	if(progress >= 1 && state != S_Standing && state != S_Walking)
	{
		Animate(S_Standing, 1);
		return S_Finished;
	}
	return S_Continue;
}

void Character::Face(EDirection newdir)
{
	dir = newdir;
}

void Character::Animate(EState animation, double timetoarrive)
{
	state = animation;
	progress = 0;
	animphase = 0;
	timedialation = 1 / timetoarrive;
}

// The end
