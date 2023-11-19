#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile;
    double num = 17.816392;
    dataFile.open("numfile.txt", ios::out);
    dataFile << fixed;
    dataFile << num << endl;
    dataFile << setprecision(4);
    dataFile << num << endl;
    dataFile << setprecision(3);
    dataFile << num << endl;
    dataFile << setprecision(2);
    dataFile << num << endl;
    dataFile << setprecision(1);
    dataFile << num << endl;
    cout << "Done.\n";
    dataFile.close();
    return 0;
}