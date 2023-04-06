#pragma once
#include"Event.h"
#include "Armies.h"


class Turn			//contains all info about a single turn
{
public:
	Turn(std::vector<Event>& events, Armies& initial);
	const Armies initialState;
	const std::vector<Event> events;
};
