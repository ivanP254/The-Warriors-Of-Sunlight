#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"Defines.h"
#include"CharPrinter.h"


class BattlePrinter : public CharPrinter
{
protected:
	void printUnit(int unit, int line, int movingType, int frame, bool isBoosted, int side, int hp);
};

