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
        getline(nameFile, input);
        while (nameFile)
        {
            cout << input << endl;
            getline(nameFile, input);
        }
        nameFile.close();
    }
    else
    {
        cout << "ERROR: Cannot open file.\n";
    }
    return 0;
    
}