#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include<vector>
#include"PrintConsole.h"
#include"MenuPrinter.h"
#include"CharPrinter.h"
#include"Defines.h"
#include"Adapter.h"


class Army1v1Menu : MenuPrinter
{
private:

	Adapter* a;

	int currentUnit;

public:

	Army1v1Menu(Adapter* ad);

	void printMenu();




	void buttonRight();

	void buttonLeft();

	// some funcs that collect data from outside
	int getMoney();

	int getUnitCost(int unit);

	int getUnitHp(int unit);

	int getUnitAtk(int unit);

	int getUnitDef(int unit);

	std::vector<int> getArmy();

	void addUnit();
};

