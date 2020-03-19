#pragma once
#define  MAX 50
#include <string>
using std::string;

class ClientData
{
protected:
    int accountNumber;
    char firstName[MAX];
    double balance;

public:
   
    ClientData(int = 0, string = "", double = 0.0);

    void setAccountNumber(int);
    int getAccountNumber() const;


    void setFirstName(string);
    string getFirstName() const;

    void setBalance(double);
    double getBalance() const;
};
