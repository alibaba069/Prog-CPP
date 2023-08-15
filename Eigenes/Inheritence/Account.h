
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <string>

class Account 
{
    private: 
    int balance;
    public: 
        std::string name;
        void deposit(int amount);
        void withdraw(int amount);
        Account();                              // default - Konstruktor
        Account(int x);                         // overloaded Konstruktor
        Account(const Account &other);          // Kopier konstruktor
        Account &operator=(const Account &rhs);  // Zuweisungsoperator
        ~Account();

        void print_operator();
};

#endif