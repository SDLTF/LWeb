#pragma once
#include <string>
#include <vector>

typedef std::pair<std::string, std::string> attr;
class Element
{
private:
	std::string            lable;
	std::string            details;
	std::vector<attr>      attribute;

public:
	Element();
	Element(std::string);
	Element(std::string, std::string);
	Element(std::string, std::string, std::vector<attr>);
	std::string to_html();
	void change_lable(std::string);
	void change_details(std::string);
	void change_attribute(std::vector<attr>);
	void change_attrubute(attr);
	void add_details(std::string);
	void add_attribute(std::pair<std::string, std::string>);
	
	std::string get_lable();
	std::string get_details();
	std::vector<attr> &get_attribute();
};