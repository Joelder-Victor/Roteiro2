#include <iostream>
using std::cout;

#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const string &name, const int &reg, const double salary)
    :Employee(name,reg)
{
    setSalary(salary);
}

void SalariedEmployee::setSalary(double salary) 
{
    this->salary = (salary<0.0)?0.0:salary;
}
double SalariedEmployee::getSalary()const
{
    return salary;
}
double SalariedEmployee::calculateSalary() const
{
    return getSalary();
}
void SalariedEmployee::print()const
{
    cout<<"salaried employee: ";
    Employee::print();
}