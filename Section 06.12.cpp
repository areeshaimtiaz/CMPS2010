// Textbook Programming Challenges: 7. Celsius Temperature Table

#include <iostream>
#include <iomanip>
using namespace std;


double celsius(double temperature);

int main()
{
    // Double values are rounded to 2 d.p
    cout << setprecision(2) << fixed << showpoint;
    for (int i = 0; i <= 20; i++)
        cout << i << "˚F is equivalent to " << celsius(i) << "˚C." << endl;
    return 0;
}

double celsius(double temperature)
{
    double result;
    result = (temperature - 32) * 5/9;
    return result;
}
