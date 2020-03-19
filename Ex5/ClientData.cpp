#include<string.h>

#include "ClientData.h"

ClientData::ClientData(int accountNumberValue,
                       string lastNameValue, string firstNameValue, double balanceValue)
{
    setAccountNumber(accountNumberValue);
    setLastName(lastNameValue);
    setFirstName(firstNameValue);
    setBalance(balanceValue);
}
void ClientData::setAccountNumber(int accountNumberValue)
{
    accountNumber = accountNumberValue;
}
int ClientData::getAccountNumber() const
{
    return accountNumber;
}

void ClientData::setFirstName(string firstNameString)
{
    const char *firstNameValue = firstNameString.data();
    int length = firstNameString.size();
    length = (length < MAX ? length : MAX - 1);
    strncpy(firstName,firstNameValue,length);
    firstName[length]='\0';
}
string ClientData::getFirstName() const
{
    return firstName;
}

void ClientData::setBalance(double balanceValue)
{
    balance = balanceValue;
}
double ClientData::getBalance() const
{
    return balance;
}