#ifndef _PKW_H_
#define _PKW_H_
#include <iostream>
#include <string>

using namespace std; 

class PKW
{
    private: 
    static unsigned long fgnster_max;
    string marke;
    unsigned long fgnstr;
    unsigned int leistung;

    public:
     PKW (string a,unsigned int c); // Konstruktor
     PKW(const PKW &source);                         // Copy-Konstruktor
     ~PKW();                                         // Destruktor
     void set_marke(string n);
     string get_marke();
     void operator<(const PKW &PKW_);                // operator

     void set_fgnstr(unsigned long m);
     unsigned long get_fgnstr();

     void set_leistung(unsigned int o);
     unsigned int get_leistung();
     void print();                                   // Printfunktion
     void display_Pkw();
     //void fgnstr_groesser( PKW PKW_);

};
#endif