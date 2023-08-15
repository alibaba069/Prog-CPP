#ifndef _BAUGRUNDSTUECK_H_
#define _BAUGRUNDSTUECK_H_
#include "Grundstueck.h"

class Baugrundstueck: public Grundstueck
{
private:
float Kosten;

public:
Baugrundstueck(float,float,float,float,float);
float Kaufpreis();
void printKaufpreis();

};  
#endif