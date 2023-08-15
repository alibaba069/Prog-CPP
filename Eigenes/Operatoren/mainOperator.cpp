#include <iostream>
#include <string>
#include <cstring>
#include "Operator.h"

using namespace std;

int main()
{
    // MyString a = "Hello";
    // MyString b;
    // b=a;
    Vektor c(1,2,3);
    Vektor d(2,3,4);
    Vektor erg = c+d;
    Vektor dif = c-d;
    Vektor prod = c*d;
    Vektor qou = c/d;
    Vektor equ = c=d;
    cout << " + " << endl;
    erg.print_Vektor();
    cout << " - " << endl;
    dif.print_Vektor();
    cout << " * " << endl;
    prod.print_Vektor();
    cout << " / " << endl;
    qou.print_Vektor();
    cout << " = " << endl;
    equ.print_Vektor();

 return 0;   
}