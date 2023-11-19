#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream dataFile;
    cout << "Opening file...\n";
    dataFile.open("demofile.txt", ios::out);
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n";
    dataFile << "Smith\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    dataFile.close();
    return 0;
}