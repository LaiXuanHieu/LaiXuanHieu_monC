#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    // Speed of sound constants (meters per second)
    const double SPEED_CARBON_DIOXIDE = 258.0;
    const double SPEED_AIR = 331.5;
    const double SPEED_HELIUM = 972.0;
    const double SPEED_HYDROGEN = 1270.0;

    char choice;
    double temperature, speed;

    // Display the menu
    cout << "Select a gas for sound propagation:" << endl;
    cout << "C - Carbon Dioxide" << endl;
    cout << "A - Air" << endl;
    cout << "H - Helium" << endl;
    cout << "Y - Hydrogen" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Validate user's choice
    switch (choice)
    {
    case 'C':
    case 'c':
        cout << "Enter the temperature in degrees Celsius: ";
        cin >> temperature;
        speed = SPEED_CARBON_DIOXIDE * sqrt(273.0 / (273.0 + temperature));
        cout << fixed << setprecision(2) << "The speed of sound in carbon dioxide at " << temperature << "°C is " << speed << " m/s." << endl;
        break;

    case 'A':
    case 'a':
        cout << "Enter the temperature in degrees Celsius: ";
        cin >> temperature;
        speed = SPEED_AIR * sqrt(273.0 / (273.0 + temperature));
        cout << fixed << setprecision(2) << "The speed of sound in air at " << temperature << "°C is " << speed << " m/s." << endl;
        break;

    case 'H':
    case 'h':
        cout << "Enter the temperature in degrees Celsius: ";
        cin >> temperature;
        speed = SPEED_HELIUM * sqrt(273.0 / (273.0 + temperature));
        cout << fixed << setprecision(2) << "The speed of sound in helium at " << temperature << "°C is " << speed << " m/s." << endl;
        break;

    case 'Y':
    case 'y':
        cout << "Enter the temperature in degrees Celsius: ";
        cin >> temperature;
        speed = SPEED_HYDROGEN * sqrt(273.0 / (273.0 + temperature));
        cout << fixed << setprecision(2) << "The speed of sound in hydrogen at " << temperature << "°C is " << speed << " m/s." << endl;
        break;

    default:
        cout << "Invalid choice. Please select C, A, H, or Y." << endl;
    }

    return 0;
}