#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"Defines.h"

class PrintConsole
{
protected:
	HANDLE hConsole;

	PrintConsole();

	// straight print
	void print(std::string toPrint, int color = COLOR_BLACK);

	void print(char toPrint, int color = COLOR_BLACK);

	void printLn(std::string toPrint, int color = COLOR_BLACK);

	void printLn(char toPrint, int color = COLOR_BLACK);
};

