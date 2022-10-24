// Textbook Programming Challenges: 4. Safest Driving Area

#include <iostream>
using namespace std;

int getNumAccidents(string name);
void findLowest(int northAccidents, int southAccidents, int eastAccidents, int westAccidents, int centralAccidents);

int main()
{
    int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;
    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");
    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);
    return 0;
}

int getNumAccidents(string name)
{
    int accidents;
    do
    {
        cout << "Enter the number of automobile accidents reported in " << name << " in the last year: ";
        cin >> accidents;
        if (accidents < 0)
        {
            cout << "Out of Range! Try again." << endl;
        }
    } while (accidents < 0);
    return accidents;
}

void findLowest(int northAccidents, int southAccidents, int eastAccidents, int westAccidents, int centralAccidents)
{
    if ((northAccidents < southAccidents) && (northAccidents < eastAccidents) && (northAccidents < westAccidents) && (northAccidents < centralAccidents))
    {
        cout << "Safest driving region is North" << endl;
        cout << "Accident figure: " << northAccidents << endl;
    }
    else if ((southAccidents < northAccidents) && (southAccidents < eastAccidents) && (southAccidents < westAccidents) && (southAccidents < centralAccidents))
    {
        cout << "Safest driving region is South" << endl;
        cout << "Accident figure: " << southAccidents << endl;
    }
    else if ((eastAccidents < northAccidents) && (eastAccidents < southAccidents) && (eastAccidents < westAccidents) && (eastAccidents < centralAccidents))
    {
        cout << "Safest driving region is East" << endl;
        cout << "Accident figure: " << eastAccidents << endl;
    }
    else if ((westAccidents < northAccidents) && (westAccidents < southAccidents) && (westAccidents < eastAccidents) && (westAccidents < centralAccidents))
    {
        cout << "Safest driving region is West" << endl;
        cout << "Accident figure: " << westAccidents << endl;
    }
    else if ((centralAccidents < northAccidents) && (centralAccidents < southAccidents) && (centralAccidents < eastAccidents) && (centralAccidents < westAccidents))
    {
        cout << "Safest driving region is Central" << endl;
        cout << "Accident figure: " << centralAccidents << endl;
    }
}