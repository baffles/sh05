// ini.cpp
//  Simple INI parser class

#include <sstream>
#include <iostream>
#include "ini.h"

using namespace std;
using namespace Ini;

static void trim(string& str)
{
	string::iterator i = str.begin();
	while(i != str.end() && isspace(*i))
		i = str.erase(i);
	if(!str.length())
		return;
	i = str.end() - 1;
	while(i != str.begin() && isspace(*i))
		i = str.erase(i);
}

bool Ini::Load(const string& file, File& sections)
{
	ifstream inifile(file.c_str());
	if(!inifile.good())
		return false;
	std::map<std::string, std::vector<std::string> >* cursection = NULL;
	while(1)
	{
		string line;
		char c;
		while((c = inifile.get()) != '\n' && inifile.good()) line += c;
		
		if(!inifile.good())
			break;
		
		// Strip comment
		if(line.find(';') != string::npos)
			line = line.substr(0, line.find(';'));
		
		// Strip leading whitespace
		string::iterator i = line.begin();
		while(i != line.end() && isspace(*i))
			i = line.erase(i);
			
		if(!line.length())
			continue;
		
		if(line[0] == '[')
		{	// A section
			string name = line.substr(1, line.length() - 2);
			if(name.length())
			{
				cursection = &sections[name];
			}
		}
		else
		{	// A keypair
			if(cursection)
			{
				string::size_type pos = line.find('=');
				if(pos != string::npos)
				{
					string key = line.substr(0, pos);
					string value = line.substr(pos + 1);
					trim(key);
					trim(value);
					vector<string>& v = (*cursection)[key];
					v.push_back(value);
				}
			}
		}
	}
	
	return true;
}

void Ini::Save(const std::string& file, File& sections)
{
	ofstream inifile(file.c_str());
	if(!inifile.is_open())
		return;
	for(map<string, map<string, vector<string> > >::iterator i = sections.begin(); i != sections.end(); i++)
	{
		if(i->second.size())
		{
			inifile << "[" << i->first << "]" << endl;
			for(map<string, vector<string> >::iterator j = i->second.begin(); j != i->second.end(); j++)
			{
				for(vector<string>::iterator k = j->second.begin(); k != j->second.end(); k++)
				{
					inifile << j->first << " = " << *k << endl;
				}
			}
			inifile << endl;
		}
	}
}

string& Ini::GetString(File& sections, const string& section, const string& key, const string& def)
{
	vector<string>& i = sections[section][key];
	if(!i.size())
		i.push_back(def);
	return i[0];
}

// The end
