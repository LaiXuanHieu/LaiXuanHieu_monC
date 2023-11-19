#include <iostream>
#include <iomanip>
#include <algorithm> // For sorting
using namespace std;

const int SIZE = 4; // Array size

// Function prototypes
void getTestScores(double[], int);
double getAverageWithoutLowest(const double[], int);

int main()
{
    double testScores[SIZE]; // Array of test scores

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    // Calculate the average without the lowest test score.
    double average = getAverageWithoutLowest(testScores, SIZE);

    // Display the average.
    cout << "The average with the lowest score dropped is " << average << ".\n";

    return 0;
}

// The getTestScores function accepts an array and its size as arguments.
// It prompts the user to enter test scores, which are stored in the array.
void getTestScores(double scores[], int size)
{
    // Get each test score.
    for (int index = 0; index < size; index++)
    {
        cout << "Enter test score number " << (index + 1) << ": ";
        cin >> scores[index];
    }
}

// The getAverageWithoutLowest function accepts a double array and its size as arguments.
// It calculates the average of the array elements after removing the lowest value.
double getAverageWithoutLowest(const double numbers[], int size)
{
    // Make a copy of the array and sort it.
    double sortedScores[SIZE];
    for (int i = 0; i < SIZE; i++) {
        sortedScores[i] = numbers[i];
    }
    sort(sortedScores, sortedScores + SIZE);

    // Calculate the sum of all but the lowest score.
    double total = 0;
    for (int i = 1; i < SIZE; i++) {
        total += sortedScores[i];
    }

    // Calculate and return the average.
    return total / (SIZE - 1);
}