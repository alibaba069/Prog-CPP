#include <iostream>
using namespace std;
 void paul(int a = 17, int b = 4)
 {
 cout << "a = " << a;
 cout << " b = " << b << endl;
 }
 int main()
 {
 paul();
 paul(20);
 paul(20,1);
//paul(,1); Geht nicht weil vor dem Komma darf keine leere Menge stehen bzw. muss ein integer stehen!!! return 0;
 }