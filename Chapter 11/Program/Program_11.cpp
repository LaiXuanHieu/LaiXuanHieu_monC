#include <iostream>
#include <iomanip>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main(){
    const int NUM_DAYS = 5;
    double sales[NUM_DAYS];
    double total = 0.0;
    double index;
    for (index = MONDAY; index <= FRIDAY; index++) {
        cout << "Enter the sales for day"
            << index << ": ";
        cin >> sales[index];
    }
    for (index = MONDAY; index <= FRIDAY; index++)
        total += sales[index];
    cout << "The total sales are $" << setprecision(2)
        << fixed << total << endl;

    return 0;
}