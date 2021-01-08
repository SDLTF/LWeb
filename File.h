#pragma once
#include <string>
#include <io.h>
#include <fstream>
#include <vector>
class File
{
private:
	std::vector<std::string> files;
	std::string config;
public:
	int load(std::string);
	std::string clean_whitespace(std::string);
};
