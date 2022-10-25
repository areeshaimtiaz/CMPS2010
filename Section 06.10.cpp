// Textbook Programming Challenges: 5. Falling Distance

#include <iostream>
using namespace std;

const double G = 9.8;

double fallingDistance(int seconds);

int main()
{
    double distance;
    for (int i = 1; i <= 10; i++)
    {
        distance = fallingDistance(i);
        // Conditional Output
        cout << "In " << i << (i == 1 ? " second" : " seconds") << ", the object falls " << distance << " meters." << endl;
    }
    return 0;
}

double fallingDistance(int seconds)
{
    double distance;
    distance = (0.5 * G * seconds * seconds);
    return distance;
}
