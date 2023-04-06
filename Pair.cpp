#include "Pair.h"

bool Pair::RightDead() {
    return Dead(right_army);
}
bool Pair::LeftDead ()
{
    return Dead(left_army);
}

bool Dead(Army& army)
{
    if (army.units.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Pair::RemoveDead() {
    left_army.units.erase(std::remove_if(left_army.units.begin(), left_army.units.end(), [](std::unique_ptr<AbstractIUnit>& unit) {return !unit->Getcur_hitpoints(); }),
        left_army.units.end());
    right_army.units.erase(std::remove_if(right_army.units.begin(), right_army.units.end(), [](std::unique_ptr<AbstractIUnit>& unit) {return !unit->Getcur_hitpoints(); }),
        right_army.units.end());
}
void Pair::Attack(){
    left_army.units[0]->DoAttack(right_army.units[0]);
    right_army.units[0]->DoAttack(left_army.units[0]);
}

