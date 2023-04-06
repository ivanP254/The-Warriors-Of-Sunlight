#pragma once
#include "Army.h"
#include"BuilderIArmy.h"
#include <cstdlib>
class AutomaticGenerator
{
public:
	Army GenerateRandomArmy(int money)
	{
		std::vector<std::unique_ptr<AbstractIUnit>> units{};
		units.push_back(std::make_unique<Archer>());
		units.push_back(std::make_unique<Knight>());
		units.push_back(std::make_unique<Mag>());
		units.push_back(std::make_unique<Infantryman>());
		units.push_back(std::make_unique<Healer>());
		Army result{};
		//std::srand(std::time(nullptr));
		while (money > 0)
		{
			int unit =  rand() % units.size() + 0;
			result.AddUnit(units[unit]->Clone());
			money -= units[unit]->GetCost();
		}
		return result;
	}
};