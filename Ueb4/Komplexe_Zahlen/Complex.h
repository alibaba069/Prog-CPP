#ifndef _COMPLEX_H
#define _COMPLEX_H

class Complex
{
private:
//static int counter;
    int imag_teil;
    int real_teil;
public:

    Complex(int a, int b);
    ~Complex();
    Complex();

    void set_imag_teil(int a);    // optional
    int get_imag_teil();          // optional

    void set_real_teil(int b);            // optional
    int get_real_teil();                  // optional

    void print_complex();
    Complex operator+(Complex &rhs); // der '+' operator
    Complex operator-(Complex &rhs2); // der '-' operator
    Complex operator*(Complex &rhs3); // der '*' operator
};
#endif // _COMPLEX_H