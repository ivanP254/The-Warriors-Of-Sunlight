#pragma once


#include<windows.h>
#include<string>
#include<iostream>
#include<vector>
#include"PrintConsole.h"
#include"BattlePrinter.h"
#include"CharPrinter.h"
#include"Adapter.h"
#include"Defines.h"


class Battle1v1Screen : BattlePrinter
{
private:
	Adapter* ad;
public:
	Battle1v1Screen(Adapter* a);

	void printMenu(int state, int activeUnit = 0);

	std::vector<Unit> getLeftArmy();
	std::vector<Unit> getRightArmy();
};

