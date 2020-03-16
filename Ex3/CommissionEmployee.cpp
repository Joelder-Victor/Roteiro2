#include <iostream>
using std::cout;

#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(
    const string &name, const int &reg,
    double sales, double rate, double salary)
    : Employee(name, reg)
{
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}

void CommissionEmployee::setGrossSales(double sales)
{
    grossSales = (sales < 0.0) ? 0.0 : sales;
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
    commissionRate = (rate > 0.0 && rate < 1.0) ? rate : 0.0;
}

double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
void CommissionEmployee::setBaseSalary(double salary)
{
    baseSalary = (salary < 0.0) ? 0.0 : salary;
}
double CommissionEmployee::getBaseSalary() const
{
    return baseSalary;
}
double CommissionEmployee::calculateSalary() const
{
    return getBaseSalary()+(getCommissionRate() * getGrossSales());
}

void CommissionEmployee::print() const
{
    cout << "commission employee: ";
    Employee::print();
    cout << "\nBased Salary: "<< "\ngross sales: " << getGrossSales()
         << "\ncommission rate: " << getCommissionRate();
}