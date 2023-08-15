#include <iostream>
using namespace std;

void swap(int *r, int *s)
{
   int temp = *r;
   *r = *s;
   *s = temp;
   return;
} 

int main()
{
    int x = 2, y = 3;
    int *a=&x;
    int *b=&y;

    cout << x << " und " << y << endl;
    swap(a,b);
    cout << x << " und " << y << endl;

    return 0;
}