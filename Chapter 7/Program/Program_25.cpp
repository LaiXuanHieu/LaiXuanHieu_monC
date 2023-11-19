#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Define and initialize a vector.
    vector<int> numbers { 10, 20, 30, 40, 50 };

    // Display the vector elements.
    for (const int& val : numbers) {
        cout << val << endl;
    }

    return 0;
}