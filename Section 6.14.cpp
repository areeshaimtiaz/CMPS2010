// Textbook Programming Challenges: 9. Present Value

#include <iostream>
#include <cmath>
using namespace std;

double presentValue(double futureValue, double annualInterestRate, int years);

int main()
{
    double futureValue, annualInterestRate, result;
    int years;

    do
    {
        cout << "Enter your future value: ";
        cin >> futureValue;
        if (futureValue < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (futureValue < 0);

    do
    {
        cout << "Enter interest rate: ";
        cin >> annualInterestRate;
        if ((annualInterestRate < 0) || (annualInterestRate > 100))
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while ((annualInterestRate < 0) || (annualInterestRate > 100));

    do
    {
        cout << "Enter the years: ";
        cin >> years;
        if (years < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (years < 0);

    result = presentValue(futureValue,annualInterestRate, years);
    cout << "In order to get $" << futureValue << " in " << years << " years at a rate of " << annualInterestRate << "%, you need to deposit $" << result << " today." << endl;

    return 0;
}

double presentValue(double futureValue, double annualInterestRate, int years)
{
    double value;
    // Power Function
    value = (futureValue / (pow((1 + (annualInterestRate / 100)), years)));
    return value;
}