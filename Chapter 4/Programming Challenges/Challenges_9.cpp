#include <iostream>
using namespace std;

int main()
{
    int pennies, nickels, dimes, quarters;
    double totalValue;

    // Input the number of coins
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value in dollars
    totalValue = pennies * 0.01 + nickels * 0.05 + dimes * 0.1 + quarters * 0.25;

    // Check if the total value is exactly one dollar
    if (totalValue == 1.0)
    {
        cout << "Congratulations! You won the game. The total value is exactly one dollar." << endl;
    }
    else if (totalValue < 1.0)
    {
        cout << "Sorry, the amount entered is less than one dollar." << endl;
    }
    else
    {
        cout << "Sorry, the amount entered is more than one dollar." << endl;
    }

    return 0;
}