#ifndef APPLE_H
#define APPLE_H

#pragma once

#include "fruit.h"

class Apple : public Fruit
{
public:
    Apple();
    Apple(std::string name);
};

#endif // APPLE_H
