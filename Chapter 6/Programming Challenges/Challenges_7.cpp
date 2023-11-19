// chương trình đổi nhiệt độ
#include <iostream>
#include <iomanip>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit)
{
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main()
{
    cout << "Fahrenheit   Celsius" << endl;
    cout << "-------------------" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++)
    {
        double celsiusTemp = celsius(fahrenheit);
        cout << setw(5) << fahrenheit << "°F     " << setw(5) << celsiusTemp << "°C" << endl;
    }

    return 0;
}
