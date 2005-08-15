// ini.h
//  Simple INI parser class

#ifndef INI_H_INCLUDED
#define INI_H_INCLUDED

#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <iostream>

namespace Ini
{

typedef std::map<std::string, std::map<std::string, std::vector<std::string> > > File;

/// Read in the settings described in file to the Ini::File sections.
bool Load(const std::string& file, File& sections);
/// Read in the settings described in file to the Ini::File sections.
bool Load(std::istream& file, File& sections);
/// Write out the Ini::File sections to file.
void Save(const std::string& file, File& sections);
/// Write out the Ini::File sections to file.
void Save(std::ostream& file, File& sections);
/// Safely retrieve a string from the Ini::File sections. If the key doesn't exist, use def.
std::string& GetString(File& sections, const std::string& section, const std::string& key, const std::string& def = "");

}

#endif

// The end
