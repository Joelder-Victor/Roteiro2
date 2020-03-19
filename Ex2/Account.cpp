#include "Account.h"
#include "BalanceNotAvailableException.h"
#include <iostream>
using std::cout;
using std::endl;

Account::Account(string name, double salary, string account, double balance)
{
    setBalance(balance);
    setNameClient(name);

    setNumberAccount(account);
    setMonthSalary(salary);
    setLimit();
}
void Account::deposit(double value)
{
    setBalance(balance + value);
}

void Account::withdrawMoney(double value)
{
    try
    {
        if (value > balance)
            throw BalanceNotAvailableException();
        else
            setBalance(getBalance()-value);
    }
    catch(BalanceNotAvailableException &balanceNotAvailableException)
    {
        cout<<"Exception occurred: "
            <<balanceNotAvailableException.what()<<endl;
    }
}

void Account::setNameClient(string name)
{
    const char *nameValue = name.data();
    int length = name.size();
    length = (length == MAX ? MAX - 1 : length);
    strncpy(nameClient, nameValue, length);
    nameClient[length] = '\0';
}
void Account::setMonthSalary(double salary)
{
    this->monthSalary = salary;
}
void Account::setNumberAccount(string account)
{
    const char *nameValue = account.data();
    int length = account.size();
    length = (length == MAX ? MAX - 1 : length);
    strncpy(numberAccount, nameValue, length);
    numberAccount[length] = '\0';
}
void Account::setLimit()
{
    this->limit = (2 * getMonthSalary());
}
void Account::setBalance(double balance)
{
    this->balance = balance;
}
string Account::getNameClient()
{
    return nameClient;
}
double Account::getMonthSalary()
{
    return monthSalary;
}
string Account::getNumberAccount()
{
    return numberAccount;
}
double Account::getLimit()
{
    return limit;
}
double Account::getBalance()
{
    return balance;
}
void Account::print()
{
    cout << "Name: " << getNameClient()
         << "\nSalary: " << getMonthSalary()
         << "\nAccount Number: " << getNumberAccount()
         << "\nLimit: " << getLimit() << endl;
}