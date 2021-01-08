#include "File.h"
#include "Color.h"
#include <string>
#include <iostream>
int File::load(std::string path)
{
	std::ifstream inf;
	inf.open(path + "//_config.yml");
	if (!inf) { COUT_TEXT("\nError: Cannot find file _config.yml\n", RED); return 1; }
	else if (!inf.is_open()) { COUT_TEXT("\nError: _config.yml has been opened\n", RED); return 1; }
	else {
		std::string strLine;
		while (std::getline(inf, strLine))
		{

			if (strLine.empty())	continue;
			else {
				if (strLine == "FilePath:") {
					while (1) {
						std::getline(inf, strLine);
						this->files.push_back(clean_whitespace(strLine));
					}
				}
			}
		}
	}
	return -1;
}

std::string File::clean_whitespace(std::string s)
{
	int posl = 0;
	while (s[posl] == ' ') posl ++;
	if (s[posl] == '-') posl++;
	return clean_whitespace(s.substr(posl, s.size()));
}
