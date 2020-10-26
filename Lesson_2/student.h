#ifndef STUDENT_H
#define STUDENT_H

#pragma once

#include "person.h"

class Student : public Person
{
private:
    int m_yearStudy = 2000;
public:
    Student();
    Student(std::string name, Person::sex s, int age, int weight, int year);
    void setYearStudy(int year);
    int addYearStudy();
    int getYearStudy(){return m_yearStudy;};
//    void print();
};

#endif // STUDENT_H
