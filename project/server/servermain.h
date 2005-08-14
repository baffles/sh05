// servermain.h
//  Main include file for Allegro Battle Ground Server

#ifndef SERVERMAIN_H_INCLUDED
#define SERVERMAIN_H_INCLUDED

#define DEDICATED_SERVER

#include "gameinfo.h"
#include "ini.h"

// Global variables
/// The current running game
extern class GameInfo GGame;
/// Number of seconds the game has been running for
extern uint32_t GTime;
/// The main configuration file
extern Ini::File settings;

void GlobalTick(double dtime);
void ResetGame();
void NewGame();

#endif

// The end
