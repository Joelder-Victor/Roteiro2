#pragma once

#include <string>
using std::string;

class Employee
{
private:
    string name;
    int registration;

public:
    Employee(const string &, const int &);

    void setName(const string &);
    string getName() const;

    void setRegistration(const int &);
    int getRegistration() const;

    virtual double calculateSalary() const = 0;
    virtual void print() const;
};
