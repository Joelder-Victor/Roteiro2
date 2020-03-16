#include <iostream>
using std::cout;

#include "Employee.h"

Employee::Employee(const string &name, const int &reg)
    :name(name), registration(reg)
{
}
void Employee::setName(const string &name)
{
    this->name = name;
}
void Employee::setRegistration(const int &reg)
{
    registration = reg;
}
void Employee::print() const
{
    cout<<"Name: "<<getName()<<' '
        <<"\nRegistration: "<<getRegistration();
}
string Employee::getName() const
{
    return name;
}

int Employee::getRegistration()const
{
    return registration;
}