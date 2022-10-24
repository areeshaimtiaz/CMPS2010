// Texbook Question 35

#include <iostream>
using namespace std;

int timesTen(int number);

int main()
{
    int number, result;
    cout << " Enter a number: ";
    cin >> number;
    result = timesTen(number);
    cout << number << " times 10 is " << result;
    return 0;
}

int timesTen(int number)
{
    return number * 10;
}