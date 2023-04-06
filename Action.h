#pragma once
#include "Position.h"

class Action				  //stores info about a single ability activation
{
public:
	Action(Position caster, Position target, Ability ability);
	Action& operator=(const Action& act) = default;
	Action& operator=(Action&& act) = default;
	Action(const Action& act) = default;
	Action(Action&& act) = default;
	
	Position caster;
	Position target;
	const Ability ability;
};