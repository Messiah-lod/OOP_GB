#include "student.h"

Student::Student(){}

Student::Student(std::string name, Person::sex s, int age, int weight, int year):
Person (name,s,age,weight), m_yearStudy(year){};

void Student::setYearStudy(int year){
    m_yearStudy = year;
}

int Student::addYearStudy(){
    return ++m_yearStudy;
}

//void print(){
//    std::cout << "Sex is " << (getSex() ? "male" : "female") << std::endl;
//    std::cout << "Name is " << getName() << std::endl;
//    std::cout << "Age is " << m_age << std::endl;
//    std::cout << "Weight is " << m_weight << std::endl;
 //     std::cout << "Year study is " << m_yearStudy << std::endl;
//}
