// characters.cpp
//  Character library

#include "pawn.h"
#include "character.h"

using namespace std;

class CharacterX: public Character
{
	public: // Public variables
		BITMAP* thex;
	public: // Public functions
		CharacterX()
		{
			name = "TINS";
			flavor = "This character is, well, the TINS name!";
		}
		virtual ~CharacterX()
		{ destroy_bitmap(thex); }
#ifndef DEDICATED_SERVER
		virtual bool InitGraphics()
		{
			BITMAP* temp = create_bitmap(text_length(font, "TIN"), text_height(font));
			clear_to_color(temp, makecol(255, 255, 255));
			textout(temp, font, "TIN", 0, 0, makecol(255, 0, 0));
			thex = create_bitmap(PawnWidth, PawnHeight);
			stretch_sprite(thex, temp, 0, 0, PawnWidth, PawnHeight);
			destroy_bitmap(temp);
			return true;
		}
		virtual void DrawPortrait(BITMAP* dest, int x, int y, int w, int h)
		{
			stretch_blit(thex, dest, 0,  0, thex->w, thex->h, x, y, w, h);
		}
		virtual void DrawSelf(BITMAP* dest, int x, int y, int w, int h)
		{
			StandardStates(dest, x, y, w, h, thex);
		}
#endif
};
ADD_CHARACTER(CharacterX);

// The end
