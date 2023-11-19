#include <iostream>
#include <iomanip>
using namespace std;

enum Day{ MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main()
{
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    double total = 0.0;
    Day workDay;
    for (workDay = MONDAY; workDay <= FRIDAY;
                            workDay = static_cast<Day>(workDay + 1))
    {
        cout << "Enter the sales for day "
            << workDay << ": ";
        cin >> sales[workDay];
    }
    for (workDay = MONDAY; workDay <= FRIDAY;
                            workDay = static_cast<Day>(workDay + 1))
        total += sales[workDay];
    cout << "The total sales are $" << setprecision(2)
        << fixed << total << endl;
    return 0;
}