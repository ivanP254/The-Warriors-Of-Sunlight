#pragma once
#include <algorithm>
#include "Army.h"
#include "Units.h"
#include <vector>
#include "SharedEnum.h"
#include "Action.h"

class Pair {
private:
    int counter = 1;
    Side side = Side::Left;

    bool Dead(Army& army)
    {
        return army.units.empty();
    }
public:
    bool RightDead();
    bool LeftDead();
    Pair(Army&& left_army, Army&& right_army) :
        left_army(std::move(left_army)), right_army(std::move(right_army)) 
    {

    };

    
    void RemoveDead();
    void Attack();

    Army left_army;
    Army right_army;
 
    Action Casts(bool& is_finished) {

        RemoveDead();
        if (counter >= (std::max)(size(left_army.units), size(right_army.units))) {
            is_finished = true;
            counter = 1;
        }
        if (size(left_army.units) == 0 || size(right_army.units) == 0) {
            is_finished = true;
            counter = 1;
        }

        if (side == Side::Left){
            if (counter < left_army.units.size()) {
                if (std::to_string(left_army.units[counter]->GetName()) == StaticName::unit_names[UNIT_ARCHER]) {
                    if (counter < ARCHER_RANGE) {
                        side = Side::Right;
                        Ability ability = Ability::Shot;
                        if (right_army.units.size())
                            ability = left_army.units[counter]->Skill(right_army.units[0]);
                        Position caster{side, counter};
                        Position target{Side::Right, 0};
                        Action action{caster, target, ability};
                        return action;
                    }
                }
                else {
                    side = Side::Right;
                    Ability ability = left_army.units[counter]->Skill(left_army.units[counter - 1]);
                    Position caster{ side, counter };
                    Position target{ Side::Left, counter-1 };
                    Action action{ caster, target, ability };
                    return action;
                }
            }
            side = Side::Right;
            }

        if (side == Side::Right) {
            if (counter < right_army.units.size()) {
                if (std::to_string(right_army.units[counter]->GetName()) == StaticName::unit_names[UNIT_ARCHER]) {
                    if (counter < ARCHER_RANGE) {
                        side = Side::Left;
                        Ability ability = Ability::Shot;
                            if(left_army.units.size())
                                ability = right_army.units[counter]->Skill(left_army.units[0]);
                        Position caster{ side, counter };
                        Position target{ Side::Right, 0 };
                        Action action{ caster, target, ability };
                        return action;
                    }
                }
                else {
                    counter++;
                    side = Side::Left;
                    Ability ability = right_army.units[counter-1]->Skill(right_army.units[counter - 2]);
                    Position caster{ side, counter-1 };
                    Position target{ Side::Right, counter - 2 };
                    Action action{ caster, target, ability };
                    return action;
                    
                    
                }
            }

            counter++;
            side = Side::Left;
        }
    }
};

