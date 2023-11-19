// chương trình tính toán nhập vào đáp án và nó sẻ hiện ra đáp an đúng
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0)); // Seed the random number generator with the current time

    int num1 = rand() % 999; // Generate a random number between 0 and 999
    int num2 = rand() % 999; // Generate another random number

    cout << "Math Tutor - Addition" << endl;
    cout << "Try to solve the following problem:" << endl;
    cout << num1 << " + " << num2 << " = ?" << endl;
    cout << "Press Enter when you're ready to see the answer...";

    cin.get(); // Wait for the user to press Enter

    int sum = num1 + num2;

    cout << "The correct answer is: " << sum << endl;

    return 0;
}