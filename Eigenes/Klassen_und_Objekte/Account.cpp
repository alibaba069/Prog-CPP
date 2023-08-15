#include <iostream>
#include "Account.h"
using namespace std;
#include <string>


int Account::Anzahl_Accounts = 0;                    // static Int

//Konstruktor
Account::Account()                       
{
    cout << "Account wird angelegt!" << endl;
    ++Anzahl_Accounts;                               // Wird ein Account angelegt, dann erhöht sich die Anzahl
}

//Destruktor
Account::~Account()
{
    cout << "Account wird zerstört!" << endl;
    --Anzahl_Accounts;                               // Wird ein Account zerstört, dann erniedrigt sich die Anzahl
}

//Setter-funktion
void Account::set_name(string n)
{name = n;}

//getter-funktion
string Account::get_name()
{
    return name;
}

//Boolien: überprüft  
bool Account::deposit(double amount)
{
    balance += amount;
    return true;
}

//Boolien: überprüft ob amount kleiner gleich 0 ist 
 bool Account::withdraw(double amount)
 {
    if(balance - amount >= 0)
    {
        balance -= amount;
        return true;
    }
    else {return false;}
 }

 //
int Account::get_Anzahl_Accounts()
{return Anzahl_Accounts;}

void Account::print()
{
    cout << name << " hat " << balance << "$ Guthaben." << endl;

}