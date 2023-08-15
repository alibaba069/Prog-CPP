#include <iostream>
#include "Fahrzeug.h"
#include <string.h>
using namespace std;
unsigned int Fahrzeug::nr = 1000;

Fahrzeug::Fahrzeug(char const *hersteller, unsigned int baujahr, unsigned int motorleistung)
{
    this->hersteller = new char[strlen(hersteller)+1];
    strcpy(this->hersteller, hersteller);

    this->baujahr = baujahr;
    this->motorleistung = motorleistung;
    nr++;
}

Fahrzeug::Fahrzeug(Fahrzeug const &other)
{
    this->hersteller = new char[strlen(other.hersteller)+1];
    strcpy(this->hersteller, other.hersteller);
    this->baujahr = other.baujahr;
    this->motorleistung = other.motorleistung;
}

Fahrzeug &Fahrzeug::operator=(Fahrzeug const &other)
{
    if(this != &other)
    {
    this->hersteller = new char[strlen(other.hersteller)+1];
    strcpy(this->hersteller, other.hersteller);
    this->baujahr = other.baujahr;
    this->motorleistung = other.motorleistung;
    }
    return *this;
}
Fahrzeug::~Fahrzeug()
{
	delete [] hersteller;
}

// setter
void Fahrzeug::set_hersteller(const char *hr)
{
    delete [] hersteller;
    hersteller = new char[strlen(hr)+1];
    strcpy(hersteller,hr);
}

void Fahrzeug::set_baujahr(unsigned int bj) {baujahr = bj;}
void Fahrzeug::set_motorleistung(unsigned int ml) {motorleistung = ml;}

// getter 

char const *Fahrzeug::get_hersteller() {return hersteller;}
unsigned int Fahrzeug::get_baujahr() {return baujahr;}
unsigned int Fahrzeug::get_motorleistung() {return motorleistung;}
unsigned int Fahrzeug::get_ID() {return nr;}

