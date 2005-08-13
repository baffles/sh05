// abg.h
//  Main include file for Allegro Battle Ground

#ifndef ABG_H_INCLUDED
#define ABG_H_INCLUDED

#include "gameinfo.h"
#include "ini.h"

// Global variables
/// The current running game
extern class GameInfo GGame;
/// Width of the caret, for DRSes
extern uint32_t caret_width;
/// Height of the caret, for DRSes
extern uint32_t caret_height;
/// Caret bitmap
extern BITMAP* caret;
/// Number of seconds the game has been running for
extern uint32_t GTime;
/// The main configuration file
extern Ini::File settings;

void GlobalTick(double dtime);
void ResetGame();
void NewGame();
void en_renderf(BITMAP* dest, const FONT* font, int x, int y, const char* msg, ...);

#endif

// The end
