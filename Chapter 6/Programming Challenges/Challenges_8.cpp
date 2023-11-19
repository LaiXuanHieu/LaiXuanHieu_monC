#include <iostream>
#include <cstdlib> // Thu vien su dung ham rand
#include <ctime>   // Thu vien su dung ham time
using namespace std;

// Ham de tung dong xu
void coinToss(int numTosses)
{
    int heads = 0, tails = 0;

    for (int i = 0; i < numTosses; i++)
    {
        int result = rand() % 2 + 1; // Sinh so ngau nhien 1 hoac 2
        if (result == 1)
        {
            cout << "Heads" << endl;
            heads++;
        }
        else
        {
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "Heads: " << heads << endl;
    cout << "Tails: " << tails << endl;
}

int main()
{
    srand(time(0)); // Khoi tao bo sinh so ngau nhien

    int numTosses;
    cout << "Nhap so lan tung dong xu: ";
    cin >> numTosses;

    coinToss(numTosses);

    return 0;
}
