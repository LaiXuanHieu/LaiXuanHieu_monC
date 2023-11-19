#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int MAX_EMPLOYEES = 5;
    int hours[MAX_EMPLOYEES];     // Array to store hours worked
    double payRate[MAX_EMPLOYEES]; // Array to store hourly pay rates
    int numEmployees;             // The number of employees

    // Get the number of employees.
    cout << "How many employees do you have? ";
    cin >> numEmployees;

    // Input the payroll data.
    cout << "Enter the hours worked by " << numEmployees;
    cout << " employees and their hourly rates.\n";
    for (int index = 0; index < numEmployees; index++)
    {
        cout << "Hours worked by employee #" << (index + 1) << ": ";
        cin >> hours[index];

        cout << "Hourly pay rate for employee #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Display each employee's gross pay.
    cout << "Here is the gross pay for each employee:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Employee #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}