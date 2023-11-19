// chương trình tính phí hàng tháng
#include <iostream>
using namespace std;

int main()
{
    double loanPayment, insurance, gas, oil, tires, maintenance;

    // Input monthly costs for various expenses
    cout << "Enter monthly cost of loan payment: $";
    cin >> loanPayment;

    cout << "Enter monthly cost of insurance: $";
    cin >> insurance;

    cout << "Enter monthly cost of gas: $";
    cin >> gas;

    cout << "Enter monthly cost of oil: $";
    cin >> oil;

    cout << "Enter monthly cost of tires: $";
    cin >> tires;

    cout << "Enter monthly cost of maintenance: $";
    cin >> maintenance;

    // Calculate total monthly cost
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;

    // Calculate total annual cost (12 months)
    double totalAnnualCost = totalMonthlyCost * 12;

    // Display the results
    cout << "Total monthly cost: $" << totalMonthlyCost << endl;
    cout << "Total annual cost: $" << totalAnnualCost << endl;

    return 0;
}