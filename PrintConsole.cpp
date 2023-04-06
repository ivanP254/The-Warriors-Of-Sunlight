#include "PrintConsole.h"


PrintConsole::PrintConsole()
{
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
}

void PrintConsole::print(std::string toPrint, int color)
{
	SetConsoleTextAttribute(hConsole, color);
	std::cout << toPrint;
}

void PrintConsole::print(char toPrint, int color)
{
	SetConsoleTextAttribute(hConsole, color);
	std::cout << toPrint;
}

void PrintConsole::printLn(std::string toPrint, int color)
{
	SetConsoleTextAttribute(hConsole, color);
	std::cout << toPrint << std::endl;
}

void PrintConsole::printLn(char toPrint, int color)
{
	SetConsoleTextAttribute(hConsole, color);
	std::cout << toPrint << std::endl;
}