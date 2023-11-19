#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool openFileIn(fstream &, string);
void showContents(fstream &);

int main()
{
    fstream dataFile;
    if (openFileIn(dataFile, "demofile.txt"))
    {
        cout << "File opened successfully.\n";
        cout << "Now reading data from the file.\n\n";
        showContents(dataFile);
        dataFile.close();
        cout << "\nDone.\n";
    }
    else
        cout << "File open error!" << endl;

    return 0;
}

void showContents(fstream &file)
{
    string line;
    while (getline(file, line)) // Sử dụng getline để đọc từng dòng
    {
        cout << line << endl;
    }
}

bool openFileIn(fstream &file, string filename)
{
    file.open(filename, ios::in);
    if (file.fail())
    {
        return false;
    }
    return true;
}
