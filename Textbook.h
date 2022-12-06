// Section 14.7 - Aggregation

#ifndef TEXTBOOK_H
#define TEXTBOOK_H
#include <iostream>
#include <string>
using namespace std;

class Textbook
{
private:
    string title;
    string author;
    string publisher;
public:
    Textbook() // Default constructor
    {
        title = "";
        author = "";
        publisher = "";
    }
    Textbook(string t, string a, string p) // Overloaded constructor
    { }
    void set(string t, string a, string p) // Mutator
    {
        title = t;
        author = a;
        publisher = p;
    }
    string print() const // Accessor
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publisher: " << publisher << endl;
    }
};

#endif