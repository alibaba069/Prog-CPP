#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

void length_of_string(string name)
{
   cout << " The length of the string is " << name.length() << endl; 

}
char input_of_message(string message)
{
    cout << "Enter your secret message: ";
    getline(cin,message);

    return message;
 
}

int main(void)
{
    string alphabet ("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
    string key ("ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba");
    string secret_message;


    string code = input_of_message(secret_message);
    cout << code << endl;

    //length_of_string(alphabet);
    //length_of_string(key);



    return 0;
}