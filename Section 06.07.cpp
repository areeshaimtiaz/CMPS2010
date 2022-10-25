// Textbook Programming Challenges: 2. Rectangle Area

#include <iostream>
using namespace std;

double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
    double length, width, area;
    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);
    return 0;
}

double getLength()
{
    double number;
    do
    {
        cout << "Enter the length: ";
        cin >> number;
        if (number < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (number < 0);

    return number;
}

double getWidth()
{
    double number;
    do
    {
        cout << "Enter the width: ";
        cin >> number;
        if (number < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (number < 0);

    return number;
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double length, double width, double area)
{
    cout << "Length: " << length << endl;
    cout << "Width : " << width << endl;
    cout << "Area: " << area << endl;
}
