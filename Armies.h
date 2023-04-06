#pragma once
#include <vector>
#include "Pair.h"

class Armies{
public:
    std::vector<Pair> armies;
    Armies Clone()
    {
        return *this;
    }
};
