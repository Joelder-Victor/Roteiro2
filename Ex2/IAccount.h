#pragma once

class IAccount
{
private:
    
public:
    
    virtual void withdrawMoney(double value)=0;
    virtual void deposit(double value)=0;
};
