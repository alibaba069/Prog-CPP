#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

/* Funktionen für Strings

string Wort
string wort2

c:

copy:        strcpy(wort,wort2) =>   kopiertes Wort <- orginal Wort
concatenate: strcat(wort,wort2) =>   bestehendes Wort <- neues zu hinzufüngende Wort
length:      strlen(wort)       =>   Anzahl der Elemente inkl. space und zeichen
compare:     strcmp(wort,wort2) =>   Vergleicht ob die Anzahl der Elemente von wort mit wort2 

c++:

substring:   wort.substr(x,4y); =>   Gibt an der x. Stelle y Elemente an (wichtig mit \0)
search:      wort.find("Blabla")=>   Sucht das Wort Blabla an der Stelle x
length,c++:  wort.length()      =>   Gibt die Länge von wort an
 für input :   statt cin =>  getline(cin,string)
*/
// string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
