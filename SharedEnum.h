#pragma once
#include "Defines.h"
#include <vector>
#include <string>

enum class Ability
{
	Enforce,
	Shot,
	Clone,
	Heal,
	Special,
	Idle,
	NoAbility
};

enum class Side
{
	Left,
	Right
};
class StaticName {
public:
	static std::vector<std::string> unit_names;
};