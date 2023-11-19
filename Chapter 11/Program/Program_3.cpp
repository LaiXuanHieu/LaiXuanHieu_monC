#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

struct EmployeePay
{
    string name;
    int empNum;
    double payRate;
    double hours;
    double grossPay;
};
int main()
{
    EmployeePay employee1 = {"Betty Ross", 141, 18.75};
    EmployeePay employee2 = {"Jill Sandburg", 142, 17.50};
    cout << fixed << showpoint << setprecision(2);
    cout << "Name:" << employee1.name << endl;
    cout << "Employee Number: " << employee1.empNum << endl;
    cout << "Enter the hours worked by this employee:";
    cin >> employee1.hours;
    employee1.grossPay = employee1.hours * employee1.payRate;
    cout << "Gross Pay: " << employee1.grossPay << endl;

    cout << "Name:" << employee2.name << endl;
    cout << "Employee Number: " << employee2.empNum << endl;
    cout << "Enter the hours worked by this employee:";
    cin >> employee2.hours;
    employee2.grossPay = employee2.hours * employee2.payRate;
    cout << "Gross Pay:" << employee2.grossPay << endl;
    return 0;
}