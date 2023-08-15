# include <iostream>
# include <vector>

using namespace std;

int main (void)
{
    vector <int> vector1;
    vector <int> vector2;

    int addnew_int =10;       // man kann es auch weglassen
    int addnew_int2 = 20;     // man kann es auch weglassen
    int addnew_int3 =100;     // man kann es auch weglassen
    int addnew_int4 = 200;    // man kann es auch weglassen
    

    vector1.push_back(addnew_int);  // oder vedctor1.push_back(10);        
    vector1.push_back(addnew_int2); // oder vedctor1.push_back(20);

    vector2.push_back(addnew_int3);    // oder vedctor2.push_back(100);
    vector2.push_back(addnew_int4);    // oder vedctor2.push_back(200);

    cout << vector1.at(0) <<endl;
    cout << vector1.at(1) << endl;
    cout << "The size of the vector1 is " << vector1.size() << endl << endl;

    cout << vector2.at(0) <<endl;
    cout << vector2.at(1) << endl;
    cout << "The size of the vector2 is " << vector2.size() << endl << endl;

/* 2D VEKTOR --------------------------------------------------------------------- */
    vector<vector <int> > vector_2d;
    
    // vector1 und vector2  werden zu einer Matrix

    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    cout << vector_2d.at(0).at(0) << " " << vector_2d.at(0).at(1)<<endl;
    cout << vector_2d.at(1).at(0) << " " << vector_2d.at(1).at(1)<<endl;




    return 0;

}