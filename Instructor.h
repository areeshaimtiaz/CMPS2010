// Section 14.7 - Aggregation

#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include <iostream>
#include <string>
using namespace std;

class Instructor
{
private:
    string lastName;
    string firstName;
    string officeNumber;
public:
    Instructor() // Default constructor
    {
        lastName = "";
        firstName = "";
        officeNumber = "";
    }
    Instructor(string lN, string fN, string oN) // Overloaded constructor
    { }
    void set(string lN, string fN, string oN) // Mutator
    {
        lastName = lN;
        firstName = fN;
        officeNumber = oN;
    }
    string print() const // Accessor
    {
        cout << "Last name: " << lastName << endl;
        cout << "First name: " << firstName << endl;
        cout << "Office number: " << officeNumber << endl;
    }
};

#endif