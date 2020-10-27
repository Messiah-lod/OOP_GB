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
    Student oleg("Oleg", Person::male, 21, 70, 2014);
    Student nata("Nata", Person::female, 19, 50, 2014);
    Student ira("Ira", Person::female, 18, 45, 2012);
    ira.print();

    std::cout << "***Task 2.2****" << std::endl;
    Apple a("red");
    Banana b;
    GrannySmith c;
    std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
    std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
    std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n";

    std::cout << "***Task 2.3****" << std::endl;
    /*
     * 1. Создать класс "card"
     * 2. Класс колоды карт "carddeck" (с набивкой экземпляров card) с
     *      рандомным изъятием из колоды при сдаче, возможностью задать
     *      стартовое кол-во колод, участвующих в игре
     * 3. Создать базовый класс human (имеет имя и может принимать карты)
     * 4. Наследовать от human класс diller, автоматически просчитывает
     *      принятые карты и сам принимает решение брать еще или хватит
     * 5. Наследовать от human класс player, который создает
     *      запросы пользователю брать/не брать карты
     * 6. Как вариант весь игровой процесс поместить в класс blackDjack
     *      для возможности дальнейшего использования в других проектах
     */

    return 0;
}
