// Textbook Programming Challenges: 8. Coin Toss

#include <iostream>
#include <cstdlib>
using namespace std;

void coinToss();

int main()
{
    int number;
    string result;
    cout << "How many times should the coin be tossed: ";
    cin >> number;

    for(int i = 1; i <= number; i++)
    {
        cout << i << ". ";
        coinToss();
    }
    return 0;
}

void coinToss()
{
    int number;
    // Generates random integers
    number = rand() % 2;

    if (number == 0)
    {
        cout << "Heads" << endl;
    }
    else
    {
        cout << "Tails" << endl;
    }
}
