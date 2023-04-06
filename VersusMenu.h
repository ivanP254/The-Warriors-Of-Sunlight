#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"PrintConsole.h"
#include"CharPrinter.h"
#include"InputHandler.h"
#include"Defines.h"

class VersusMenu : CharPrinter
{
private:


	// values
	int versusChooseState;

public:

	VersusMenu();

	// some control buttons to be called outside
	void buttonDown();

	void buttonUp();

	// methods
	void printMenu();


	int getState();
};

