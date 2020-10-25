/* Created by Maksim V. Chizhov
* IDE: qtcreator
* Lesson 1 OOP
*/


#include <iostream>
#include "power.h"
#include "rgba.h"
#include "stack.h"


int main()
{
    std::cout << "***Task 1.1****" << std::endl;
    Power pwr;
    pwr.set(2, 4);
    std::cout << pwr.calculate() << std::endl;

    std::cout << "***Task 1.2****" << std::endl;
    RGBA rgba(120,0,240,255);
 //   RGBA rgba;
    rgba.print();

    std::cout << "***Task 1.3****" << std::endl;
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();

    return 0;
}
