#include <iostream>
#include <string>

using namespace std;

void hello(string name)
{
    cout << "Hello " << name << ", this is your first Visual C++ programm. Congrats!!!" << endl << endl << endl;
}

int main (void)
{
    string name ;
    cout << "Hello!" << endl << "What is your name?" << endl;
    cin >> name;
    hello (name);

    return 0;
}