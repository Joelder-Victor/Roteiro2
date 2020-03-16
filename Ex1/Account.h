#pragma once
#include <string>
using std::string;
#include <cstring>

#define MAX 100

#include "IAccount.h"

class Account :public IAccount
{
protected:
    char nameClient[MAX];
    double monthSalary;
    char numberAccount[MAX];
    double limit;
    double balance;
    void setBalance(double);
public:
    Account(string , double, string, double);
    void deposit(double);
    void withdrawMoney(double);

    void setNameClient(string );
    void setMonthSalary(double);
    void setNumberAccount(string);
    void setLimit();


    string getNameClient();
    double getMonthSalary();
    string getNumberAccount();
    double getLimit();
    double getBalance();

    void print();

    
};

