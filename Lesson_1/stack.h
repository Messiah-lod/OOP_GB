#ifndef STACK_H
#define STACK_H
#pragma once

#include <iostream>

class Stack
{
public:
    Stack();
     void reset();
     bool push(int value);
     int pop();
     void print();
private:
    int mass[10] = {0};
    int lenght = 0;
};

#endif // STACK_H
