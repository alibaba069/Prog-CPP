#include <iostream>
#include "Account.h"
#include "Savings_Account.h"
using namespace std;

int main()
{
    //use the account class
     cout << endl << "========================== Account ====================================" << endl;
     Account acc;                  // no arg
     Account acc2(2);              // overloaded
     Account acc3(acc);           // copy
     acc = acc2;
     acc.print_operator();
     acc2.print_operator();
     acc3.print_operator();
    // acc.deposit(5000);
    // acc.withdraw(200);

    cout << endl;

    // // dynamic alloc
    // Account *p_acc = NULL;
    // p_acc = new Account();
    // p_acc->deposit(4000);
    // p_acc->withdraw(300);
    // delete p_acc;

    //use the Saving_Account class
    cout << endl << "========================== Saving_Account ====================================" << endl;
    Savings_Account sav_acc;
    Savings_Account sav_acc2(3); // bei derived wird mal 2 genommen
    Savings_Account sav_acc3(sav_acc); 
    sav_acc = sav_acc2;
    sav_acc.print_operator();
    sav_acc2.print_operator();
    sav_acc3.print_operator();

    // sav_acc.deposit(5000);
    // sav_acc.withdraw(200);

    cout << endl;

    // dynamic alloc
    // Savings_Account *p_sav_acc = NULL;
    // p_sav_acc = new Saving_Account();
    // p_sav_acc->deposit(4000);
    // p_acc->withdraw(300);
    // delete p_sav_acc;

    return 0;
    
}