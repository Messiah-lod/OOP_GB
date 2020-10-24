#include <iostream>
#include "power.h"
#include "rgba.h"
#include "stack.h"


class Date{
private:
    //поля
  int day;
  int month;
  const int year;

public:
  //конструктор по умолчанию
  Date():year(2000){ //в круглых скобках можем инициализхировать константы (и не только) СПИСОК ИНИЦИАЛИЗАЦИИ
      day = 1;
      month = 1;
    //  year = 2000;
  }
  //конструктор с параметрами
  Date(int d, int m, int y):year(y){//в круглых скобках можем инициализхировать константы (и не только) СПИСОК ИНИЦИАЛИЗАЦИИ
      day = d;
      month = m;
 //     year = y;
  }

  ~Date(){
    std::cout << "delete object" << std::endl;
  }

    //метод
  void print(){
      std::cout << day << "." << month
                << "." << year << std::endl;
  }

  void setDate(int d, int m){//, int y) {
      day = d;
      month = m;
 //     year = y;
  }

  void setDay(int d) {
      day = d;
  }

  void setMonth(int m) {
      month = m;
  }

  void setYear(){//int y) {
 //     year = y;
  }

  int getDay(){
      return day;
  }
  int getMonth(){
      return month;
  }
  int getYear(){
      return year;
  }

};




int main()
{
    std::cout << "***Task 1.1****" << std::endl;
    Power pwr;
    pwr.set(2, 4);
    std::cout << pwr.calculate() << std::endl;

    std::cout << "***Task 1.2****" << std::endl;
    RGBA rgba(120,0,240,255);
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
