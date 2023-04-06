#pragma once
#include "Army.h"
#include "Pair.h"
#include "Armies.h"
#include <vector>
#include "Units.h"
#include "SharedEnum.h"




// Ѕазовый класс ArmyBuilder объ€вл€ет интерфейс дл€ поэтапного
// построени€ армии и предусматривает его реализацию по умолчанию
class BuilderIArmy
{
protected:
	std::unique_ptr<Army> p;
	
public:

	virtual void createArmy() {}
	virtual void buildInfantryman() {}
	virtual void buildArcher() {}
	virtual void buildMag() {}
	virtual void buildKnight() {}
	virtual void buildHealer() {}
	virtual std::unique_ptr<Army> getArmy() { return std::move(p);}
	virtual std::vector<int> showArmy() {
		std::vector<int> toRet = std::vector<int>();
		for (int i = (*p).units.size() - 1; i >= 0; i--) {
			toRet.push_back((*((*p).units[i])).GetName());
		}
		return toRet;
	}
};

class Left_ArmyBuilder : public BuilderIArmy
{
public:
	void createArmy() {  p = std::make_unique<Army>(); }
	void buildInfantryman() { p->AddUnit(std::make_unique<Infantryman>()); }
	void buildArcher() { p->AddUnit(std::make_unique<Archer>()); }
	void buildMag() { p->AddUnit(std::make_unique<Mag>()); }
	void buildHealer() { p->AddUnit(std::make_unique<Healer>()); }
	void buildKnight() { p->AddUnit(std::make_unique<Knight>()); }

};

class Right_ArmyBuilder : public BuilderIArmy
{
public:
	void createArmy() { p = std::make_unique<Army>(); }
	void buildInfantryman() { p ->AddUnit(std::make_unique<Infantryman>()); }
	void buildArcher() { p->AddUnit(std::make_unique<Archer>()); }
	void buildMag() { p->AddUnit(std::make_unique<Mag>()); }
	void buildHealer() { p->AddUnit(std::make_unique<Healer>()); }
	void buildKnight() { p->AddUnit(std::make_unique<Knight>());}
};

	//  ласс-распор€дитель, поэтапно создающий армию той или иной стороны.
	// »менно здесь определен алгоритм построени€ армии.

	class Director
	{
	public:

		std::unique_ptr<Army> createArmy1(BuilderIArmy& builder)
		{
			auto a = builder.getArmy();
			return(a);
		}
		std::unique_ptr<Army> createArmy2(BuilderIArmy& builder1)
		{
			return(builder1.getArmy());
		}
	};

class Creator
{
	Director director{};
	std::vector<Left_ArmyBuilder> left_builders;
	std::vector<Right_ArmyBuilder> right_builders;

private:
	Side side;

public:
	void BuildingLeftArmy()
	{
		Left_ArmyBuilder builder;
		builder.createArmy();
		left_builders.push_back(std::move(builder));
		side = Side::Left;
	}
	void BuildingRightArmy()
	{
		Right_ArmyBuilder builder;
		builder.createArmy();
		right_builders.push_back(std::move(builder));
		side = Side::Right;
	}
	void buildInfantry() { 
		if (side == Side::Left) {
			left_builders.back().buildInfantryman();
		}
		if (side == Side::Right) {
			right_builders.back().buildInfantryman();
		}
	}
	void buildHealer() {
		if (side == Side::Left) {
			left_builders.back().buildHealer();
		}
		if (side == Side::Right) {
			right_builders.back().buildHealer();
		}
	}
	void buildArcher() {
		if (side == Side::Left) {
			left_builders.back().buildArcher();
		}
		if (side == Side::Right) {
			right_builders.back().buildArcher();
		}
	}
	void buildMag() {
		if (side == Side::Left) {
			left_builders.back().buildMag();
		}
		if (side == Side::Right) {
			right_builders.back().buildMag();
		}
	}
	void buildKnight() {
		if (side == Side::Left) {
			left_builders.back().buildKnight();
		}
		if (side == Side::Right) {
			right_builders.back().buildKnight();
		}
	}

	std::unique_ptr<Armies> getresult()
	{
		std::unique_ptr<Armies> arms = std::make_unique<Armies>();
		
		for (int i = 0; i < left_builders.size() && i < right_builders.size(); i++)
		{
			std::unique_ptr<Army> left = std::move(director.createArmy1(left_builders[i]));
			std::unique_ptr<Army> right = std::move(director.createArmy2(right_builders[i]));
			Pair pair{ std::move(*left), std::move(*right) };
			arms->armies.push_back(std::move(pair));
		}
		return std::move(arms);
	};
};