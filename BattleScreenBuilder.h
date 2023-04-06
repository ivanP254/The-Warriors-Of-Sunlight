#pragma once

#include<windows.h>
#include<string>
#include<iostream>
#include"Defines.h"
#include"Battle1v1Screen.h"
#include"Battle3v3Screen.h"

class BattleScreenBuilder
{
private:
	HANDLE hConsole;
public:
	BattleScreenBuilder();
};
