#include <iostream>
using namespace std;
#include "PKW.h"
#include "PKW.cpp"
    
int main (void)
{
    PKW p1("BMW", 100);                //Konstruktor wird gerufen für p1
    PKW p2 ("Beetle",115);              //Konstruktor wird gerufen für p2
   // p1.print();                             //printfunktion wird aufgerufen für p1
   // p2.print();                             //printfunktion wird aufgerufen für p2

   PKW p3("Mercedes",999);            //Konstruktor wird gerufen für p3
    p3.set_marke("Audi");                   // setter und getter -> Der Name wird umgeändert von Mercedes auf Audi
   // p3.set_fgnstr(23456);                   // setter und getter -> Die Fahrgestellnummer wird umgeändert von 3333 auf 23456
    p3.set_leistung(439);                   // setter und getter -> Die Leistung wird umgeändert von 999 auf 439
    p3.print();                             // Mercedes,3333,999
    p1.display_Pkw();                        // Kopie von BMW 
    PKW neu_BMW(p1);                        // neuer PKW: Kopie von p1
  // neu_BMW.display_Pkw(); 
   //p1.fgnstr_groesser(p2);
    p1.operator<(p2);
    p3<p2;



    return 0;
}