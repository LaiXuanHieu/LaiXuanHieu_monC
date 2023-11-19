#include <iostream>
using namespace std;

const int numMonths = 12;

void inputRainfall(double rainfall[]) {
    for (int i = 0; i < numMonths; i++) {
        do {
            cout << "Nhập lượng mưa tháng " << i + 1 << " (in inches): ";
            cin >> rainfall[i];
        } while (rainfall[i] < 0);
    }
}

double calculateTotal(double rainfall[]) {
    double total = 0;
    for (int i = 0; i < numMonths; i++) {
        total += rainfall[i];
    }
    return total;
}

double calculateAverage(double total) {
    return total / numMonths;
}

void findHighestLowest(double rainfall[], int &highestMonth, int &lowestMonth) {
    highestMonth = 0;
    lowestMonth = 0;
    for (int i = 1; i < numMonths; i++) {
        if (rainfall[i] > rainfall[highestMonth]) {
            highestMonth = i;
        }
        if (rainfall[i] < rainfall[lowestMonth]) {
            lowestMonth = i;
        }
    }
}

int main() {
    double rainfall[numMonths];
    inputRainfall(rainfall);

    double total = calculateTotal(rainfall);
    double average = calculateAverage(total);

    int highestMonth, lowestMonth;
    findHighestLowest(rainfall, highestMonth, lowestMonth);

    cout << "\nTổng lượng mưa trong năm: " << total << " inches" << endl;
    cout << "Lượng mưa trung bình mỗi tháng: " << average << " inches" << endl;
    cout << "Tháng có lượng mưa cao nhất: Tháng " << highestMonth + 1 << " với " << rainfall[highestMonth] << " inches" << endl;
    cout << "Tháng có lượng mưa thấp nhất: Tháng " << lowestMonth + 1 << " với " << rainfall[lowestMonth] << " inches" << endl;

    return 0;
}