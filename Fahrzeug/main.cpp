#include <iostream>
#include "pkw.h"

int main()
{
    // Fahrzeug f1("Audi",2020,330);
    // f1.print();
    Pkw p1("Mercedes",2021,505,"Coupé",1.5);
    p1.print();

    Fahrzeug auto1("Fusrari",1980,480);
    auto1.print();
    

    //Kopie
    Pkw auto2(auto1,"mini",2.8);
    
   // auto2.print();

    // auto2.set_hersteller("Julieatta");
    // auto2.set_baujahr(1987);
    // auto2.set_motorleistung(76);

    auto2.print();
return 0;
}