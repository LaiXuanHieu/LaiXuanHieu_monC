#include <iostream>
#include <string>
using namespace std;

// Function to get the number of accidents in a region from the user
int getNumAccidents(string regionName)
{
    int accidents;
    do
    {
        cout << "Enter the number of automobile accidents reported in the " << regionName << " region last year: ";
        cin >> accidents;
        if (accidents < 0)
        {
            cout << "Accident number cannot be negative. Please enter a valid number.\n";
        }
    } while (accidents < 0);

    return accidents;
}

// Function to find the region with the lowest number of accidents
void findLowest(int north, int south, int east, int west, int central)
{
    string lowestRegion;
    int lowestAccidents;

    lowestAccidents = north;
    lowestRegion = "North";

    if (south < lowestAccidents)
    {
        lowestAccidents = south;
        lowestRegion = "South";
    }
    if (east < lowestAccidents)
    {
        lowestAccidents = east;
        lowestRegion = "East";
    }
    if (west < lowestAccidents)
    {
        lowestAccidents = west;
        lowestRegion = "West";
    }
    if (central < lowestAccidents)
    {
        lowestAccidents = central;
        lowestRegion = "Central";
    }

    cout << "The region with the fewest reported automobile accidents is " << lowestRegion << " with " << lowestAccidents << " accidents.\n";
}

int main()
{
    int northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents;

    // Get the number of accidents for each region
    northAccidents = getNumAccidents("North");
    southAccidents = getNumAccidents("South");
    eastAccidents = getNumAccidents("East");
    westAccidents = getNumAccidents("West");
    centralAccidents = getNumAccidents("Central");

    // Find and display the region with the fewest accidents
    findLowest(northAccidents, southAccidents, eastAccidents, westAccidents, centralAccidents);

    return 0;
}
