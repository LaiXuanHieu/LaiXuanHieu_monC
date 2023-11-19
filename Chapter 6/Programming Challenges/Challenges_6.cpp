//chương trình tính toán động năng 
#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate kinetic energy
double kineticEnergy(double mass, double velocity)
{
    return 0.5 * mass * pow(velocity, 2);
}

int main()
{
    double mass, velocity;

    cout << "Enter the mass of the object (in kilograms): ";
    cin >> mass;
    cout << "Enter the velocity of the object (in meters per second): ";
    cin >> velocity;

    double ke = kineticEnergy(mass, velocity);

    cout << "The kinetic energy of the object is: " << ke << " joules" << endl;

    return 0;
}
