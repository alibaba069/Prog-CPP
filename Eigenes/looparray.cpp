#include <iostream>

using namespace std;

int main (void)
{
    /* char vowels [] = {'a','e','i','o','u'};

    cout << "The vowel is " << vowels[4] << endl;
*/

    int Size=4;
 /*   int score[Size];

    cout << "Give me the first score: ";
    cin >> score [0];
    cout << "Give me the second score: ";
    cin >> score [1];
    cout << "Give me the third score: ";
    cin >> score [2];
    cout << "Give me the forth score: ";
    cin >> score [3];
    cout << "Give me the fifth score: ";
    cin >> score [4];

    cout << endl;

    cout << "first score: " << score[0] <<endl;
    cout << "second score: " << score[1] <<endl;
    cout << "third score: " << score[2] <<endl;
    cout << "forth score: " << score[3] <<endl;
    cout << "fifth score: " << score[4] <<endl;
*/
    int Test_score [Size];
    int i;
for (i=0;i<=Size;i++)
{
    cout << " Give me the " << i+1 << ". score: ";
    cin >> Test_score[i];
}
cout << endl;
for (i=4;i>=0;i--)
{
    cout << i+1<< ". score is " << Test_score[i] << endl;
}
    return 0;
}
