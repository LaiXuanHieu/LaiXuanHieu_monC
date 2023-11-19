#include <iostream>
using namespace std;

// Function to get the number of employees
int getNumEmployees()
{
    int numEmployees;
    do
    {
        cout << "Enter the number of employees in the company: ";
        cin >> numEmployees;
    } while (numEmployees < 1);
    return numEmployees;
}

// Function to get the total number of days absent
int getTotalDaysAbsent(int numEmployees)
{
    int totalDaysAbsent = 0;
    for (int i = 1; i <= numEmployees; i++)
    {
        int daysMissed;
        do
        {
            cout << "Enter the number of days employee " << i << " missed during the past year: ";
            cin >> daysMissed;
        } while (daysMissed < 0);
        totalDaysAbsent += daysMissed;
    }
    return totalDaysAbsent;
}

// Function to calculate the average days absent
double calcAverageDaysAbsent(int numEmployees, int totalDaysAbsent)
{
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}

int main()
{
    int numEmployees = getNumEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calcAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << "The average number of days absent for employees is: " << averageDaysAbsent << " days" << endl;

    return 0;
}
