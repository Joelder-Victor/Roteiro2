#include "SheetManagementSystem.h"
#include "BudgetOverflowException.h"
#include "EmployeeDoesExistException.h"


SheetManagementSystem::SheetManagementSystem(double maximiumBudget)
    : maximiumBudget(maximiumBudget)
{
}

void SheetManagementSystem::setEmployee(Employee *employee)
{
    employees.push_back(employee);
}
double SheetManagementSystem::calculateTotalSheetValue()
{
    double payroll;
    for (size_t i = 0; i < employees.size(); i++)
    {
        payroll += employees[i]->calculateSalary();
    }
    if(payroll> maximiumBudget)
        throw BudgetOverflowException();
    return payroll;
}
double SheetManagementSystem::consultEmployeeSalary(const string name)
{
    
    for (size_t i = 0; i < employees.size(); i++)
    {
        if (employees[i]->getName()==name)
        {
           
            return employees[i]->calculateSalary(); 
        }
            

    }
    throw EmployeeDoesExistException();
}
