#include <iostream>
#include <stdio.h>

using namespace std;
int main(void)
{
    int width_Room = 4;
    int length_Room; 
    cout << "Enter the Width of the room: ";
    cin >> width_Room;

    cout << "Enter the Length of the Room: ";
    cin >> length_Room;

    int Res;
    Res = width_Room * length_Room;

    cout << "The area of the room is " << Res << " m^2." << endl;

    return 0;
}