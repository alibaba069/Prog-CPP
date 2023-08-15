#include "Fahrzeug.h"
#include <iostream>
using namespace std;
#ifndef _PKW_H_
#define _PKW_H_

class Pkw :public Fahrzeug
{
    private:
    char *Art;
    double Gewicht;

    public: 
    Pkw(char const *hersteller, unsigned int baujahr, unsigned int motorleistung, char const *Art, double Gewicht);
    Pkw(Fahrzeug &other,char const *Art, double Gewicht);

    //setter 

    void set_Art(char const *art);
    void set_Gewicht(double gewicht);

    //getter
    char const *get_Art();
    double get_Gewicht();

    //print

    void print();

    
};
#endif