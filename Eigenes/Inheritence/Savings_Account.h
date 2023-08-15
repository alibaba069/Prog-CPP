#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h"

class Savings_Account: public Account
{
    private: 
        int double_balance;
    public: 
        Savings_Account();
        Savings_Account(int x);
        Savings_Account(const Savings_Account &other);          // Kopier konstruktor
        Savings_Account &operator=(const Savings_Account &rhs);  // Zuweisungsoperator
        ~Savings_Account();
        void deposit(int amount);
        void withdraw(int amount);
        void print_operator();
};

#endif