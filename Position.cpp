#include "Position.h"

Position::Position(Side side, int column)
	:
	side(side),
	column(column),
	row(0)
{
}

Position::Position(Side side, int row, int column)
	:
	side(side),
	row(row),
	column(column)
{
}
