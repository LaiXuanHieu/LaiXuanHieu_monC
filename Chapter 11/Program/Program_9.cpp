#include <iostream>
#include <iomanip>
using namespace std;

union PaySource
{
    int hours;
    float sales;
};
int main()
{
    PaySource employee1;
    char payType;
    float payRate;
    float grossPay;

    cout << fixed << showpoint << setprecision(2);
    cout << "This program calculates either hourly wages or\n";
    cout << "sales commission.\n";
    cout << "Enter H for hourly wages or C for commission:";
    cin >> payType;
    if (payType == 'H' || payType == 'h')
    {
        cout << "What is the hourly pay rate?";
        cin >> payRate;
        cout << "How many hours were worked?";
        cin >> employee1.hours;
        grossPay = employee1.hours * payRate;
        cout << "Gross pay :$" << grossPay << endl;
    }
    else if (payType == 'C' || payType == 'c')
    {
        cout << " What are the total sales for this employee?";
        cin >> employee1.sales;
        grossPay = employee1.sales * 0.10;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else
    {
        cout << payType << "is not a valid selection.\n";
    }
    return 0;
}