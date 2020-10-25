#include "power.h"
#include <cmath>

Power::Power()
{
}

void Power::set(int x, int y)
{
    a = x;
    b = y;
}

int Power::calculate()
{
    return pow(a,b);
}
