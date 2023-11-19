#include <iostream>
using namespace std;

int main() {
    // Kích thước của các kiểu dữ liệu
    int sizeOfChar = sizeof(char);
    int sizeOfInt = sizeof(int);
    int sizeOfFloat = sizeof(float);
    int sizeOfDouble = sizeof(double);

    // Hiển thị kích thước trên màn hình
    cout << "Kich thuoc cua char: " << sizeOfChar << " byte." << endl;
    cout << "Kich thuoc cua int: " << sizeOfInt << " byte." << endl;
    cout << "Kich thuoc cua float: " << sizeOfFloat << " byte." << endl;
    cout << "Kich thuoc cua double: " << sizeOfDouble << " byte." << endl;

    return 0;
}