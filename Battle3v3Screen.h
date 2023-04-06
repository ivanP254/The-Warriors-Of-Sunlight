#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include<vector>
#include"PrintConsole.h"
#include"BattlePrinter.h"
#include"CharPrinter.h"
#include"Defines.h"
#include"Adapter.h"

class Battle3v3Screen : BattlePrinter
{
private:
	Adapter* ad;
public:
	Battle3v3Screen(Adapter* a);

	void printMenu(int state, int activeUnit = 0);

	std::vector<Unit> getLeftArmy(int army);
	std::vector<Unit> getRightArmy(int army);
};

