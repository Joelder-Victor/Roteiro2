#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <vector>
using std::vector;

#include "Employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "CommissionEmployee.h"
#include "SheetManagementSystem.h"
#include "EmployeeDoesExistException.h"
#include "BudgetOverflowException.h"

void virtualViaPointer(const Employee *const);
void virtualViaReference(const Employee &);

int main()
{
    cout << fixed << setprecision(2);

    SalariedEmployee salariedEmployee(
        "John",11111111,6000.0);

    HourlyEmployee hourlyEmployee(
        "Karen",222222222,16.75,40);

    CommissionEmployee commissionEmployee(
        "Sue",333333333, 10000, .06,5000.0);

    SheetManagementSystem s1(5000.0);

    vector<Employee *>employees(3);
    employees[0]=&salariedEmployee;
    employees[1]=&hourlyEmployee;
    employees[2]=&commissionEmployee;

    for (size_t i = 0; i < employees.size(); i++)
    {
        s1.setEmployee(employees[i]);
    }
    

    for (size_t i = 0; i < employees.size(); i++)
         virtualViaReference(*employees[i]);

    try
    {
        s1.calculateTotalSheetValue();
    }
    catch(BudgetOverflowException & budget)
    {
        std::cerr << budget.what() << '\n';
    }
    try
    {
        s1.consultEmployeeSalary("Sue");
    }
    catch(EmployeeDoesExistException &employee)
    {
        std::cerr << employee.what() << '\n';
    }
    
    return 0;

}

void virtualViaReference(const Employee &baseClassRef)
{
    baseClassRef.print();
    cout<<"\nSalary: "<<baseClassRef.calculateSalary()<<"\n\n";
}