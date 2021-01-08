#pragma once
#include <Windows.h>
#define RED		12, 4
#define WHITE	1, 6
#define BLUE	1, 8
#define GREEN	0, 10
#define COUT_TEXT(text, color) SetFontColor(color); \
							   std::cout << text << std::endl; \
							   SetFontColor(WHITE);

void SetFontColor(unsigned short forecolor = 4, unsigned short backgroudcolor = 0)
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, forecolor | backgroudcolor);
}