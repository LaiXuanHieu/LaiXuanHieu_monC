#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string input;
    fstream nameFile;
    nameFile.open("murphy.txt", ios::in);
    if (nameFile)
    {
        while (nameFile >> input)
        {
            cout << input << endl;
        }
        nameFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }
}