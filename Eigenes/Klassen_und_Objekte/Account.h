#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>


class Account
{
    private:
    static int Anzahl_Accounts;
    std::string name;
    double balance;

    public:
    Account();
    ~Account();
    void set_balance(double bal)             // setter damit er auf privat zugreifen kann
    {balance = bal;}
    double get_balance() 
    {return balance;}                          // gibt eine Kopie wieder zurück

    void set_name(std::string n);                // setter um in private name nicht zu ändern
    std::string get_name();                      // gibt Kopie 

    bool deposit(double amount);
    bool withdraw(double amount);
    void print();
    
    static int get_Anzahl_Accounts();             
};



#endif