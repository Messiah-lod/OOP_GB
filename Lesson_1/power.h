#ifndef POWER_H
#define POWER_H

#pragma once

class Power
{
private:
    int a = 0;
    int b = 0;
public:
    Power();
    void set(int x, int y);
    int calculate();
};

#endif // POWER_H
