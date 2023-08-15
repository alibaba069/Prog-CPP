#include <iostream>
#include <string>
#include <cstring>
#include "Operator.h"
#    define NULL __null

using namespace std;

MyString::MyString() :str (NULL)          // no arg-constructor
{
    
    str = new char[1];
    *str = '\0';
}

MyString::MyString(const char *s):str (NULL)       // overloaded constructor
{
    
    if (s == NULL)
    {
        str = new char[1];
        *str = '\0';
    }
    else
    {
        str = new char[strlen(s)+1];
        strcpy(str,s);
    }
}

MyString::MyString(const MyString &source) :str (NULL)              // copy-constructor
{
   
    str = new char[strlen(source.str)+1];
    strcpy(str,source.str);
}

MyString::~MyString()                                                // destructor
{
    delete [] str;
}

MyString &MyString::operator=(const MyString &rhs)                    //operartor zuweisen 
{
    cout << " = " << endl;
    if (this == &rhs)                     // Wenn er auf sich selbst zeigt
    {return *this;}
    delete [] this->str;
    str =new char[strlen(rhs.str)+1];
    strcpy(this->str,rhs.str);
    return *this;
}

void MyString::display() const                          //display-function
{
    cout << str << " : " << get_length() << endl;

}
int MyString::get_length() const                           // getter
{
    return strlen(str);
}

const char *MyString::get_str() const            
{
    return str;
}

Vektor::Vektor(double a, double b, double c) :x(a), y(b), z(c){}

Vektor::~Vektor(){}

void Vektor::print_Vektor()
{
    cout << "<" << x << "," << y << "," << z << ">" << endl;
}
Vektor Vektor::operator+(Vektor zahl)
{
    return Vektor(this->x+zahl.x , this->y+zahl.y , this->z+zahl.z);
}
Vektor Vektor::operator-(Vektor zahl)
{
    return Vektor(x-zahl.x , y-zahl.y , z-zahl.z);
}
Vektor Vektor::operator*(Vektor zahl)
{
    return Vektor(x*zahl.x , y*zahl.y , z*zahl.z);
}
Vektor Vektor::operator/(Vektor zahl)
{
    return Vektor(x/zahl.x , y/zahl.y , z/zahl.z);
}
Vektor Vektor::operator=(Vektor zahl)
{
    return Vektor(zahl.x = this->x , zahl.y=this->y , zahl.z=this->z);
}