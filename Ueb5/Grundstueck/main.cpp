#include <iostream> 
#include "Baugrundstueck.h"


int main()
{
    Baugrundstueck g1(0,0,2,2,5);
    g1.printKaufpreis();
    Baugrundstueck g2(2,1,1,2,100);
    g2.printKaufpreis();
    return 0;
}