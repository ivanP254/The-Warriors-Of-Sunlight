#pragma once
#include"Defines.h"
#include"BuilderIArmy.h"
#include"Units.h"
#include"AutomaticGenerator.h"
#include"CombatManager.h"

struct CombatActionInfo
{	
	int state;
	int position;
};
class Adapter 
{
private:
	int money;
	Left_ArmyBuilder builderLeft;
	std::unique_ptr<Pair> armies;
	CombatManager mgr;
	int curEvent = -1;
	bool turnBeginning = true;

	std::vector<Left_ArmyBuilder> builderLeftVec;
	std::unique_ptr<Pair> armies1;
	std::unique_ptr<Pair> armies2;
	std::unique_ptr<Pair> armies3;
public:
	Adapter();
	int getCurrentMoney();
	int getUnitCost(int unit);
	int getUnitHp(int unit);
	int getUnitAtk(int unit);
	int getUnitDef(int unit);
	std::vector<int> getCurrentArmy();
	std::vector<int> getCurrentArmy(int army);
	void addUnit(int unit);
	void addUnit(int unit, int army);
	void generatePair();
	void generateMoves();
	void generatePair3();
	void generateMoves3();
	CombatActionInfo NextCombatState();
	CombatActionInfo PrevCombatState();
	CombatActionInfo FirstCombatState();
	CombatActionInfo LastCombatState();
	std::vector<Unit> getLeftArmy();
	std::vector<Unit> getRightArmy();
	std::vector<Unit> getLeftArmy(int army);
	std::vector<Unit> getRightArmy(int army);
};