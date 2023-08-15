#include <iostream>
#include <string>
#include <vector>
using namespace std;

/* Allgemein:

Erstellung einer H-Datei:

class Name
{
  private:
  hier stehen die Attribute
  typ attribut;
  typ attribut2;

  public:    
  Hier Stehen die Methoden         
  Name();                     // Konstruktor
  ~Name();                    // Dekonstruktor
  Name(const Name &name)      // Kopierkonstruktor
  typ Funktion();
};

cpp-Datei:

#include "Datei.h"

Name::Name();
Name::~Name();
typ Name::funktion();

main.cpp:

#include "H-Datei"

int main()
{
  Name irgendeinname();
  Name irgendeinname2();

  irgendeinname.funtion();

  return 0;
}
*/

class Player // Schreib deinen Klassennamen immer groß
{
    private:
    // attributes: types,strings...
    string name = "Ali";
    int health =100;
    int xp = 15;

    public:
    // methods: Funktionen, ....
    void talk(string text_to_say) /* Dieser Teil kann so geschrieben werden, ansonsten müsste er implementiert werden */ { cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};
class Account 
{
    private: 
    string name = "Ali's_bankaccount ";
    double balance = 5000;

    public:
    bool deposit(double bal) {balance += bal; cout << "In deposit" << endl;return true;}
    bool withdraw(double bal) {balance -= bal; cout << "In withdraw" << endl; return true;}
};

int main ()
{
  Player Frank;               // Hier erstellen wir jemanden 
//  Frank.name = "Frank";       // mit . kriegt er einen direkten Zugriff auf die Attribute // bei private: kein dierekter Zugriff
//  Frank.health =100;          // kein Zugriff auf health, weil private
//  Frank.xp = 12;              // kein Zugriff auf health, weil private
 Frank.talk("Hi there!");


  Player *enemy = new Player; // enemy ist kein Playerobjekt, sondern ein Zeiger auf ein Playerobjekt
//  (*enemy).name = "Enemy";    // Mit Klammer dereferenzieren 
//  (*enemy).health = 100;
//  enemy->xp = 15;             // oder mit einem Pfeiloperator
 enemy->talk("I will destroy you");

 Account Ali;
//  Ali.name = "Ali";
//  Ali.balance = 5000;
 Ali.deposit(1000);
 Ali.withdraw(500);


}




