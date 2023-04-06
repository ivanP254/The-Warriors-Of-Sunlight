#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"Defines.h"
#include"CharPrinter.h"


class MenuPrinter : public CharPrinter
{
protected:
	void printUnit(int unit, int line);

	void printDollar(int line, int color);
	void printHeart(int line, int color);
	void printSword(int line, int color);
	void printShield(int line, int color);

	void printPlus(bool isDraw, int line, int color);
	void printArrow(bool isDraw, int line, int color);
};

