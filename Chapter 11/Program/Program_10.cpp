#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    union
    {
        int hours;
        float sales;
    };
    char payType;
    float payRate;
    float grossPay;
    cout << fixed << showpoint << setprecision(2);
    cout << "sales commission.\n";
    cout << "Enter H for hourly wages or C for commission:";
    cin >> payType;
    if (payType == 'H' || payType == 'h')
    {
        cout << "What is the hourly pay rate?";
        cin >> payRate;
        cout << "How many hours were worked?";
        cin >> hours;
        grossPay = hours * payRate;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else if (payType == 'C' || payType == 'c'){
        cout << "what are the total sales for this employee?";
        cin >> sales;
        grossPay = sales * 0.10;
        cout << "Gross pay: $" << grossPay << endl;
    }
    else
    {
        cout << payType << " is hot a valid selection.\n";
    }
    return 0;
}