#include "Army.h"

Army::Army(const Army& arm)
{
	for (auto& unit : arm.units)
	{
		units.push_back(unit.get()->Clone());
	}
}

void Army::AddUnit(std::unique_ptr<AbstractIUnit> &&unit)
{
    units.push_back(std::move(unit));
}