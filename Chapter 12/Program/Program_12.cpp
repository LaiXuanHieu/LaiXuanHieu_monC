#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string fileName;
    char ch;
    ifstream inFile; 
    ofstream outFile("out.txt");
    cout << "Enter a file name: ";
    cin >> fileName; 
    inFile.open(fileName);
    if (inFile)
    {
        inFile.get(ch); 
        while (inFile) 
        {
            outFile.put(toupper(ch));
            inFile.get(ch); 
        }
        inFile.close(); 
        outFile.close();
        cout << "File conversion done.\n";
    
    }
    else 
        cout << "Cannot open " << fileName << endl; 
    return 0;
}