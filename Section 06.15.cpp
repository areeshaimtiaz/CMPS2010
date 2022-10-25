// Textbook Programming Challenges: 10. Future Value

#include <iostream>
#include <cmath>
using namespace std;

double futureValue(double presentValue, double monthlyInterestRate, int months);

int main()
{
    double presentValue, monthlyInterestRate, result;
    int months;

    do
    {
        cout << "Present value: ";
        cin >> presentValue;
        if (presentValue < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (presentValue < 0);

    do
    {
        cout << "Monthly interest rate: ";
        cin >> monthlyInterestRate;
        if ((monthlyInterestRate < 0) || (monthlyInterestRate > 100))
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while ((monthlyInterestRate < 0) || (monthlyInterestRate > 100));

    do
    {
        cout << "Months: ";
        cin >> months;
        if (months < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (months < 0);

    result = futureValue(presentValue, monthlyInterestRate, months);
    cout << "With a balance of $" << presentValue << " at a monthly interest rate of " << monthlyInterestRate << "%, you should expect to have $" << result << " in " << months << " months." << endl;

    return 0;
}

double futureValue(double presentValue, double monthlyInterestRate, int months)
{
    double result;
    result = presentValue * pow((1 + (monthlyInterestRate / 100)), months);
    return result;
}
