#include <iostream>
using namespace std;

// Function to calculate the falling distance
double fallingDistance(int time)
{
    const double g = 9.8; // Acceleration due to gravity (m/s^2)
    return 0.5 * g * time * time;
}

int main()
{
    cout << "Time (s)\tDistance (m)\n";
    cout << "-------------------------\n";

    for (int time = 1; time <= 10; time++)
    {
        double distance = fallingDistance(time);
        cout << time << "\t\t" << distance << endl;
    }

    return 0;
}
