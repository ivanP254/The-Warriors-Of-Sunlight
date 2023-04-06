#pragma once
#include <iostream>
#include <cstdlib>
#include "SharedEnum.h"
#include <memory>


class AbstractIUnit
{
protected:
    //Поля 
    int name;
    int hitpoints;
    int attack;
    int skill_attack;
    int defence;
    int cost;
    int cur_hitpoints;
    int cur_defence;
    int heal;
    int def;

public:
    //методы
    int GetName()const;
    int GetAttack()const;
    int GetSKILLAttack()const;
    int GetDefence()const;
    int GetHitpoints()const;
    int GetCost()const;
    int TakeDamage(int damage);
    int Heal(int heal);
    void RemoveDefence(int ddef);
    virtual void AddDefence(int def) = 0;
    int Getcur_hitpoints()const;
    int Getcur_defence()const;
    void DoAttack(std::unique_ptr<AbstractIUnit>& target);
    virtual Ability Skill(std::unique_ptr<AbstractIUnit>& target) = 0;
    virtual std::unique_ptr<AbstractIUnit> Clone() = 0;
};


//Класс пехотинца
class Infantryman : public AbstractIUnit
{
    Ability Skill(std::unique_ptr<AbstractIUnit>& target)override;
    std::unique_ptr<AbstractIUnit> Clone();
    void AddDefence(int def) {};

public:
    Infantryman();
};

//Класс лучника
class Archer : public AbstractIUnit

{
    Ability Skill(std::unique_ptr<AbstractIUnit>& target)override;
    std::unique_ptr<AbstractIUnit> Clone();
    void AddDefence(int def) {};
public:

    Archer();
};

//Класс мага
class Mag : public AbstractIUnit
{
    Ability Skill(std::unique_ptr<AbstractIUnit>& target)override;
    std::unique_ptr<AbstractIUnit> Clone();
    int Heal(int heal) {};
    void AddDefence(int def) {};
public:
    Mag();
};

//Класс целитель 
class Healer : public AbstractIUnit
{
    Ability Skill(std::unique_ptr<AbstractIUnit>& target)override;
    std::unique_ptr<AbstractIUnit> Clone();
    void AddDefence(int def) {};
public:
    Healer();
};

//Класс рыцарь без скила
class Knight : public AbstractIUnit
{
    Ability Skill(std::unique_ptr<AbstractIUnit>& target)override;
    std::unique_ptr<AbstractIUnit> Clone();
public:

    void AddDefence(int def);
    Knight();
};