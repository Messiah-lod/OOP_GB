#include "student.h"

int Student::count = 0;//инициализация статической перемнной класса

Student::Student(){
    count++;
}

Student::~Student(){
    count--;
}

Student::Student(std::string name, Person::sex s, int age, int weight, int year):
Person (name,s,age,weight), m_yearStudy(year){
    count++;
};

void Student::setYearStudy(int year){
    m_yearStudy = year;
}

int Student::addYearStudy(){
    return ++m_yearStudy;
}

void Student::print(){
    std::cout << "********************" << std::endl;
    std::cout << "Sex is " << (m_sex ? "male" : "female") << std::endl;
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "Age is " << m_age << std::endl;
    std::cout << "Weight is " << m_weight << std::endl;
    std::cout << "Year study is " << m_yearStudy << std::endl;
    std::cout << "Number student is " << count << std::endl;
    std::cout << "********************" << std::endl;
}
