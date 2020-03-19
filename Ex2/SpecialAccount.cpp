#include "SpecialAccount.h"

SpecialAccount::SpecialAccount(
     string name, double salary, 
     string account, double balance):
    Account(name,salary,account,balance)
{
    setLimit();
}
void SpecialAccount::setLimit()
{
    limit=3*getMonthSalary();
}