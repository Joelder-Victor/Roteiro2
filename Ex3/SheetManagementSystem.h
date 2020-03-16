#pragma once


#include <vector>
using std::vector;

#include "Employee.h"



class SheetManagementSystem
{
private:
    vector <Employee *> employees;
    double maximiumBudget;
public:
    SheetManagementSystem(double maximiumBudget = 0.0);

    void setEmployee(Employee *);
    double calculateTotalSheetValue();
    double consultEmployeeSalary(const string);

};

