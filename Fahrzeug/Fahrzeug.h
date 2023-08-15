#ifndef _FAHRZEUG_H_
#define _FAHRZEUG_H_
using namespace std;
class Fahrzeug
{
    private:
    static unsigned int nr; //static
    char *hersteller;
    unsigned int baujahr;
    unsigned int motorleistung;
    public:
    //konstruktor
    Fahrzeug(char const *hersteller, unsigned int baujahr, unsigned int motorleistung);
    //kopiekonstruktor
    Fahrzeug(Fahrzeug const &other);
    //Zuweisungsoperator
    Fahrzeug &operator=(Fahrzeug const &other);
    //Destruktor
    virtual ~Fahrzeug();

    //Setter
    void set_hersteller(char const *hersteller);
    void set_baujahr(unsigned int bj);
    void set_motorleistung(unsigned int ml);
    //getter
    char const *get_hersteller();
    unsigned int get_baujahr();
    unsigned int get_motorleistung();
    unsigned int get_ID();

    //print
    virtual void print()
{
    cout << "\n-------------------------------------Fahrzeug-----------------------------" <<endl;
    cout << "Seriennummer: " << get_ID() << endl;
	cout << "Herrsteller: " << get_hersteller() << endl;
	cout << "Baujahr: " << get_baujahr() << endl;
	cout << "Motorleistung: " << get_motorleistung() << endl;

}

};
#endif