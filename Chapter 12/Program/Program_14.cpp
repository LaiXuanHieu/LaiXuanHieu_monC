#include <iostream>
#include <fstream>
using namespace std;

int main(){
    const int SIZE = 10;
    fstream file;
    int numbers[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    file.open("numbers.dat", ios::out | ios::binary);
    cout << "Writing the data to the file.\n";
    file.write(reinterpret_cast<char *>(numbers), sizeof(numbers));
    file.close();
    file.open("numbers.dat", ios::in | ios::binary);
    cout << "Now reading the data back into memory.\n";
    file.read(reinterpret_cast<char *>(numbers), sizeof(numbers)); 
    for (int count = 0; count < SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;
    file.close();
    return 0;

}