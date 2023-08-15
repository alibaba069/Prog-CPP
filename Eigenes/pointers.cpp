#include <iostream>
#include <string>
#include <vector>
using namespace std;
/* Pointer 

int *int_ptr (nullptr)  => pointer zeigt nirgendswo
*/
int addonbyVal(int x); // Prototyp
void addonbyref (int *x);

int main (void)
{
    cout << endl << endl << endl;
     double high_temp[2] = {100.7,44.9};
     double low_temp[1] = {44.0};

     double *temp_ptr = NULL;

     temp_ptr = &high_temp[1];   // temp_ptr zeigt auf die Adresse des ersten Feldes 
     cout << "Die Adresse von temp_ptr ohne *: " << temp_ptr << endl; // Ausgegeben wird der Wert mit * // die Adresse ohne *
     cout << "Der Wert von temp_ptr mit *: " << *temp_ptr << endl; // Ausgegeben wird der Wert mit * // die Adresse ohne *

     double *temp_ptr2;
    
     *temp_ptr = low_temp[0] ;
     cout << low_temp << endl;


     int score =10;
     int *score_ptr = NULL;
     score_ptr = &score;
     cout << "Die Adresse von score: " << score_ptr << endl ; // score_ptr zeigt auf die Adresse von score
     cout << "Der Wert von score (mit *): " << *score_ptr << endl;  // score_ptr zeogt auf das Feld bzw. den Wert
     cout << "----------------------------------------------------- BASICS -------------------------------------------------------------------------------------" << endl;
     int a = 5;
     int *pa;
     pa = &a;  // pa ->&a
     cout << "Dies ist der Wert von a: " << a << endl; // Gibt den Wert von a an // 5
     cout << "Dies ist die Adresse von a: " << &a << endl; // Gibt die Adresse von a an// 0x
     cout << "Dies ist der Wert vom Pointer, er hat den Wert von a: " << *pa << endl; // Gibt den Wert von a an // 5
     cout << "Dies ist die Adresse vom Pointer, er hat die Adresse von a: " << pa << endl;// Gibt die Adresse von a an // 0x

     int *pa2;    // neuer Pointer
     pa2 = pa;    // Der Pointer pa = der neue Pointer pa2, allerdings ohne * // pa2 -> pa -> &a

     *pa +=5;    // a = a+5

     cout << "Der modifizierte Wert von a ist: " << pa << endl; // 10
     *pa2 += 10; // Wichtig dabei ist, dass man den nächsten "modifizierten" Pointer erst nach dem alten Dings schreibt  // a = a+10
     cout << "Der andere modifizierte Wert von a ist: " << a << endl;//20

     int *p =NULL; // Der Pointer zeigt nirgendswo hin


     cout << "----------------------------------------------------- FUNKTIONEN -------------------------------------------------------------------------------------" << endl;
     int val = 1;

     cout << "By Value" << endl;
     cout << "Der Wert vor der Funktion: " << val << endl; // Der Wert ist 1
     cout << "Der Wert innerhalb der Funktion: " << addonbyVal(val) << endl; // Der Wert ist 2
     cout << " Der Wert nach der Funktion: " << val << endl; // Der Wert ist 1

     cout << "By ref" << endl;
     cout << "Der Wert vor der Funktion: " << val << endl; // Der Wert ist 1
     addonbyref(&val); // Wichtig dabei ist, dass man & benutzt

     cout << " Der Wert nach der Funktion dereferenziert: " << val << endl; // Der Wert ist 2

//     int addonbyVal(int x)
// {
//     return ++x;
// }
//  void addonbyref(int *x)   // in der Funktion steht ein Pointer // Heißt ein Pointer wird der Funktion gegeben
//  {
//      ++(*x); // Dereferenzieren und ++
//  }

    cout << "----------------------------------------------------- ARRAYS -------------------------------------------------------------------------------------" << endl;

    int feld[10] = {1,2,3,4,5,6,7,8,9,10};
    
    cout << " Das ist die Adresse von dem Feld: " << feld << endl; // Er gibt hier die Adresse von 1. Feld aus
    cout << " Das ist der Wert von dem Feld[0]: " << feld[0] << endl; // Hier wird der erste Wert von Feld ausgegeben
    cout << " Das ist der Wert von dem *Feld: " << *feld << endl << endl; // Hier wird der erste Wert von Feld ausgegeben allerdings als dereferenzierubgsoperator 

    // Besser mit einer Schleife
    cout << "Ausgabe von feld mit einer Schleife feld[i] " << endl << endl;
    for (int i =0; i<10;i++)
    {
        cout << "Das ist der " << i+1 << ". Wert: " << feld[i] << endl;
    }
    
    cout << "Ausgabe von feld mit einer Schleife aber dereferenziert *(feld+i) " << endl << endl;
    for (int i =0; i<10;i++)
    {
        cout << "Das ist der " << i+1 << ". Wert: " << *(feld+i) << endl;  // Hier wird dereferenziert // Wichtig einfach feld + i
    }

    int feld3[] = {1,2,3};
    int *feld_ptr3 =feld3;

    cout << endl << feld_ptr3[0] <<endl;
    cout << feld_ptr3[1] <<endl;
    cout << feld_ptr3[2] <<endl; 
    cout << "----------------------------------------------------- STRINGS -------------------------------------------------------------------------------------" << endl;

    string name ="Ali";
    string *string_ptr = NULL;

    string_ptr = &name;

    cout << "Der Name ist: " << *string_ptr << endl;
    cout << "----------------------------------------------------- dynamische Speicherverwaltung -------------------------------------------------------------------------------------" << endl;
    
    int *feld2 = NULL; //Neuer Feldarray zeigt nix
    int n;  // Eine bel Variable
    cout << "Geben Sie eine Länge an:" ;
  cin >> n;

    feld2 = new int[n]; // Schlüsseloperator new reserviert neuen platz

    for(int j=0;j<n;j++)
    {
        feld2[j] = 0; // jeder Wert wird Null zugewiwesen
    }

    // for (int i =0; i<n;i++)
    // {
    //     cout << "Das ist der " << i+1 << ". Wert: " << *(feld) << endl;
    // }    
    delete[] feld2; // Freigabe
    feld2 = NULL ; // Zeigt wieder auf nix
 // Variante 2
 int *int_ptr = NULL;
 int_ptr = new int;

 cout << int_ptr << endl; // adresse
 cout << *int_ptr << endl; // 0
 *int_ptr = 100;
 cout << *int_ptr << endl; // 100
 delete int_ptr;
 cout << int_ptr << endl; // 0

return 0;
}

int addonbyVal(int x)
{
    return ++x;
}
 void addonbyref(int *x)   // in der Funktion steht ein Pointer // Heißt ein Pointer wird der Funktion gegeben
 {
     ++(*x); // Dereferenzieren und ++
 }
 