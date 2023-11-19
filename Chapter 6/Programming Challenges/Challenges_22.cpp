#include <iostream>
#include <cmath>

using namespace std;

// Ham kiem tra mot so co phai la so nguyen to hay khong
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
    for (int i = 3; i <= sqrt(number); i += 2)
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
    int num;
    cout << "Nhap mot so nguyen: ";
    cin >> num;

    if (isPrime(num))
    {
        cout << num << " la so nguyen to." << endl;
    }
    else
    {
        cout << num << " khong phai la so nguyen to." << endl;
    }

    return 0;
}
