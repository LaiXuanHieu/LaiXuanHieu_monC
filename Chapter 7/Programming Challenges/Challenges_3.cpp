#include <iostream>
#include <string>
using namespace std;

const int NUM_SALSAS = 5;

void getSalesData(string salsaNames[], int jarsSold[]) {
    for (int i = 0; i < NUM_SALSAS; i++) {
        do {
            cout << "Enter the number of jars sold for " << salsaNames[i] << " salsa: ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0) {
                cout << "Please enter a non-negative value." << endl;
            }
        } while (jarsSold[i] < 0);
    }
}

void generateReport(string salsaNames[], int jarsSold[]) {
    int totalSales = 0;
    int highestSellingIndex = 0;
    int lowestSellingIndex = 0;

    for (int i = 0; i < NUM_SALSAS; i++) {
        totalSales += jarsSold[i];
        if (jarsSold[i] > jarsSold[highestSellingIndex]) {
            highestSellingIndex = i;
        }
        if (jarsSold[i] < jarsSold[lowestSellingIndex]) {
            lowestSellingIndex = i;
        }
    }

    cout << "\nSales Report:" << endl;
    for (int i = 0; i < NUM_SALSAS; i++) {
        cout << salsaNames[i] << " salsa: " << jarsSold[i] << " jars sold" << endl;
    }
    cout << "Total Sales: " << totalSales << " jars" << endl;
    cout << "Highest Selling Salsa: " << salsaNames[highestSellingIndex] << " salsa" << endl;
    cout << "Lowest Selling Salsa: " << salsaNames[lowestSellingIndex] << " salsa" << endl;
}

int main() {
    string salsaNames[NUM_SALSAS] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_SALSAS];

    getSalesData(salsaNames, jarsSold);
    generateReport(salsaNames, jarsSold);

    return 0;
}