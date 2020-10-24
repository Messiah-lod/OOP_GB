#include "power.h"
#include <cmath>

Power::Power()
{
    a = 0;
    b = 0;
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
