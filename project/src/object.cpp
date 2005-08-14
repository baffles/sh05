// object.cpp
//  Basic object system

#include "object.h"

using namespace std;

Object::Object(): flags(0), x(0), y(0), cls(-1)
{
}

Object::Object(uint32_t flags): flags(flags), x(0), y(0), cls(-1)
{
}

void Object::CheckValid()
{
	GameState::CheckValid();
}

void Object::Dump(ostream& str)
{
	GameState::Dump(str);
	str << " flags " << hex << flags << TRACE_VAR(x) << TRACE_VAR(y) << TRACE_VAR(cls);
}

// The end
