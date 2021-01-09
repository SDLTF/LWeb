#pragma once
#include <string>
#include <io.h>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>
#include <vector>
#include <stack>
#include <queue>
#include <regex>
class File
{
private:
	std::vector<std::string> files;
	std::string config;
public:
	int load(std::string);
	std::string clean_whitespace(std::string);
};

class MarkdownTransform
{
public:
	MarkdownTransform(std::string);
	~MarkdownTransform();
	std::string getContents();
	void process_title(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_code(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_refer(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_list(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_escape_first(std::vector<std::string>::iterator&, std::vector<std::string>&, std::queue<char>&);
	void process_escape_last(std::vector<std::string>::iterator&, std::vector<std::string>&, std::queue<char>&);
	void process_bold_and_italic(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_parting_line(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_linebreak(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_emptyline(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_url(std::vector<std::string>::iterator&, std::vector<std::string>&);
	void process_image(std::vector<std::string>::iterator&, std::vector<std::string>&);
	int assist_list(int, std::string);
	void change_list(int, std::vector<std::string>::iterator&, int);

	void split(std::string str, std::string limit, std::vector<std::string>&);
	std::string assist_url(std::string&, std::regex&, std::regex&, std::regex&);
	std::string assist_image(std::string&, std::regex&, std::regex&, std::regex&);

private:
	std::string file_position;
};