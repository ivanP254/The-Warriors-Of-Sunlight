#include"Adapter.h"

Adapter::Adapter()
{
	money = 1111;
	builderLeft = Left_ArmyBuilder();
	builderLeft.createArmy();

	builderLeftVec = std::vector<Left_ArmyBuilder>();

	builderLeftVec.emplace_back(Left_ArmyBuilder());
	builderLeftVec.emplace_back(Left_ArmyBuilder());
	builderLeftVec.emplace_back(Left_ArmyBuilder());

	for (int i = 0; i < 3; i++) {
		builderLeftVec[i].createArmy();
	}
}

int Adapter::getCurrentMoney()
{
	return money;
}

int Adapter::getUnitCost(int unit)
{
	
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		Infantryman man = Infantryman();
		return man.GetCost();
	}
	case UNIT_MAGE:
	{
		Mag man = Mag();
		return man.GetCost();
	}
	case UNIT_ARCHER:
	{
		Archer man = Archer();
		return man.GetCost();
	}
	case UNIT_HEALER:
	{
		Healer man = Healer();
		return man.GetCost();
	}
	case UNIT_KNIGHT:
	{
		Knight man = Knight();
		return man.GetCost();
	}

	default:
		return 0;
	}
}

int Adapter::getUnitHp(int unit)
{
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		Infantryman man = Infantryman();
		return man.GetHitpoints();
	}
	case UNIT_MAGE:
	{
		Mag man = Mag();
		return man.GetHitpoints();
	}
	case UNIT_ARCHER:
	{
		Archer man = Archer();
		return man.GetHitpoints();
	}
	case UNIT_HEALER:
	{
		Healer man = Healer();
		return man.GetHitpoints();
	}
	case UNIT_KNIGHT:
	{
		Knight man = Knight();
		return man.GetHitpoints();
	}

	default:
		return 0;
	}
}

int Adapter::getUnitAtk(int unit)
{
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		Infantryman man = Infantryman();
		return man.GetAttack();
	}
	case UNIT_MAGE:
	{
		Mag man = Mag();
		return man.GetAttack();
	}
	case UNIT_ARCHER:
	{
		Archer man = Archer();
		return man.GetAttack();
	}
	case UNIT_HEALER:
	{
		Healer man = Healer();
		return man.GetAttack();
	}
	case UNIT_KNIGHT:
	{
		Knight man = Knight();
		return man.GetAttack();
	}

	default:
		return 0;
	}
}

int Adapter::getUnitDef(int unit)
{ 
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		Infantryman man = Infantryman();
		return man.GetDefence();
	}
	case UNIT_MAGE:
	{
		Mag man = Mag();
		return man.GetDefence();
	}
	case UNIT_ARCHER:
	{
		Archer man = Archer();
		return man.GetDefence();
	}
	case UNIT_HEALER:
	{
		Healer man = Healer();
		return man.GetDefence();
	}
	case UNIT_KNIGHT:
	{
		Knight man = Knight();
		return man.GetDefence();
	}

	default:
		return 0;
	}
}

std::vector<int> Adapter::getCurrentArmy()
{
	return builderLeft.showArmy();
}

std::vector<int> Adapter::getCurrentArmy(int army)
{
	return builderLeftVec[army-1].showArmy();
}

void Adapter::addUnit(int unit)
{
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		auto unit = Infantryman();
		if (unit.GetCost() < money) {
			money -= unit.GetCost(); 
			builderLeft.buildInfantryman();
		}
	}
	break;
	case UNIT_MAGE:
	{
		auto unit = Mag();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeft.buildMag();
		}
	}
	break;
	case UNIT_ARCHER:
	{
		auto unit = Archer();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeft.buildArcher();
		}
	}
	break;
	case UNIT_HEALER:
	{
		auto unit = Healer();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeft.buildHealer();
		}
	}
	break;
	case UNIT_KNIGHT:
	{
		auto unit = Knight();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeft.buildKnight();
		}
	}
	break;
	}
}

void Adapter::addUnit(int unit, int army)
{
	switch (unit)
	{
	case UNIT_INFANTRY:
	{
		auto unit = Infantryman();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeftVec[army-1].buildInfantryman();
		}
	}
	break;
	case UNIT_MAGE:
	{
		auto unit = Mag();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeftVec[army - 1].buildMag();
		}
	}
	break;
	case UNIT_ARCHER:
	{
		auto unit = Archer();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeftVec[army - 1].buildArcher();
		}
	}
	break;
	case UNIT_HEALER:
	{
		auto unit = Healer();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeftVec[army - 1].buildHealer();
		}
	}
	break;
	case UNIT_KNIGHT:
	{
		auto unit = Knight();
		if (unit.GetCost() < money) {
			money -= unit.GetCost();
			builderLeftVec[army - 1].buildKnight();
		}
	}
	break;
	}
}

void Adapter::generatePair()
{
	AutomaticGenerator autogener = AutomaticGenerator();
	armies = std::make_unique<Pair>(std::move(*builderLeft.getArmy()), std::move(autogener.GenerateRandomArmy(money)));
}

void Adapter::generateMoves()
{
	Armies arm = Armies();
	arm.armies = std::vector<Pair>{ *armies };
	mgr = CombatManager();
	mgr.GenerateCombat(arm);
}

