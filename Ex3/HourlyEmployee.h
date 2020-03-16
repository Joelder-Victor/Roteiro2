#pragma once

#include "Employee.h"

class HourlyEmployee :public Employee
{
private:
    double wage;
    double hours;
public:
    HourlyEmployee(const string &, const int &,
                 double = 0.0, double = 0.0);

    void setWage(double);
    double getWage()const;

    void setHours(double);
    double getHours()const;

    virtual double calculateSalary()const;
    virtual void print()const;
    
};