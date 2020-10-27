#include "fruit.h"

Fruit::Fruit()
{
    m_name = "";
    m_color = "";
}

std::string Fruit::getName(){
    return m_name;
}

std::string Fruit::getColor(){
    return m_color;
}
