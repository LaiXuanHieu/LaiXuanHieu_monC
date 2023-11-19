#include <iostream>
#include <string>
using namespace std;

int main()
{
    string runner1, runner2, runner3;
    double time1, time2, time3;

    // Input runner names and times
    cout << "Enter the name of the first runner: ";
    cin >> runner1;
    cout << "Enter the time it took for " << runner1 << " to finish the race (in seconds): ";
    cin >> time1;

    cout << "Enter the name of the second runner: ";
    cin >> runner2;
    cout << "Enter the time it took for " << runner2 << " to finish the race (in seconds): ";
    cin >> time2;

    cout << "Enter the name of the third runner: ";
    cin >> runner3;
    cout << "Enter the time it took for " << runner3 << " to finish the race (in seconds): ";
    cin >> time3;

    // Input validation: Check if times are positive
    if (time1 < 0 || time2 < 0 || time3 < 0)
    {
        cout << "Invalid input: Race times must be positive numbers." << endl;
        return 1; // Exit the program
    }

    // Determine the winners
    if (time1 < time2 && time1 < time3)
    {
        cout << runner1 << " came in first place." << endl;
        if (time2 < time3)
        {
            cout << runner2 << " came in second place." << endl;
            cout << runner3 << " came in third place." << endl;
        }
        else
        {
            cout << runner3 << " came in second place." << endl;
            cout << runner2 << " came in third place." << endl;
        }
    }
    else if (time2 < time1 && time2 < time3)
    {
        cout << runner2 << " came in first place." << endl;
        if (time1 < time3)
        {
            cout << runner1 << " came in second place." << endl;
            cout << runner3 << " came in third place." << endl;
        }
        else
        {
            cout << runner3 << " came in second place." << endl;
            cout << runner1 << " came in third place." << endl;
        }
    }
    else
    {
        cout << runner3 << " came in first place." << endl;
        if (time1 < time2)
        {
            cout << runner1 << " came in second place." << endl;
            cout << runner2 << " came in third place." << endl;
        }
        else
        {
            cout << runner2 << " came in second place." << endl;
            cout << runner1 << " came in third place." << endl;
        }
    }

    return 0;
}