#include "TestValidateNumber.h"
#include "ValueBelowException.h"
#include "ValueAboveException.h"
#include "ValueFarAboveException.h"

#include <iostream>

void TestValidateNumber::validateNumber(int num)
{
    try
    {
        if(num<=0)
            throw ValueBelowException();
        else if(num>100 && num<1000)
            throw ValueAboveException();
        else
            throw ValueFarAboveException();
        
    }
    catch(ValueBelowException &below)
    {
        std::cerr << below.what() << '\n';
    }
    catch(ValueAboveException &above)
    {
        std::cerr << above.what() << '\n';
    }
    catch(ValueFarAboveException &farAbove)
    {
        std::cerr << farAbove.what() << '\n';
    }
}