#ifndef _MYSTRING_H_
#define _MYSTRING_H_

class MyString
{
private: 
    char *str;                            // Pointer dass auf ein char zeigt
public: 
    MyString();                           // No-arg Konstruktor
    MyString(const char *s);              // overloaded Konstruktor
    MyString(const MyString &source);     //Kopie-konstruktor
    ~MyString();                           //Destruktor

    MyString &operator=(const MyString &rhs);   // '=' Operator


    void display() const;
    int get_length() const;
    const char *get_str() const;    
};

class Vektor
{
   
private: 
    double x,y,z;
public:
    // Konstruktor
    Vektor(double a, double b, double c);
    //Destruktor
    ~Vektor();
    // print-Funktion
    void print_Vektor();
    // + operator
    Vektor operator+(Vektor zahl); // plus operator
    Vektor operator-(Vektor zahl); // minus operator
    Vektor operator*(Vektor zahl); // mal operator
    Vektor operator/(Vektor zahl); // geteilt operator
    Vektor operator=(Vektor zahl); // zuweisungsoperator

};

#endif 