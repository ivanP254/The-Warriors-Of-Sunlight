#pragma once
#include "Units.h"
#include "time.h"

// Методы

int AbstractIUnit::GetName()const
{
    return name;
}

int AbstractIUnit::GetAttack()const
{
    return attack;
}

void Knight::AddDefence(int def)
{
    cur_defence = (std::min)(99, cur_defence + def);
}

int AbstractIUnit::GetSKILLAttack()const
{
    return skill_attack;
}

int AbstractIUnit::TakeDamage(int damage)
{
    int gg = damage * 70 / 100;
    double c = damage * 70 % 1;
    cur_defence -= gg;

    if (c == 0)
    {
        if (cur_defence > 0)
        {
            {
                cur_hitpoints -= damage - gg;
            }
        }
        else if (cur_defence <= 0)
        {
            cur_hitpoints -= damage - gg;

            cur_defence = 0;

            if (cur_hitpoints <= 0)
            {
                cur_hitpoints = 0;
            }
            else if (cur_hitpoints > 99)
            {
                cur_hitpoints = 99;
            }
            else
            {
                return cur_hitpoints;
            }
        }
    }
    else if (c > 0.5)
    {
        c = 1;
        cur_defence -= c;
        cur_hitpoints -= damage - gg;
    }
    return cur_hitpoints;
}

int AbstractIUnit::GetDefence()const
{
    return defence;
}

int AbstractIUnit::Getcur_defence()const
{
    return cur_defence;
}

void AbstractIUnit::DoAttack(std::unique_ptr<AbstractIUnit>& target)
{
    target->TakeDamage(GetAttack());
}

int AbstractIUnit::Getcur_hitpoints()const
{
    return cur_hitpoints;
}

int AbstractIUnit::Heal(int heal)
{
    cur_hitpoints = (std::min)(hitpoints, cur_hitpoints + heal);
    return cur_hitpoints;
}

void AbstractIUnit::RemoveDefence(int ddef)
{
    cur_defence = (defence, cur_defence - ddef);
    if (cur_defence <= 0)
    {
        cur_defence = 0;
    }
}

int AbstractIUnit::GetHitpoints()const
{
    return hitpoints;
}

int AbstractIUnit::GetCost()const
{
    return cost;
}



//К классу пехотинца
Infantryman::Infantryman()
{
    name = UNIT_INFANTRY;
    hitpoints = 50;
    attack = 20;
    defence = 20;
    cost = 15;
    cur_hitpoints = 50;
    cur_defence = 20;
    def = 20;
}

Ability Infantryman::Skill(std::unique_ptr<AbstractIUnit>& target)
{
    //srand(time(NULL));
    //if (rand() % 11 > 2)
    //{
        target->AddDefence(def);
        return Ability::Enforce;
    //}
    //else
    //{
    //    return Ability::NoAbility;
    //}
}

std::unique_ptr<AbstractIUnit> Infantryman::Clone()
{
    return std::make_unique<Infantryman>(*this);
}


//К классу лучника 
Archer::Archer()
{
    name = UNIT_ARCHER;
    hitpoints = 40;
    attack = 35;
    defence = 25;
    cost = 30;
    cur_hitpoints = 40;
    cur_defence = 25;
    skill_attack = 75;
}

Ability Archer::Skill(std::unique_ptr<AbstractIUnit>& target)
{   
    //srand(time(NULL));
    //if (rand() % 11 > 4)
    //{
        target->TakeDamage(GetSKILLAttack());
        return Ability::Shot;
    //}
    //else
    //{
    //    return Ability::NoAbility;
    //}
}

std::unique_ptr<AbstractIUnit> Archer::Clone()
{
    return std::make_unique<Archer>(*this);
}


//К классу мага 
Mag::Mag()
{
    name = UNIT_MAGE;
    hitpoints = 30;
    attack = 30;
    defence = 10;
    cost = 80;
    cur_hitpoints = 30;
    cur_defence = 10;
}

Ability Mag::Skill(std::unique_ptr<AbstractIUnit>& target)
{
    //srand(time(NULL));
    //if (rand() % 11 > 8)
    //{
        target->Clone();
        return Ability::Clone;
    //}
    //else
    //{
    //    return Ability::NoAbility;
    //}
}

std::unique_ptr<AbstractIUnit> Mag::Clone()
{
    return std::make_unique<Mag>(*this);
}


//К классу целитель
Healer::Healer()
{
    name = UNIT_HEALER;
    hitpoints = 30;
    attack = 30;
    defence = 10;
    cost = 80;
    cur_hitpoints = 30;
    cur_defence = 10;
    heal = 15;
}

Ability Healer::Skill(std::unique_ptr<AbstractIUnit>& target)
{
    srand(time(NULL));
    //if (rand() % 11 > 6)
    //{
        target->Heal(heal);
        return Ability::Heal;
    //}
    //else
    //{
    //    return Ability::NoAbility;
    //}
}

std::unique_ptr<AbstractIUnit> Healer::Clone()
{
    return std::make_unique<Healer>(*this);
}


//К классу рыцаря
Knight::Knight()
{
    name = UNIT_KNIGHT;
    hitpoints = 70;
    attack = 20;
    defence = 50;
    cost = 80;
    cur_hitpoints = 70;
    cur_defence = 50;
}

Ability Knight::Skill(std::unique_ptr<AbstractIUnit>& target)
{
    return Ability::Idle;
}

std::unique_ptr<AbstractIUnit> Knight::Clone()
{
    return std::make_unique<Knight>(*this);
}

