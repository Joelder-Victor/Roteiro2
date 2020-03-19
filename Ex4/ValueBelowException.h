#pragma once
#include <stdexcept>
using std::runtime_error;

class ValueBelowException: public runtime_error
{
private:
    /* data */
public:
    ValueBelowException():runtime_error("Value Below")
    {
        
    }

};

