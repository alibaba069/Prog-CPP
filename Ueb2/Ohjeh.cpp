#include <iostream>
using namespace std;

int ohjeh (long i, double r, int j = 3)
{
    cout << "Ohjeh 1\n";
     return 0;
}
int ohjeh (int i, long j, double r)
{
    cout << "Ohjeh 2\n";
     return 0;
}
int ohjeh (int i, int j)
{
    cout << "Ohjeh 3\n";
     return 0;
}


int main ()
{
    ohjeh(1,'b');          // ohjeh3
    ohjeh (1L, 1.0, 1);    //1
    ohjeh (2.3, 2.3);      //1
    ohjeh (2, 1L, 1.0);     //2
}