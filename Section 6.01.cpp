// Textbook Question 33


#include <iostream>
using namespace std;

int half(int number);                          // Function Prototype OR Function Declaration

int main()
{
    int result, number;
    cout << "Enter a number: ";
    cin >> number;
    result = half(number);                    // Function Call
    cout << "Half of " << number << " is " << result << endl;
    return 0;
}

// Function Definition
int half(int number)                          // Function Header
{
    return number / 2;
}