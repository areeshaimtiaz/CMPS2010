// Section 14.7 - Aggregation

#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
#include "Instructor.h"
#include "Textbook.h"
using namespace std;

class Course
{
private:
    string courseName;
    Instructor instructor;
    Textbook textbook;
public:
    Course(string course, string lastName, string firstName, string officeNumber, string title, string author, string publisher) // Default constructor
    {
        courseName = course; // Assign course name
        instructor.set(lastName, firstName, officeNumber); // Assign instructor
        textbook.set(title, author, publisher); // Assign textbook
    }
    void print() const // Accessor
    {
        cout << "Course name: " << courseName << endl << endl;
        cout << "Instructor information: " << endl;
        instructor.print();
        cout << endl;
        cout << "Textbook information: " << endl;
        textbook.print();
        cout << endl;
    }
};

#endif