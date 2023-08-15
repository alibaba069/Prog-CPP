// Aufgabe 2 
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

class Fussballtabelle
{
   private: 
    string name;
    int wins;
    int loss;
    int draw;
    int goaldiffrence;
    public: 
    void nameWin()
    {
        cout<< "----------------------------------------------------------------------------------------------------------------" << endl;
        cout << " Um welche Manschaft handelt es sich?: ";
         getline(cin >> ws, name);
        // cin >> name;
        cout << endl;
    }
    void setWin()
    {  
        cout << "Geben Sie die Anzahl der Gewinne an: ";
        cin >> wins;
        cout << endl;

    }
    void setLoss()
    {
        cout << " Geben Sie die Anzahl der Verluste an: ";
        cin >> loss;
        cout << endl;
    }
    void setDraw()
    {
        cout << " Geben Sie die Anzahl der Remis an: ";
        cin >> draw;
        cout << endl;
    }
    void Tabellenergebnis()
    {
        cout << name <<" hat " << wins <<  " Spiele gewonnen, "<< loss << " Spiele verloren und "<< draw << " Spiele unentschieden gespielt." << endl;
        cout << "Insgesamt hat " << name << " " << wins+loss+draw << " Spiele gespielt." << endl;
    }

};

int main (void)
{
    Fussballtabelle Bayern;
    Bayern.nameWin();
    Bayern.setWin();
    Bayern.setLoss();
    Bayern.setDraw();
    Bayern.Tabellenergebnis();
   //  Bayern.getWin();
    
    Fussballtabelle Dortmund;
    Dortmund.nameWin();
    Dortmund.setWin();
    Dortmund.setLoss();
    Dortmund.setDraw();
    Dortmund.Tabellenergebnis();
    return 0;
}