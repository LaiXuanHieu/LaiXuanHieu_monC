#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int SIZE = 4;
    char data[SIZE] = {'A','B','C','D'};
    fstream file;
    file.open("test.dat", ios::out | ios::binary);
    cout << "Writing the characters to the file.\n";
    file.write(data, sizeof(data));
    file.close();
    file.open("test.dat", ios::in | ios::binary);
    cout << "Now reading the data back into memory.\n";
    file.read(data, sizeof(data));
    for (int count = 0; count < SIZE; count++)
        cout << data[count] << " ";
    cout << endl;
    file.close();
    return 0;
}