#include <iostream>
#include "pkw.h"

using namespace std;

Pkw::Pkw(char const *hersteller, unsigned int baujahr, unsigned int motorleistung, char const *Art, double Gewicht) :Fahrzeug(hersteller,baujahr,motorleistung)
{
    this->Art = new char [strlen(Art)+1];
    strcpy(this->Art,Art);
    this->Gewicht = Gewicht;
}
void Pkw::set_Art(char const *a)
{
    delete [] Art;
    this->Art = new char [strlen(a)+1];
    strcpy(this->Art,a);
}
char const *Pkw::get_Art() {return Art;}

void Pkw::set_Gewicht(double g)
{
    this->Gewicht = g;
}
double Pkw::get_Gewicht(){return Gewicht;}

void Pkw::print()
{
    cout << "\n------------------------------ Pkw --------------------------------------" << endl;
    cout << "Seriennummer: " << get_ID() << endl;
	cout << "Herrsteller: " << get_hersteller() << endl;
	cout << "Baujahr: " << get_baujahr() << endl;
	cout << "Motorleistung: " << get_motorleistung() << endl;
    cout << "Gewicht: " << get_Gewicht() << "t" << endl;
    cout << "Art: " << get_Art() << endl;
}
Pkw::Pkw( Fahrzeug &other, const char *Art, double Gewicht): Fahrzeug(other)
{
    this->Art = new char[strlen(Art)+1];
    strcpy(this->Art,Art);
    this->Gewicht = Gewicht;
    this->set_baujahr(other.get_baujahr());
	this->set_hersteller(other.get_hersteller());
	this->set_motorleistung(other.get_motorleistung());
}
