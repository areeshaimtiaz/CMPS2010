// Textbook Programming Challenges: 3. Winning Division

#include <iostream>
using namespace std;

double getSales(int choice);
void findHighest(double sale1, double sale2, double sale3, double sale4);

int main()
{
    double sale1, sale2, sale3, sale4;
    sale1 = getSales(1);
    sale2 = getSales(2);
    sale3 = getSales(3);
    sale4 = getSales(4);
    findHighest(sale1, sale2, sale3, sale4);
    return 0;
}

double getSales(int choice)
{
    double sales;
    switch (choice)
    {
        case 1:
            do
            {
                cout << "Enter Northeast's quarterly sales figure: ";
                cin >> sales;
                if (sales < 0.00)
                {
                    cout << "Out of Range! Try again." << endl;
                }
            } while (sales < 0.00);
            break;

        case 2:
            do
            {
                cout << "Enter Southeast's quarterly sales figure: ";
                cin >> sales;
                if (sales < 0.00)
                {
                    cout << "Out of Range! Try again." << endl;
                }
            } while (sales < 0.00);
            break;

        case 3:
            do
            {
                cout << "Enter Northwest's quarterly sales figure: ";
                cin >> sales;
                if (sales < 0.00)
                {
                    cout << "Out of Range! Try again." << endl;
                }
            } while (sales < 0.00);
            break;

        case 4:
            do
            {
                cout << "Enter Southwest's quarterly sales figure: ";
                cin >> sales;
                if (sales < 0.00)
                {
                    cout << "Out of Range! Try again." << endl;
                }
            } while (sales < 0.00);
            break;
    }
    return sales;
}

void findHighest(double sale1, double sale2, double sale3, double sale4)
{
    if ((sale1 > sale2) && (sale1 > sale3) && (sale1 > sale4))
    {
        cout << "Highest-Grossing Division: Northeast" << endl;
        cout << "Sales: " << sale1;
    }
    else if ((sale2 > sale1) && (sale2 > sale3) && (sale2 > sale4))
    {
        cout << "Highest-Grossing Division: Southeast" << endl;
        cout << "Sales: " << sale2;
    }
    else if ((sale3 > sale1) && (sale3 > sale2) && (sale3 > sale4))
    {
        cout << "Highest-Grossing Division: Northwest" << endl;
        cout << "Sales: " << sale3;
    }
    else if ((sale4 > sale1) && (sale4 > sale2) && (sale4 > sale3))
    {
        cout << "Highest-Grossing Division: Southwest" << endl;
        cout << "Sales: " << sale4;
    }

}
