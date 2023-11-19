#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream dataFile;

    cout << "Opening file...\n";

    dataFile.open("demofile.txt", ios::out);
    cout << "Now writing data to the file.\n";
    dataFile << "Jones\n"; 
    dataFile << "Smith\n"; 
    cout << "Now closing the file.\n";
    dataFile.close(); 

    cout << "Opening the file again...\n";

    dataFile.open("demofile.txt", ios::out | ios::app);
    cout << "Writing more data to the file.\n";
    dataFile << "Willis\n";
    dataFile << "Davis\n";
    cout << "Now closing the file.\n";
    dataFile.close();
    cout << "Done.\n";
    return 0;
}
