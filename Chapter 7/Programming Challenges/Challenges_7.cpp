#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream inputFile(filename);

    if (!inputFile.is_open()) {
        cout << "Error opening file. Please check the filename and try again." << endl;
        return 1;
    }

    int num;
    int lowest = INT_MAX;
    int highest = INT_MIN;
    int total = 0;
    int count = 0;

    while (inputFile >> num) {
        total += num;
        count++;
        if (num < lowest) {
            lowest = num;
        }
        if (num > highest) {
            highest = num;
        }
    }

    if (count > 0) {
        double average = static_cast<double>(total) / count;

        cout << "Lowest number: " << lowest << endl;
        cout << "Highest number: " << highest << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl;
    } else {
        cout << "No numbers found in the file." << endl;
    }

    inputFile.close();

    return 0;
}