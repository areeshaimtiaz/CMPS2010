// Textbook Programming Challenges: 6. Kinetic Energy

#include <iostream>
using namespace std;

double kineticEnergy(double mass, double velocity);

int main()
{
    double energy, mass, velocity;
    do
    {
        cout << "Mass: ";
        cin >> mass;
        if (mass < 0.00)
        {
            cout << "Out of Range! Try again.";
        }
    } while (mass < 0.00);

    cout << "Velocity: ";
    cin >> velocity;

    energy = kineticEnergy(mass, velocity);
    cout << "The object of mass " << mass << " kg and velocity " << velocity << " m/s has kinetic energy of " << energy << " J." << endl;
    return 0;
}

double kineticEnergy(double mass, double velocity)
{
    double kineticEnergy;
    kineticEnergy = 0.5 * mass * velocity * velocity;
    return kineticEnergy;
}