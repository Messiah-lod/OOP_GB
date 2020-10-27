#include "person.h"

Person::Person()
{
    m_name = "";
    m_age = 0;
    m_sex = false;
    m_weight = 0;
}

Person::Person(std::string name, Person::sex s, int age, int weight):
    m_name(name), m_age(age), m_sex(s), m_weight(weight){};

void Person::setSex(Person::sex s) {
    (s == Person::sex::male) ? m_sex = true : m_sex = false;
}
void Person::setName (std::string name){
    m_name = name;
}
void Person::setAge (int age){
    m_age = age;
}
void Person::setWeight (int weight){
    m_weight = weight;
}

void Person::print(){
    std::cout << "********************" << std::endl;
    std::cout << "Sex is " << (m_sex ? "male" : "female") << std::endl;
    std::cout << "Name is " << m_name << std::endl;
    std::cout << "Age is " << m_age << std::endl;
    std::cout << "Weight is " << m_weight << std::endl;
    std::cout << "********************" << std::endl;
}
