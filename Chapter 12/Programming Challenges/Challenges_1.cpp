#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    string fileName;
    string line;
    int lineCount = 0;
    // Nhập tên tệp từ người dùng
    cout << "Nhap ten tep: ";
    getline(cin, fileName);
    // Mở tệp để đọc
    ifstream file(fileName);
    // Kiểm tra xem tệp có tồn tại không
    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long lai ten tep." << endl;
        return 1;
    }
    while (getline(file, line) && lineCount < 10) {
        cout << line << endl;
        lineCount++;
    }
    // Đóng tệp
    file.close();
    // Thông báo nếu toàn bộ tệp đã được hiển thị
    if (lineCount < 10) {
        cout << "Toan bo tap tin da duoc hien thi. "<< endl;
    }
    return 0;
}