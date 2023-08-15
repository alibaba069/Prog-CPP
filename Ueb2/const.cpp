#include <iostream>
using namespace std;


int main(void)
{
    int i;
    int *ip;
    int * const cp = &i;
    const int ci=7;
    const int *cip;
    const int * const cicp= &ci;

    i = ci;
    cout << "ci = 8"   << "  ERROR (assignment of read-only variable) !!!\n" ;
    // *cp= ci;
    // cout << "cp = &ci" << "  ERROR (assignment of read-only variable) !!!\n";
    // cip = &ci;
    // cip = cicp;
    // cout << "*cip=7"  << "  ERROR  (assignment of read-only location) !!!\n";
    // cout << "ip=cip"  << "  ERROR  ( invalid conversion from const int* to int*) !!!\n";
    return 0;
}