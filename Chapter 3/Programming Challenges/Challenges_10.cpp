#include <iostream>
using namespace std;

int main()
{
    double replacementCost;

    // Input the replacement cost
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum amount of insurance (80% of replacement cost)
    double minimumInsurance = 0.8 * replacementCost;

    // Display the minimum amount of insurance
    cout << "You should buy at least $" << minimumInsurance << " of insurance for the property." << endl;

    return 0;
}