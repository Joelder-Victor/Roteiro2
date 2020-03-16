#pragma once

#include "Employee.h"

class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const string &, const int &,
                       double = 0.0, double = 0.0,double = 0.0);

    void setGrossSales(double);
    double getGrossSales() const;

    void setCommissionRate(double);
    double getCommissionRate() const;

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double calculateSalary() const;
    virtual void print() const;

private:
    double baseSalary;
    double grossSales;
    double commissionRate;
};