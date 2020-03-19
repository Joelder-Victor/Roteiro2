#pragma once

#include <stdexcept>
using std::runtime_error;

class BalanceNotAvailableException : public runtime_error
{
private:
public:
    BalanceNotAvailableException():runtime_error("Balance not available!")
    {
    }
};
