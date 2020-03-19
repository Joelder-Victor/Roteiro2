#pragma once

#include "Account.h"
class SpecialAccount:public Account
{
private:
    /* data */
public:
    SpecialAccount( string ,double ,  string ,double );
    void setLimit();
};


