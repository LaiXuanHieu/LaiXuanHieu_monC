//this program calculator the number of widgets
#include <iostream>
using namespace std;

int main()
{
    double palletWeight, totalWeight, widgetWeight;

    // Input the weight of the pallet and the total weight
    cout << "Enter the weight of the pallet (in pounds): ";
    cin >> palletWeight;
    cout << "Enter the total weight (pallet with widgets, in pounds): ";
    cin >> totalWeight;

    // Input the weight of one widget
    cout << "Enter the weight of one widget (in pounds): ";
    cin >> widgetWeight;

    // Calculate the number of widgets
    int numberOfWidgets = (totalWeight - palletWeight) / widgetWeight;

    // Display the result
    cout << "The number of widgets stacked on the pallet is: " << numberOfWidgets << endl;

    return 0;
}