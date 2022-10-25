// Textbook Question 37

#include <iostream>
using namespace std;

bool getNumber(int &number);

int main()
{
    int number;
    cout << "Enter a number from 1 - 100: ";
    cin >> number;
    while (!getNumber(number))
    {
        cout << "Enter a number from 1 - 100: ";
        cin >> number;
    }

    return 0;
}

bool getNumber(int &number)
{
    bool flag;
    if ((number >= 0) && (number <= 100))
    {
        flag = true;
    }
   else
    {
       flag = false;
    }
   return flag;
}
