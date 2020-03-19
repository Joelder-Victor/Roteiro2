#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include <string>
using std::string;

#include <sstream>
using std::ostringstream;

#include <fstream>
using std::ofstream;
using std::ifstream;

#include <cstdlib>
using std::exit;

#include <vector>
using std::vector;

#include "ClientData.h"

string toString(int, const string, double);
string outputLine(int, const string , double );
void recordingFile(vector<string>,int);
vector<string> readFile();
int main()
{
    
    cout << "Enter the account, name,and balance." << endl
         << "Enter 0 0 0 to finish.\n?";
    int i=0;
    int account;
    char name[30];
    double balance;
    vector<ClientData> clients(MAX);
    vector<string> informations(MAX);
    while (cin >> account >> name >> balance)
    {
        clients[i].setAccountNumber(account);
        clients[i].setFirstName(name);
        clients[i].setBalance(balance);
        if (account == 0)
        {
            break;
        }
        informations[i]= toString(account, name, balance);
        i++;
    } 
    recordingFile(informations,0);
    informations=readFile();
    recordingFile(informations,1);

    return 0;
}
string toString(int account, string name, double balance)
{
    ostringstream output;
    output << account << ' ' << name << ' ' << balance <<'\n';
    cout << "?";
    return output.str();
}
string outputLine(int account, const string name, double balance)
{
    ostringstream output;
    output << account << ' ' << name << ' ' << balance <<'\n';
    return output.str();
}
void recordingFile(vector<string>str, int option)
{
     ofstream outClientFile;
    if(option==0)
         outClientFile.open("test.txt");
    if(option==1)
        outClientFile.open("testbkp.txt", ios::out);

    if (!outClientFile)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }
    for (size_t i = 0; i < str.size(); i++)
    {
        outClientFile<<str[i];
    }
    outClientFile.close();
}
vector<string> readFile()
{
    ifstream inClientFile("test.txt", ios::in);
    int i=0;
    int account;
    char name[30];
    double balance;
    vector<string>informations(MAX);
    if (!inClientFile)
    {
        cerr << "File could not be opened" << endl;
        exit(1);
    }
    while (!inClientFile.eof())
    {
        inClientFile >> account >> name >> balance;
        informations[i]=outputLine(account,name,balance);
        i++;
    }
    return informations;
}


