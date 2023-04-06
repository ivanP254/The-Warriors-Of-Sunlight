#pragma once
#include "Turn.h"
#include <optional>
#include "Armies.h"


class CombatManager				//manages.. combat..
{
public:
	void GenerateCombat(Armies& armies);
	const Turn& GetCurrentTurn()const;			//if called on first turn - will return a turn without events and initial army state
	const Turn& GetNextTurn()const;			//if called on last turn - will return a turn without events and end army state
	const Turn& GetPreviousTurn()const;
	const Turn& GetLastTurn()const;
	const Turn& GetFirstTurn()const;
private:
	bool CheckAllFinished(Armies& armies);
	void ClearDead(Armies& armies);
	mutable int currentTurn = 0;
	std::vector<Turn> turns;
};