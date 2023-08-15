#include "PKW.h"

unsigned long PKW::fgnster_max = 1000; 
    // Konstruktor
    PKW::PKW (string pkwMarke, unsigned int pkwLeistung)   
    {
        marke = pkwMarke;
        fgnstr = fgnster_max;
        ++fgnster_max;
        leistung = pkwLeistung;


        cout << "Pkw der Marke " << marke <<  " mit Fahrgestellnummer " << fgnstr << 
        " und Leistung " << leistung << " erzeugt \n" << endl;
    }
    //Kopierkonstruktor
    PKW::PKW(const PKW &source) 
        : marke(source.marke),fgnstr(source.fgnstr),leistung(source.leistung) 
    {
        cout << "Kopierkonstruktor für " << source.marke << endl;
    }
    //Destrukor
    PKW::~PKW()
    {
       // cout << "Pkw " << marke << " wird zerstört" << endl;
    }
    // setter & getter
    void PKW::set_marke(string n) { marke = n;}                                   //setter für marke
    string PKW::get_marke() {return marke;}                                       //getter für marke 

    void PKW::set_fgnstr(unsigned long m) {fgnstr = m;}                           //setter für fgnstr
    unsigned long PKW::get_fgnstr() {return fgnstr;}                              //getter für fgnstr

    void PKW::set_leistung(unsigned int o) {leistung = o;}                        //setter für leistung
    unsigned int PKW::get_leistung() {return leistung;}                           //getter für leistung

   // Überprüfung von zwei Fgnstr - Funktion 
    // void PKW::fgnstr_groesser( PKW PKW_)
    // {
    //     if ( fgnstr < PKW_.fgnstr) 
    //     {
    //         cout << "Die Fahrgestellnummer von "<<  marke << " ist kleiner als die Fahrgestellnummer von " << PKW_.marke << endl << endl;
    //     } 
    //     else 
    //     {
    //         cout << "Die Fahrgestellnummer von "<<  marke << " ist kleiner gleich als die Fahrgestellnummer von " << PKW_.marke << endl << endl;
    //     }
    // }
   // printfunktion
    void PKW::print()
    {
        cout << "Die Marke des Pkws ist: " << marke <<  endl;
        cout << "Die Fahrgestellnummer von "<< marke << " ist: "<< fgnstr << endl;
        cout << "Die Leistung von "<< marke << " ist: "<< leistung << endl << endl;
    }
    // Printfunktion, aber es erhält einen Objekt der Klasse PKW
    void PKW::display_Pkw()
    {
        
        cout << "Die kopierte Marke des Pkws ist: " << marke <<  endl;
        cout << "Die kopierte Fahrgestellnummer von " << marke << " ist: "<< fgnstr << endl;
        cout << "Die kopierte Leistung von " << marke << " ist: "<< leistung << endl << endl;
    }
    void PKW::operator<(const PKW &PKW_)
    {
        cout << "\n Ueberpruefung durch ueberladenen Operator " << endl;
        if ( fgnstr < PKW_.fgnstr) 
        {
            cout << "p2 ist kleiner als p1" << endl;
        } 
        else 
        {
            cout << "p2 ist kleiner gleich als p1" << endl;
        }
       // return *this;
    }