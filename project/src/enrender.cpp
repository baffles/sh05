// enrender.cpp:
//  Renders enhanced text lines
//  (c) 2004 Ryan Patterson
//  Distributed under the zlib/libpng license
//  Usage:
//   void en_renderf(BITMAP* dest, const FONT* font, int x, int y, const char* msg, ...)
//    dest: bitmap to write text to
//    font: font to write in
//    x, y: point to begin drawing text at
//    msg: a standard printf format string, with the following enhancements:
//     A color escape code is in the form of $rrggbb, where rr, gg, and bb are
//     hexadecimal digits describing the color to continue drawing in. The
//     default color is white (255, 255, 255). To print a $ character, use "$$"
//     instead. Note that the maximum length of an expanded string can be no
//     more than strlen(msg) + 2048

#include <allegro.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#ifdef ALLEGRO_WINDOWS
#	define vsnprintf _vsnprintf
#endif

static int get_hexdigit(char i)
{
	if(i >= '0' && i <= '9')
		return i - '0';
	if(i >= 'A' && i <= 'F')
		return i - 'A' + 10;
	if(i >= 'a' && i <= 'f')
		return i - 'a' + 10;
	return 0;
}

void en_renderf(BITMAP* dest, const FONT* font, int x, int y, const char* msg, ...)
{
	char* buffer;
	int px = x, py = y;
	int pos = 0;
	int color = makecol(0xff, 0xff, 0xff);
	
	buffer = new char [strlen(msg) + 2048];
	
	va_list va;
	va_start(va, msg);
	vsnprintf(buffer, strlen(msg) + 2048, msg, va);
	va_end(va);
	
	while(buffer[pos])
	{
		if(buffer[pos] == '$')
		{
			++pos;
			if(buffer[pos] != '$')
			{
				// "$rrggbb_"
				int r = 0, g = 0, b = 0;
				r = get_hexdigit(buffer[pos]) << 4;
				r |= get_hexdigit(buffer[pos + 1]);
				g = get_hexdigit(buffer[pos + 2]) << 4;
				g |= get_hexdigit(buffer[pos + 3]);
				b = get_hexdigit(buffer[pos + 4]) << 4;
				b |= get_hexdigit(buffer[pos + 5]);
				color = makecol(r, g, b);
				pos += 6;
				continue;
			}
		}
		if(buffer[pos] == '\n')
		{
			++pos;
			px = x;
			py += text_height(font);
			continue;
		}
		if(buffer[pos] == ' ')
		{
			++pos;
			px += text_length(font, " ");
			continue;
		}
		if(buffer[pos] == '\t')
		{
			++pos;
			px = (int)((px + 32) / 32) * 32;
			continue;
		}
		char msg2[2] = " ";
		msg2[0] = buffer[pos];
		textout(dest, font, msg2, px, py, color);
		px += text_length(font, msg2);
		++pos;
	}
}

// The end
