#include "CombatManager.h"
#include <minmax.h>


void CombatManager::GenerateCombat(Armies& armies)
{
    std::vector<Event>empty{};


    turns.emplace_back(empty, armies);

    for (;;)
    {
        for (auto& arm : armies.armies)
        {
            if (!arm.LeftDead() && !arm.RightDead())
            {
                arm.Attack();
                arm.RemoveDead();
            }
        }
        Armies initial = armies;

        std::vector<Event>events{};
        for (int i = 0; i<armies.armies.size();i++)
        {

            bool finishedCasting = false;
            while (!finishedCasting)
            {
                Action act = armies.armies[i].Casts(finishedCasting);
                if (act.ability != Ability::NoAbility)
                {
                    act.caster.row = i;
                    act.target.row = i;
                    ClearDead(armies);
                    events.emplace_back(act, armies);
                }                
            }
        }

        turns.emplace_back(events, initial);
        if (CheckAllFinished(armies))
            break;
    }
    turns.emplace_back(empty, armies);
}

const Turn& CombatManager::GetCurrentTurn() const
{
    return turns[currentTurn];
}

const Turn& CombatManager::GetNextTurn()const
{
    currentTurn = (std::min)(currentTurn + 1, (int)turns.size() - 1);
    return turns[currentTurn];
}

const Turn& CombatManager::GetPreviousTurn()const
{
    currentTurn = (std::max)(0, currentTurn-1);
    return turns[currentTurn];
}

const Turn& CombatManager::GetLastTurn()const
{
    return turns.back();
}

const Turn& CombatManager::GetFirstTurn()const
{
    return turns.front();
}

bool CombatManager::CheckAllFinished(Armies& armies)
{
    bool Done = true;
    for (auto& arm : armies.armies)
    {
        Done &= (arm.LeftDead() || arm.RightDead());
    }
    return Done;
}

void CombatManager::ClearDead(Armies& armies)
{
    for (auto& arm : armies.armies)
    {
        arm.RemoveDead();
    }
}