void Adapter::generatePair3()
{
	AutomaticGenerator autogener1 = AutomaticGenerator();
	AutomaticGenerator autogener2 = AutomaticGenerator();
	AutomaticGenerator autogener3 = AutomaticGenerator();

	armies1 = std::make_unique<Pair>(std::move(*builderLeftVec[0].getArmy()), std::move(autogener1.GenerateRandomArmy(money)));
	armies2 = std::make_unique<Pair>(std::move(*builderLeftVec[1].getArmy()), std::move(autogener2.GenerateRandomArmy(money)));
	armies3 = std::make_unique<Pair>(std::move(*builderLeftVec[2].getArmy()), std::move(autogener3.GenerateRandomArmy(money)));
}

void Adapter::generateMoves3()
{
	Armies arm = Armies();
	arm.armies = std::vector<Pair>{ *armies1, *armies2, *armies3 };
	mgr = CombatManager();
	mgr.GenerateCombat(arm);
}

CombatActionInfo Adapter::NextCombatState()
{
	CombatActionInfo cai{};
	auto& curTurn = mgr.GetCurrentTurn();
	if (!turnBeginning)
	{
		curEvent++;
		if (curTurn.events.size() <= curEvent || curEvent>8)
		{
			curEvent = -1;
			mgr.GetNextTurn();
			cai.state = ATTACK;
			turnBeginning = true;
		}
		else
		{
			cai.state = SPECIAL;
			cai.position = curEvent;
		}
		if(curEvent< curTurn.events.size()-1)
			if (curTurn.events[curEvent + 1].action.caster.side == curTurn.events[curEvent].action.caster.side)
			curEvent++;
	}
	else
	{
		turnBeginning = false;
		cai.state = IDLE;
	}
	return cai;
}

CombatActionInfo Adapter::FirstCombatState()
{
	for (int i = 0; i < 50;i++)
		mgr.GetPreviousTurn();
	turnBeginning = true;
	curEvent = -1;
	CombatActionInfo cai{};
	cai.state = IDLE;
	return cai;
}

CombatActionInfo Adapter::LastCombatState()
{
	for(int i = 0; i< 50;i++)
		mgr.GetNextTurn();
	turnBeginning = true;
	curEvent = -1;
	CombatActionInfo cai{};
	cai.state = IDLE;
	return cai;
}

CombatActionInfo Adapter::PrevCombatState()
{
	mgr.GetPreviousTurn();
	turnBeginning = true;
	curEvent = -1;
	CombatActionInfo cai{};
	cai.state = IDLE;
	return cai;


}

std::vector<Unit> Adapter::getLeftArmy()
{
	std::vector<Unit> toRet = std::vector<Unit>();
	//auto units = mgr.GetCurrentTurn().initialState.armies[0].left_army;
	//Army units;
	//if (turnBeginning)
	//{
	//	units = 
	//}



	auto& units = curEvent>0 ? mgr.GetCurrentTurn().events[curEvent].endState.armies[0].left_army : mgr.GetCurrentTurn().initialState.armies[0].left_army;

	for (int i = 0; i < units.units.size(); i++) {
		Unit newUnit = Unit();
		newUnit.type = (*(units.units[i])).GetName();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints() + (*(units.units[i])).Getcur_defence();
		newUnit.isBoosted = (*(units.units[i])).Getcur_defence() > 0;
		toRet.push_back(newUnit);
	}

	return toRet;
	
}

std::vector<Unit> Adapter::getRightArmy()
{
	std::vector<Unit> toRet = std::vector<Unit>();
	auto& units = curEvent>0 ? mgr.GetCurrentTurn().events[curEvent].endState.armies[0].right_army : mgr.GetCurrentTurn().initialState.armies[0].right_army;

	for (int i = 0; i < units.units.size(); i++) {
		Unit newUnit = Unit();
		newUnit.type = (*(units.units[i])).GetName();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints() + (*(units.units[i])).Getcur_defence();
		newUnit.isBoosted = (*(units.units[i])).Getcur_defence() > 0;
		toRet.push_back(newUnit);
	}
	return toRet;
}

std::vector<Unit> Adapter::getLeftArmy(int army)
{
	std::vector<Unit> toRet = std::vector<Unit>();
	//auto units = mgr.GetCurrentTurn().initialState.armies[0].left_army;
	//Army units;
	//if (turnBeginning)
	//{
	//	units = 
	//}



	auto& units = curEvent > 0 ? mgr.GetCurrentTurn().events[curEvent].endState.armies[army].left_army : mgr.GetCurrentTurn().initialState.armies[army].left_army;

	for (int i = 0; i < units.units.size(); i++) {
		Unit newUnit = Unit();
		newUnit.type = (*(units.units[i])).GetName();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints() + (*(units.units[i])).Getcur_defence();
		newUnit.isBoosted = (*(units.units[i])).Getcur_defence() > 0;
		toRet.push_back(newUnit);
	}

	return toRet;
}

std::vector<Unit> Adapter::getRightArmy(int army)
{
	std::vector<Unit> toRet = std::vector<Unit>();
	auto& units = curEvent > 0 ? mgr.GetCurrentTurn().events[curEvent].endState.armies[army].right_army : mgr.GetCurrentTurn().initialState.armies[army].right_army;

	for (int i = 0; i < units.units.size(); i++) {
		Unit newUnit = Unit();
		newUnit.type = (*(units.units[i])).GetName();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints();
		newUnit.hp = (*(units.units[i])).Getcur_hitpoints() + (*(units.units[i])).Getcur_defence();
		newUnit.isBoosted = (*(units.units[i])).Getcur_defence() > 0;
		toRet.push_back(newUnit);
	}
	return toRet;
}

