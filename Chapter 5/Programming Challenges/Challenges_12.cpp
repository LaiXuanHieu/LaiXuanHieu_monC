#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Độ Celsius  Độ Fahrenheit\n";
    cout << "------------------------\n";

    for (int doC = 0; doC <= 20; doC++) {
        double doF = static_cast<double>(doC) * 9/5 + 32;
        cout << setw(10) << doC << setw(16) << doF << endl;
    }

    return 0;
}