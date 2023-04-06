#pragma once
#include "SharedEnum.h"

class Position			//contains info about a single position on the battlefield
{
public:
	Position(Side side, int column);
	Position(Side side, int row, int column);
	Position& operator=(const Position& act) = default;
	Position& operator=(Position&& act) = default;
	Position(const Position& act) = default;
	Position(Position&& act) = default;

	const Side side;
	int row;
	const int column;
};