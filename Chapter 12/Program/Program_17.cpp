#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char ch;
    fstream file("letters.txt", ios::in);
    file.seekg(5L, ios::beg); 
    file.get(ch);
    cout << "Byte 5 from beginning: " << ch << endl;
    file.seekg(-10L, ios::end);
    file.get(ch); 
    cout << "10th byte from end: " << ch << endl;
    file.seekg(3L, ios::cur);
    file.get(ch);
    cout << "Byte 3 from current: " << ch << endl;
    file.close();
    return 0; 
}