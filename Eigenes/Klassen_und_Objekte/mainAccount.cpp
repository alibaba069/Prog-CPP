#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

void print_Anzahl_Account()
{
    cout << "Es sind gerade " << Account::get_Anzahl_Accounts() << " Accounts aktiv" << endl;
}
int main()
{
    print_Anzahl_Account();
    Account Alis_account;
    Alis_account.set_name("Ali's Account");
    Alis_account.set_balance(1000.0);
    Alis_account.print();

    print_Anzahl_Account();

    Account Erwin;
    Erwin.set_name("Erwin's Account");
    Erwin.set_balance(9889.34);
    Erwin.print();
    
    print_Anzahl_Account();

    // if (Alis_account.deposit(200.0))
    // cout << "Deposit is okay" << endl; 
    // else 
    // cout << "deposit is not okay" << endl;

    // if (Alis_account.withdraw(500.0))
    // cout << "Withdra is okay" << endl;
    // else 
    // cout << "Withdraw is not okay" << endl;
    
    // if (Alis_account.withdraw(1500.0))
    // cout << "Withdra is okay" << endl;
    // else 
    // cout << "Withdraw is not okay" << endl;


    return 0;

}