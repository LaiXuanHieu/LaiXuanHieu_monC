#include <iostream>
#include <string>

using namespace std;

// Define the structure for corporate sales data
struct CorporateDivision {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function to calculate total and average sales for a division
void calculateSales(CorporateDivision& division) {
    division.totalAnnualSales =
        division.firstQuarterSales + division.secondQuarterSales + division.thirdQuarterSales + division.fourthQuarterSales;
    division.averageQuarterlySales = division.totalAnnualSales / 4.0;
}

// Function to input sales data for a division
void inputSalesData(CorporateDivision& division) {
    cout << "Enter sales data for " << division.divisionName << " division:\n";
    do {
        cout << "First Quarter Sales: $";
        cin >> division.firstQuarterSales;
    } while (division.firstQuarterSales < 0);

    do {
        cout << "Second Quarter Sales: $";
        cin >> division.secondQuarterSales;
    } while (division.secondQuarterSales < 0);

    do {
        cout << "Third Quarter Sales: $";
        cin >> division.thirdQuarterSales;
    } while (division.thirdQuarterSales < 0);

    do {
        cout << "Fourth Quarter Sales: $";
        cin >> division.fourthQuarterSales;
    } while (division.fourthQuarterSales < 0);

    calculateSales(division); // Calculate total and average sales
}

// Function to display sales data for a division
void displaySalesData(const CorporateDivision& division) {
    cout << "\nSales data for " << division.divisionName << " division:\n";
    cout << "First Quarter Sales: $" << division.firstQuarterSales << endl;
    cout << "Second Quarter Sales: $" << division.secondQuarterSales << endl;
    cout << "Third Quarter Sales: $" << division.thirdQuarterSales << endl;
    cout << "Fourth Quarter Sales: $" << division.fourthQuarterSales << endl;
    cout << "Total Annual Sales: $" << division.totalAnnualSales << endl;
    cout << "Average Quarterly Sales: $" << division.averageQuarterlySales << endl;
}

int main() {
    // Create variables for each corporate division
    CorporateDivision eastDivision = {"East"};
    CorporateDivision westDivision = {"West"};
    CorporateDivision northDivision = {"North"};
    CorporateDivision southDivision = {"South"};

    // Input sales data for each division
    inputSalesData(eastDivision);
    inputSalesData(westDivision);
    inputSalesData(northDivision);
    inputSalesData(southDivision);

    // Display sales data for each division
    displaySalesData(eastDivision);
    displaySalesData(westDivision);
    displaySalesData(northDivision);
    displaySalesData(southDivision);

    return 0;
}
