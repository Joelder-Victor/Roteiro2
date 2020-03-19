#pragma once
#include <stdexcept>
using std::runtime_error;

class ValueAboveException: public runtime_error
{
private:
    
public:
    ValueAboveException():runtime_error("Value Above")
    {

    }
};

