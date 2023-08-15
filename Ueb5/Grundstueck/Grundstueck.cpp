
#include "Grundstueck.h"


Grundstueck::Grundstueck(float x1, float y1, float x2 , float y2 )
{
    Ecke1[0] = x1;
    Ecke1[1] = y1;

    Ecke2[0] = x2;
    Ecke2[1] = y2;
}

const float *Grundstueck::get_Ecke1() const
{
    return Ecke1;
}
const float *Grundstueck::get_Ecke2() const
{
    return Ecke2;
}

void Grundstueck::set_Ecke1(float xa , float ya)
{
    Ecke1[0] = xa;
    Ecke1[1] = ya;
}
void Grundstueck::set_Ecke2(float xb , float yb)
{
    Ecke2[0] = xb;
    Ecke2[1] = yb;
}

float Grundstueck::Flaeche() const
{
    float horizontal;
    float vertikal;
    
    horizontal = Ecke2[0] - Ecke1[0];
    if (horizontal <0)
    {
        horizontal = horizontal*(-1);
    }
    vertikal = Ecke2[1] - Ecke1[1];
    if (vertikal <0)
    {
        vertikal = vertikal*(-1);
    }
    return  vertikal * horizontal;
}