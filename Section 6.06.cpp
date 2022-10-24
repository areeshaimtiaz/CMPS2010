// Textbook Programming Challenges: 1. Markup

#include <iostream>
using namespace std;

double calculateRetail(double cost, double markup);

int main()
{
    double cost, price;
    int markup;

    do
    {
        cout << "Enter the wholesale cost: ";
        cin >> cost;
        if (cost < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (cost < 0);

    do
    {
        cout << "Enter the markup percentage: ";
        cin >> markup;
        if (markup < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (markup < 0);

    price = calculateRetail(cost, markup);
    cout << "If an item's wholesale cost is " << cost << " and its markup percentage is " << markup << " percent, then the item's retail price is " << price << endl;
    return 0;
}

double calculateRetail(double cost, double markup)
{
    double price;
    price = cost + ((markup/100) * cost);
    return price;
}
