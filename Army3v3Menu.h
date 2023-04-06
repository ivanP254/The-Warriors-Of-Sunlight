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


class Army3v3Menu : MenuPrinter
{

private:

	Adapter* a;

	int currentUnit;

	int currentArmy;

public:

	Army3v3Menu(Adapter* ad);

	void printMenu();




	void buttonRight();

	void buttonLeft();

	void buttonUp();

	void buttonDown();

	// some funcs that collect data from outside
	int getMoney();

	int getUnitCost(int unit);

	int getUnitHp(int unit);

	int getUnitAtk(int unit);

	int getUnitDef(int unit);

	std::vector<int> getArmy(int army);

	void addUnit();

};

