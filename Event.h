#pragma once
#include "Action.h"
#include <vector>
#include "Armies.h"

class Event				//contains info about activation of special abilities (maximum of 2), and Army state after that
{
public:
	Event(Action action, Armies endState);
	
	const Armies endState;
	const Action  action;			
};