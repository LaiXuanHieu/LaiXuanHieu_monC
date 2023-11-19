#include <iostream>
#include <fstream>

using namespace std;

// Function to check if a number is prime
bool isPrime(int number)
{
    if (number <= 1)
    {
        return false; // 0 and 1 are not prime
    }
    if (number <= 3)
    {
        return true; // 2 and 3 are prime
    }
    if (number % 2 == 0)
    {
        return false; // Even numbers greater than 2 are not prime
    }
    for (int i = 3; i * i <= number; i += 2)
    {
        if (number % i == 0)
        {
            return false; // The number is divisible by a number other than 1 and itself
        }
    }
    return true; // If none of the conditions above are met, the number is prime
}

int main()
{
    ofstream primeFile("prime_numbers.txt"); // Create or open the file for writing

    if (!primeFile)
    {
        cerr << "Unable to open the file." << endl;
        return 1;
    }

    primeFile << "Danh sách các số nguyên tố từ 1 đến 100:\n";

    for (int i = 1; i <= 100; i++)
    {
        if (isPrime(i))
        {
            primeFile << i << "\n"; // Write prime numbers to the file
        }
    }

    primeFile.close(); // Close the file

    cout << "Danh sách các số nguyên tố đã được lưu trong tệp 'prime_numbers.txt'." << endl;

    return 0;
}
