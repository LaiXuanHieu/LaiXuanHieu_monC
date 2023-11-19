//chương trình xác định bộ phận nào trong bốn bộ phận của công ty (Đông Bắc,Đông Nam, Tây Bắc và Tây Nam) có doanh số bán hàng lớn nhất trong một quý.
#include <iostream>
#include <string>
using namespace std;

// Function to get quarterly sales from the user
double getSales(string divisionName) {
    double sales;
    do {
        cout << "Enter the quarterly sales for " << divisionName << ": $";
        cin >> sales;
        if (sales < 0) {
            cout << "Sales figure cannot be negative. Please enter a valid amount.\n";
        }
    } while (sales < 0);

    return sales;
}

// Function to find the division with the highest sales
void findHighest(double northeast, double southeast, double northwest, double southwest) {
    string highestDivision;
    double highestSales;

    highestSales = northeast;
    highestDivision = "Northeast";

    if (southeast > highestSales) {
        highestSales = southeast;
        highestDivision = "Southeast";
    }
    if (northwest > highestSales) {
        highestSales = northwest;
        highestDivision = "Northwest";
    }
    if (southwest > highestSales) {
        highestSales = southwest;
        highestDivision = "Southwest";
    }

    cout << "The division with the highest sales is " << highestDivision << " with sales of $" << highestSales << endl;
}

int main() {
    double northeastSales, southeastSales, northwestSales, southwestSales;

    // Get sales figures for each division
    northeastSales = getSales("Northeast");
    southeastSales = getSales("Southeast");
    northwestSales = getSales("Northwest");
    southwestSales = getSales("Southwest");

    // Find and display the division with the highest sales
    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}
