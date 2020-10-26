/* Created by Maksim V. Chizhov
* IDE: qtcreator
* Lesson 2 OOP
*/


#include <iostream>
#include "./Lesson_2/person.h"
#include "./Lesson_2/student.h"
#include "./Lesson_2/apple.h"
#include "./Lesson_2/banana.h"
#include "./Lesson_2/grannysmith.h"

int main()
{
    std::cout << "***Task 2.1****" << std::endl;
    Student maks("Maks", Person::male, 20, 80, 2010);
    maks.print();
    maks.addYearStudy();
    std::cout << "Year Study = " << maks.getYearStudy() << std::endl;
    maks.setYearStudy(2020);
    std::cout << "Year Study = " << maks.getYearStudy() << std::endl;

    std::cout << "***Task 2.2****" << std::endl;
    Apple a("red");
    Banana b;
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    std::cout << "***Task 2.3****" << std::endl;


    return 0;
}
