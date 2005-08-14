// characters.cpp
//  Character library

#include "pawn.h"
#include "character.h"
#include "abg.h"

using namespace std;

class CharacterCGP: public Character
{
	public: // Public variables
		BITMAP* standard;
	public: // Public functions
		CharacterCGP()
		{
			name = "CGamesPlay";
			flavor = "International Man of Mystery, in the flesh!";
		}
		virtual ~CharacterCGP()
		{
			destroy_bitmap(standard);
		}
#ifndef DEDICATED_SERVER
		virtual bool InitGraphics()
		{
			string datadir = Ini::GetString(settings, "data", "character", "../../media/Assets/Rendered/Sprites/CG");
			return (standard = load_bitmap((datadir + "/Stand.bmp").c_str(), NULL));
		}
		virtual void DrawSelf(BITMAP* dest, int x, int y, int w, int h)
		{
			StandardStates(dest, x, y, w, h, standard);
		}
#endif
};
ADD_CHARACTER(CharacterCGP);

// The end
