#include "Turn.h"

Turn::Turn(std::vector<Event>& events, Armies& initial)
	:
	events(events),
	initialState(initial)
{
}
