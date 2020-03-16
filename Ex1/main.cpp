#include <iostream>
using std::cout;
using std::endl;

#include <ostream>
using std::ostringstream;

#include <iomanip>
using std::setprecision;
using std:: fixed;

#include "IAccount.h"
//#include "Account.h"
#include "SpecialAccount.h"
int main()
{
    cout<<setprecision(2)<<fixed;
    Account c1("Geraldo Bulhosa", 5000.0, "5820-93621", 250000.0);
    c1.print();
    c1.withdrawMoney(5000);
    cout<<c1.getBalance()<<endl;
    c1.deposit(2);
    c1.setLimit();
    cout<<c1.getLimit()<<endl;

    SpecialAccount c2("Pacheco Ermenegildo",15000.0,"5482-89632",500000.0);
    c2.print();
    c2.withdrawMoney(5000);
    cout<<c2.getBalance()<<endl;
    c2.deposit(2);
    c2.setLimit();
    cout<<c2.getLimit()<<endl;
    
}
