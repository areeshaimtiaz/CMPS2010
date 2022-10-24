// Textbook Question 36

#include <iostream>
using namespace std;

void display(int arg1, double arg2, char arg3);

int main()
{
    int age;
    double income;
    char initial;

    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your income: ";
    cin >> income;
    cout << "Enter your first name initial: ";
    cin >> initial;
    display(age, income, initial);
    return 0;
}

void display(int arg1, double arg2, char arg3)
{
    cout << "Here are the values: " << arg1 << " " << arg2 << " " << arg3 << endl;
}
