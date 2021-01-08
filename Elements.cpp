#include "Elements.h"

Element::Element()
{
	this->lable     = "p";
	this->details   = "";
	this->attribute = {};
}

Element::Element(std::string details)
{
	this->lable     = "p";
	this->details   = details;
	this->attribute = {};
}

Element::Element(std::string lable, std::string detail)
{
	this->lable     = lable;
	this->details   = detail;
	this->attribute = {};
}

Element::Element(std::string lable, std::string detail, std::vector<attr> attr)
{
	this->lable     = lable;
	this->details   = detail;
	this->attribute = attr;
}

std::string Element::to_html()
{
	std::string attri;
	for (auto i : this->attribute)	attri += i.first + " : " + i.second;
	return attri;
}

void Element::change_lable(std::string lable)
{
	this->lable = lable;
}

void Element::change_details(std::string detail)
{
	this->details = detail;
}

void Element::change_attribute(std::vector<attr> attri)
{
	this->attribute.clear();
	this->attribute = attri;
}

void Element::change_attrubute(attr attri)
{
	this->attribute.clear();
	this->attribute.push_back(attri);
}

void Element::add_details(std::string detail)
{
	this->details += detail;
}

void Element::add_attribute(std::pair<std::string, std::string> attri)
{
	this->attribute.push_back(attri);
}

std::string Element::get_lable()
{
	return this->lable;
}

std::string Element::get_details()
{
	return this->details;
}

std::vector<attr>& Element::get_attribute()
{
	return this->attribute;
}

