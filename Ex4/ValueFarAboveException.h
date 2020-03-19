#pragma once

#include <stdexcept>
using std::runtime_error;

class ValueFarAboveException:public runtime_error
{
private:
    
public:
    ValueFarAboveException():runtime_error("Value far above")
    {

    }
    
};



