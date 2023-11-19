#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate the retail price
double calculateRetail(double wholesaleCost, double markupPercentage)
{
    if (wholesaleCost < 0 || markupPercentage < 0)
    {
        cout << "Invalid input. Wholesale cost and markup percentage must be non-negative." << endl;
        return -1;
    }

    return wholesaleCost + (wholesaleCost * markupPercentage / 100);
}

int main()
{
    double wholesaleCost, markupPercentage;

    // Get the wholesale cost from the user
    cout << "Enter the wholesale cost: $";
    cin >> wholesaleCost;

    // Get the markup percentage from the user
    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    if (retailPrice >= 0)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << "The retail price is: $" << retailPrice << endl;
    }

    return 0;
}
