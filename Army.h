#pragma once
#include "Units.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#include <iterator>
#include <iostream>
#include <functional>
class Army
{
public:
    Army() = default;
    Army(const Army&);
    std::vector<std::unique_ptr<AbstractIUnit>>units;
    void AddUnit(std::unique_ptr<AbstractIUnit>&& unit);
    
};
