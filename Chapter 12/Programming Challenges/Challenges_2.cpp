#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string fileName;
    string line;
    const int linesPerPage = 24;

    // Nhập tên tệp từ người dùng
    cout << "Nhap ten tep: ";
    getline(cin, fileName);

    // Mở tệp để đọc
    ifstream file(fileName);

    // Kiểm tra xem tệp có tồn tại không
    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long kiem tra lai ten tep." << endl;
        return 1; // Kết thúc chương trình với mã lỗi
    }

    // Hiển thị nội dung của tệp với tạm dừng sau mỗi 24 dòng
    int lineCount = 0;
    while (getline(file, line)) {
        cout << line << endl;
        lineCount++;

        // Tạm dừng và đợi người dùng nhấn phím sau mỗi 24 dòng
        if (lineCount % linesPerPage == 0) {
            cout << "Nhan phim bat ky de hien thi them..." << endl;
            cin.get(); // Đợi người dùng nhấn phím
        }
    }

    // Đóng tệp
    file.close();

    return 0;
}
