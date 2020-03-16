#include <stdexcept>
using std::runtime_error;

class BudgetOverflowException : public runtime_error
{

public:
    BudgetOverflowException()
        : runtime_error("exceeded budget")
    {
    }
};
