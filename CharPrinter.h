#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"Defines.h"
#include"PrintConsole.h"


class CharPrinter : public PrintConsole
{
protected:
	void printChar(char ch, int line, int color);

	void printNum(int num, int line, int color);
	void printNullNum(int num, int line, int color);


};

