 #include <iostream>
#include <string>
#include "noten.h"

using namespace std; 

Note::Note(float val)
{
    value = val;
    next = NULL;
}

inline float Note::getValue()
{
    return value;
}

inline void Note::setValue(float val)
{
    value = val;
}

inline Note *getNext() const
{
    return next;
}     

inline void Note::setNext(Note *n)
{
    next = n;
}

inline void Note::print() const
{
    cout << getValue() << " ";
}


// ______________________________________________________________________Notenliste______________________________________

NotenListe::NotenListe(int size=0)
{
    if (size == 0)
    first = NULL;
    else 
          for (int i =0; i< size; i++)
          {
            addNote();
          }
}
NotenListe::Note *begin() const; //?

void addNote()
{
    float note; // Note geht von 1 - 6
    cout << "Geben Sie eine Note ein:";
    cin >> note;

    Note* temp = new Note(note);
    temp->setNext(first);
    first=temp;
    
}
		
double calculateAverage() const;

bool NotenListe::isEmpty() const
{
    if (first == NULL)
    {
        return true;
    }
    else return false;
}

unsigned int NotenListe::size() const
{
    int counter=0;
    Note* temp = first;
    while(temp != NULL)
    {
        temp = temp->getNext;
        counter++
    }
    return counter;

}

void NotenListe::print() const
{
    Note* temp = first;
    while(temp != NULL)
    {
        temp->print();
        temp = temp->getNext;

    }
}
NotenListe::~NotenListe()
{
    Note* temp= first;
    Note* temp_prev = 
} 