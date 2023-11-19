#include <iostream>
#include <string>
using namespace std;

int main()
{
    string color1, color2;

    cout << "Enter the names of two primary colors (red, blue, or yellow):" << endl;
    cout << "Color 1: ";
    cin >> color1;
    cout << "Color 2: ";
    cin >> color2;

    // Check if the input colors are primary colors and find the resulting secondary color
    if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
    {
        cout << "Mixing red and blue results in purple." << endl;
    }
    else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
    {
        cout << "Mixing red and yellow results in orange." << endl;
    }
    else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue"))
    {
        cout << "Mixing blue and yellow results in green." << endl;
    }
    else
    {
        cout << "Error: Please enter valid primary colors (red, blue, or yellow)." << endl;
    }

    return 0;
}