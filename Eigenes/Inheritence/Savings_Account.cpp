#include <iostream>
#include "Savings_Account.h"

// no-arg konsstruktor
Savings_Account::Savings_Account()  : Account() 
{
    int double_balance = 0;
    std::cout << "derived No-arg Konstruktor\n balance: " << double_balance << std::endl;
}

// overloaded konsstruktor
Savings_Account::Savings_Account(int x) : Account(x) 
{
    double_balance = (x*2);
    std::cout << "derived Konstruktor (int) !\n balance: " << double_balance << std::endl;
}
//Kopierkonstruktor
Savings_Account::Savings_Account(const Savings_Account &other) :Account(other)
{
    double_balance = other.double_balance;
    std::cout << "Copy derived Konstruktor (int) wird aufgerufen!\n balance: " << double_balance <<std::endl;
}

//operartor zuweisen 
Savings_Account &Savings_Account::operator=(const Savings_Account &rhs)                    
{
    std::cout << " = " << std::endl;
    if (this == &rhs)                     // Wenn er auf sich selbst zeigt
    {return *this;}
    else 
    Account::operator=(rhs);
    double_balance = rhs.double_balance;
    return *this;
}
Savings_Account::~Savings_Account()
{
   // std::cout << "derived Destruktor " << std::endl;
}

void Savings_Account::deposit(int amount)
{
    std::cout<< "Savings_Account deposit called with " << amount << std::endl;
}

void Savings_Account::withdraw(int amount)
{
    std::cout<< "Savings_Account withdraw called with " << amount << std::endl;
}
void Savings_Account::print_operator()
{
    std::cout << "balance is: " << double_balance << std::endl;
}