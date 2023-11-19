#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // Dùng để sử dụng hàm system("pause")

using namespace std;

// Hàm để hiển thị nội dung của tệp với số dòng và tạm dừng sau mỗi 24 dòng
void displayFileWithLineNumbers(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long kiem tra lai ten tep." << endl;
        return;
    }

    int lineCount = 1;
    const int linesPerPage = 24;
    string line;

    while (getline(file, line)) {
        cout << lineCount << ":" << line << endl;
        lineCount++;

        // Tạm dừng và đợi người dùng nhấn phím sau mỗi 24 dòng
        if (lineCount % linesPerPage == 0) {
            cout << "Nhan phim bat ky de hien thi them..." << endl;
            system("pause"); // Sử dụng system("pause") để tạm dừng và đợi người dùng nhấn phím
        }
    }

    // Đóng tệp
    file.close();
}

int main() {
    // Nhập tên tệp từ người dùng
    string fileName;
    cout << "Nhap ten tep: ";
    getline(cin, fileName);

    // Gọi hàm để hiển thị nội dung của tệp với số dòng và tạm dừng sau mỗi 24 dòng
    displayFileWithLineNumbers(fileName);

    return 0;
}
