//this program calculator the calories 
#include <iostream>
using namespace std;

int main()
{
    const int cookiesPerBag = 30;
    const int servingsPerBag = 10;
    const int caloriesPerServing = 300;

    // Input the number of cookies eaten
    int cookiesEaten;
    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    // Calculate the total calories consumed
    int totalCalories = (cookiesEaten * caloriesPerServing) / (cookiesPerBag / servingsPerBag);

    // Display the result
    cout << "Total calories consumed: " << totalCalories << " calories" << endl;

    return 0;
}