#include <iostream>
#include <iomanip>
using namespace std;

enum Day {MONDAY, TUESDAY, WEDNESDAY,THURSDAY, FRIDAY };
void displayDayName(Day);
int main() {
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    double total = 0.0;
    Day workDay;
    for ( workDay = MONDAY; workDay <= FRIDAY; 
                            workDay = static_cast<Day>(workDay +1))
    {
        cout << "Enter the sales for day ";
        displayDayName(workDay);
        cout << ": ";
        cin >> sales[workDay];
    }
    for (workDay = MONDAY; workDay <= FRIDAY; workDay = static_cast<Day>(workDay + 1))
            total += sales[workDay];
    cout << "The total sales are $ " << setprecision(2)
        << fixed << total << endl;
    return 0;
}
void displayDayName(Day d)
{
    switch(d)
    {
        case MONDAY   :cout << "Monday";
                        break;
        case TUESDAY :cout << "Tuesday";
                        break;
        case WEDNESDAY :cout << "Wednesday";
                        break;
        case THURSDAY : cout << "Thursday";
                        break;
        case FRIDAY : cout << "Friday";
    }
}