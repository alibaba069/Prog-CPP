#include <iostream>
#include "Baugrundstueck.h"


Baugrundstueck::Baugrundstueck(float x1, float y1, float x2 , float y2,float Kosteninput) : 
Grundstueck::Grundstueck(x1,y1,x2,y2) , Kosten(Kosteninput)
{}
float Baugrundstueck::Kaufpreis()
{
  return  Kosten * Flaeche();
}

void Baugrundstueck::printKaufpreis()
{
    std::cout<< "(" << *get_Ecke1() << "," << *get_Ecke1() << ")" << " und (" << *get_Ecke2() << "," << *get_Ecke2() << ")" << "\nDie Kosten sind: " << Kaufpreis() << " Euro/m^2" << std::endl;
}
