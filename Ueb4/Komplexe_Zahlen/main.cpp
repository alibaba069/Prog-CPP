#include <iostream>
#include "Complex.h"

int main()
{
    Complex Zahl1;
    Complex Zahl2;
    Complex Zahl3(3,6); 
    Complex Zahl4(2,3); 
    
    // Zahl1.set_real_teil(1);
    // Zahl1.set_imag_teil(2);

    // Zahl2.set_real_teil(3);
    // Zahl2.set_imag_teil(-1);

    // Zahl1.print_complex();
    // Zahl2.print_complex();
    // Zahl3.print_complex();
    // Zahl4.print_complex();
    std::cout << std::endl;

    Complex Erg2 = Zahl3 + Zahl4;
    Erg2.print_complex();
    
    // Complex Erg = Zahl1 +Zahl2;
    
    // Erg.print_complex();

    // Complex Dif = Zahl1 - Zahl2;
    // Dif.print_complex();

    // Complex Prod = Zahl1 * Zahl2;
    // Prod.print_complex();

   // Complex Erg(Zahl1 + Zahl2); Geht auch so
    return 0;
}