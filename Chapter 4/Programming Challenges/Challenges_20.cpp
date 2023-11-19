//chương trình tính tốc đọ âm thanh 
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Constants for the speed of sound in different media (feet per second)
    const double SPEED_AIR = 1100.0;
    const double SPEED_WATER = 4900.0;
    const double SPEED_STEEL = 16400.0;

    char choice;
    double distance, time;

    // Display the menu
    cout << "Select a medium for sound propagation:" << endl;
    cout << "A - Air" << endl;
    cout << "W - Water" << endl;
    cout << "S - Steel" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    // Validate user's choice
    switch (choice) {
        case 'A':
        case 'a':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be negative." << endl;
            } else {
                time = distance / SPEED_AIR;
                cout << fixed << setprecision(4) << "It will take " << time << " seconds to travel " << distance << " feet in air." << endl;
            }
            break;

        case 'W':
        case 'w':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be negative." << endl;
            } else {
                time = distance / SPEED_WATER;
                cout << fixed << setprecision(4) << "It will take " << time << " seconds to travel " << distance << " feet in water." << endl;
            }
            break;

        case 'S':
        case 's':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be negative." << endl;
            } else {
                time = distance / SPEED_STEEL;
                cout << fixed << setprecision(4) << "It will take " << time << " seconds to travel " << distance << " feet in steel." << endl;
            }
            break;

        default:
            cout << "Invalid choice. Please select A, W, or S." << endl;
    }

    return 0;
}