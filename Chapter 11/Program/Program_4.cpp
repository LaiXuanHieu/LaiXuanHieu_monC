#include <iostream>
#include <iomanip>
using namespace std;
struct PayInfo {
    int hours;
    double payRate;
};
int main() {
    const int NUM_WORKERS = 3;
    PayInfo worker[NUM_WORKERS];
    int index;
    cout << "Enter the hours worked by " << NUM_WORKERS 
            << "employees and their hourly rates.\n";
    for (index = 0; index < NUM_WORKERS; index++)
    {
        cout << "Hours worked by employee #" << (index + 1);
        cout << ": ";
        cin >> worker[index].hours;
        cout << "Hourly pay rate for employee #";
        cout << (index + 1) << ": ";
        cin >> worker[index].payRate;
        cout << endl;
    }
    cout << "Here is the gross pay for each employee:" << endl;
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_WORKERS; index++)
    {
        double gross;
        gross = worker[index].hours * worker[index].payRate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << gross << endl;
    }
    return 0;
}