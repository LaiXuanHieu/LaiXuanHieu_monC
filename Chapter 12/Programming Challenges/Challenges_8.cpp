#include <iostream>
#include <fstream>

using namespace std;

// Hàm ghi mảng vào tệp
void arrayToFile(const char* fileName, int* arr, int size) {
    ofstream file(fileName, ios::binary);

    if (!file.is_open()) {
        cout << "Khong the mo tep " << fileName << " de ghi." << endl;
        return;
    }

    // Ghi mảng vào tệp
    file.write(reinterpret_cast<char*>(arr), size * sizeof(int));

    // Đóng tệp
    file.close();
}

// Hàm đọc từ tệp vào mảng
void fileToArray(const char* fileName, int* arr, int size) {
    ifstream file(fileName, ios::binary);

    if (!file.is_open()) {
        cout << "Khong the mo tep " << fileName << " de doc." << endl;
        return;
    }

    // Đọc từ tệp vào mảng
    file.read(reinterpret_cast<char*>(arr), size * sizeof(int));

    // Đóng tệp
    file.close();
}

int main() {
    const char* fileName = "data.bin";
    const int size = 5;

    // Mảng để ghi vào và đọc từ tệp
    int dataToWrite[size] = {1, 2, 3, 4, 5};
    int dataRead[size];

    // Ghi mảng vào tệp
    arrayToFile(fileName, dataToWrite, size);

    // Đọc từ tệp vào mảng
    fileToArray(fileName, dataRead, size);

    // Hiển thị nội dung của mảng
    cout << "Mang sau khi doc tu tep:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << dataRead[i] << " ";
    }
    cout << endl;

    return 0;
}
