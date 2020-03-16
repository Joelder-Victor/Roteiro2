#pragma once

#include "Employee.h"

class SalariedEmployee :public Employee
{
private:
    double salary;
public:
    SalariedEmployee(const string &, const int &, const double =0.0);
    
    void setSalary(double);
    double getSalary() const;

    virtual double calculateSalary()const;
    virtual void print() const;
};
