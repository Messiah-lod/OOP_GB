#ifndef PERSON_H
#define PERSON_H

#pragma once

#include <iostream>

class Person
{
protected:
    std::string m_name;
    unsigned int m_age;
    bool m_sex;
    unsigned int m_weight;

public:
    enum sex{female, male};
    Person();
    Person(std::string name, Person::sex s, int age, int weight);
    void setSex(Person::sex s);
    void setName (std::string name);
    void setAge (int age);
    void setWeight (int weight);
    void print();
    std::string getName() {return m_name;};
    unsigned int getAge() {return m_age;};
    Person::sex getSex() {return (m_sex ? Person::male : Person::female);};
    unsigned int getWeight() {return m_weight;};
};

#endif // PERSON_H
