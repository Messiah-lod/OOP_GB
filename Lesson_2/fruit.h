#ifndef FRUIT_H
#define FRUIT_H

#pragma once

#include <iostream>

class Fruit
{
protected:
    std::string m_name;
    std::string m_color;
public:
    Fruit();
    std::string getName();
    std::string getColor();
};

#endif // FRUIT_H
