#pragma once

#include "Defines.h"
#include "Adapter.h"
#include "MusicPlayer.h"
#include "MenuBuilder.h"
#include "BattleScreenBuilder.h"


class UserInterface
{
private:
	

	// constructor of _only_ instance
	UserInterface();

	static UserInterface *instance();

	MenuBuilder *menu;
	BattleScreenBuilder *battleMenu;
	VersusMenu *versus;
	Army1v1Menu *army1;
	Army3v3Menu *army3;
	Battle1v1Screen *screen1;
	Battle3v3Screen *screen3;


	int status; // 1 - choose,  2 - 1v1,  3 - 3v3, 4 - 1v1 battle, 5 - 3v3 battle
	
	// private values

	Adapter* adapter;

	bool isCreated = false;

	int gameState;

	static UserInterface *self;

	// private methods
	void create(Adapter* a);



public:
	// access method, returns the only instance
	static UserInterface *getUI(Adapter *a);

	// deleting other constructors
	UserInterface(const UserInterface &ui) = delete;


	// public values

	// public methods
	int getState();

	void reset();

	void startNewGame();

	static void work(DWORD button);

};





