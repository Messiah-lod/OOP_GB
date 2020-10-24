#include "stack.h"

Stack::Stack()
{
}

void Stack::reset(){
    lenght = 0;
    for(int i =0; i < 10; i++) {mass[i] = 0;}
}

bool Stack::push(int value){
    if(lenght < 10){
    mass[++lenght] = value;
    return true;
    } else {
        std::cout << "Stack is overflow!" << std::endl;
        return false;
    }
}

int Stack::pop(){
    if (lenght > 0) return mass[lenght--];
    else std::cout << "Stack is empty!" << std::endl;
    return 0;
}

void Stack::print(){
    std::cout << "( ";
    for(int i =1; i < lenght+1; i++) {
        std::cout << mass[i] << " ";
    }
    std::cout << ")" << std::endl;
}
