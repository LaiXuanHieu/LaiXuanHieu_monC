#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10; // Array size
    int numbers[ARRAY_SIZE]; // Array with 10 elements

    ifstream inputFile; // Input file stream object
    inputFile.open("TenNumbers.txt");

    if (!inputFile.is_open()) {
        cout << "Error opening the file." << endl;
        return 1; // Exit with an error code
    }

    // Read the numbers from the file into the array.
    int count = 0; // Loop counter variable
    while (count < ARRAY_SIZE && inputFile >> numbers[count]) {
        count++;
    }

    // Close the file.
    inputFile.close();

    // Display the numbers read:
    cout << "The numbers are: ";
    for (int i = 0; i < count; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}