#include <iostream>
using namespace std;

void swapi(int &a,int &b)
{
    int temp =a;
    a = b;
    b = temp;
}
void swapi(int *a, int*b)
{
    int temp = *a;
    *a =*b;
    *b = temp;
}
int main()
{
    int a = 1;
    int b = 2;

    int *pa = &a;
    int *pb = &b;

    cout << "\n\n  a = " << a <<   "    b = " << b << "\n"; // 1,2
    cout << " pa = " << *pa << "   pb = " << *pb << "\n";  // 1,2
    cout << " pa = " << pa << "   pb = " << pb << "\n";  // 0x,0x


    cout << " ... swapi(pa,pb) ...\n";   
    swapi(pa,pb);

    cout << "  a = " << a <<   "   b = " << b << "\n";
    cout << " pa = " << pa << "   pb = " << pb << "\n";
     
cout << " ... swapi(a,b) ...\n";
swapi(a,b);

cout << "  a = " << a <<   "   b = " << b << "\n";
cout << " pa = " << pa << "   pb = " << pb << "\n";


cout << " ... swap(a,b) ...\n";
swapi(&a,&b);

cout << "  a = " << a <<   "   b = " << b << "\n";
cout << " pa = " << pa << "   pb = " << pb << "\n";

}