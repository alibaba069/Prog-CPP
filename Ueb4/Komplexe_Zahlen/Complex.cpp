#include <iostream>
#include "Complex.h"


using namespace std;

//int Complex::counter;
Complex::Complex(){}; // no-arg konstruktor
// konstruktor mit zwei input
Complex::Complex(int a, int b)
{ imag_teil = b;real_teil = a;/*counter = ++counter;*/}

//Printfunktion
void Complex::print_complex()
{
  cout << "Die komplexe Zahl ist: "/*  << counter <<"*/  << real_teil << " + " << imag_teil << "i" << endl;
}
//Setter von real_teil => damit kriegt man den Input ueber den realteil vom User
void Complex::set_real_teil(int a){real_teil=a;}
//Getter von real_teil => damit gibt man den Imaginaeren teil vom User wieder zurück
int Complex::get_real_teil(){return real_teil;}
//Setter imag_teil 
void Complex::set_imag_teil(int b){imag_teil=b;}
//Getter imag_teil=> damit gibt man den Imaginaeren teil vom User wieder zurück
int Complex::get_imag_teil() {return imag_teil;}


Complex::~Complex()
{
    //--counter;
  //  cout << "Zerstört" << endl;
}

Complex Complex::operator+(Complex &rhs)  //+
{
    cout << "Operation mit '+' " << endl;
    Complex result;
    result.set_real_teil(this->get_real_teil() + rhs.get_real_teil());
    result.set_imag_teil (this->get_imag_teil() + rhs.get_imag_teil());
    return result;
}
//-
Complex Complex::operator-(Complex &rhs) //-
{
    cout << "Operation mit '-' " << endl;
    Complex result;
    result.set_real_teil(this->get_real_teil() - rhs.get_real_teil());
    result.set_imag_teil (this->get_imag_teil() - rhs.get_imag_teil());
    return result;
}
Complex Complex::operator*(Complex &rhs) //*
{
    cout << "Operation mit '*' " << endl;
    Complex result;
    result.set_real_teil((this->get_real_teil() * rhs.get_real_teil()) - (this->get_imag_teil() * rhs.get_imag_teil()));
    result.set_imag_teil ((this->get_imag_teil() * rhs.get_real_teil()) + (this->get_real_teil() * rhs.get_imag_teil()));
    return result;
}
//this->real_teil + rhs.real_teil;(real_teil + rhs.real_teil,imaginaerter_teil + rhs.imaginaerter_teil);
