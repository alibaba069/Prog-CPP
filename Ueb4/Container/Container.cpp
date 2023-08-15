#include <iostream>
#include <string>
# include <vector>
using namespace std;

typedef struct paar{
    string word;
    int count; 
    }Paar;

Paar inputname()
{
    Paar uno;
    cout << "Geben Sie ein Wort ein:";
    cin >> uno;
    cout << uno << endl;
}
int main()
{
    vector <string> vector1;
    int n;
    Paar aa; 
    Paar bb;

    // cout<< "Wie viele Wörter wollen Sie analysieren? : ";
    // cin >> n;
    // cout << endl;

    aa.inputname();


    // for (int i = 0; i<n; i++)
    // {
    //     cout << "Geben Sie das " << i+1 << ". Element an: ";
    //    getline(cin >> ws, Paar word);
    // }

}