#pragma once

#define COLOR_BLACK 1
#define COLOR_RED 2
#define COLOR_BLUE 3
#define COLOR_GREEN 4
#define COLOR_PURPLE 5

#define VERSUS_STATE_1V1 1
#define VERSUS_STATE_3V3 2
#define VERSUS_STATE_AVA 3

#define UNIT_INFANTRY 1
#define UNIT_MAGE 2
#define UNIT_ARCHER 3
#define UNIT_HEALER 4
#define UNIT_KNIGHT 5
#define UNIT_TUMBLEWEED 6

#define ARCHER_RANGE 5

#define SH(x) std::string(x, char(219))
#define GAP(x) print(std::string(x, ' '))

#define GAME_STATE_NULL 0
#define GAME_STATE_MENU 1
#define GAME_STATE_BATTLE 2

#define IDLE 0
#define ATTACK 1
#define SPECIAL 2

#define LOOK_LEFT 0
#define LOOK_RIGHT 1

struct Unit
{
	int type;
	int hp;
	bool isBoosted;
};