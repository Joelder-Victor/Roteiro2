
#include <stdexcept>
using std::runtime_error;



class EmployeeDoesExistException : public runtime_error
{

public:
    EmployeeDoesExistException(): runtime_error("Employee does not exist!")
    {
    }
    
};
