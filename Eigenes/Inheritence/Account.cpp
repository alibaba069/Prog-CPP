#include <iostream>
#include "Account.h"
#include <string>

// No arg konstruktor
Account::Account() 
{
    balance = 0;
    name = "An Account";
    std::cout << "Base No-arg Konstruktor wird aufgerufen\n balance: " << balance << std::endl;
}

// overloaded konsstruktor
Account::Account(int x)   
{
    balance = x;
    std::cout << "Base Konstruktor (int) wird aufgerufen!\n balance: " << balance <<std::endl;
}

//Kopierkonstruktor
Account::Account(const Account &other) 
{
    balance = other.balance;
    std::cout << "Copy Base Konstruktor (int) wird aufgerufen!\n balance: " << balance <<std::endl;
}

//operartor zuweisen 
Account &Account::operator=(const Account &rhs)                    
{
    std::cout << " = " << std::endl;
    if (this == &rhs)                     // Wenn er auf sich selbst zeigt
    {return *this;}
    else 
    balance = rhs.balance;
    return *this;
}

//Destruktor
Account::~Account()
{
  //  std::cout << "Base Destruktor wird aufgerufen" << std::endl;
}

//Methoden : printfunktionen
void Account::deposit(int amount)
{
    std::cout<< "Account deposit called with " << amount << std::endl;
}

//Methoden : printfunktionen
void Account::withdraw(int amount)
{
    std::cout<< "Account withdraw called with " << amount << std::endl;
}

//Methoden : printfunktionen
void Account::print_operator()
{
    std::cout << "balance is: " << balance << std::endl;
}
