#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

// Hàm để hiển thị 10 dòng cuối cùng của tệp
void displayFileTail(const string& fileName) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long kiem tra lai ten tep." << endl;
        return;
    }

    // Sử dụng vector để lưu giữ 10 dòng cuối cùng
    vector<string> tailLines;
    string line;

    while (getline(file, line)) {
        tailLines.push_back(line);
        if (tailLines.size() > 10) {
            tailLines.erase(tailLines.begin());
        }
    }

    // Hiển thị 10 dòng cuối cùng
    cout << "Duoi cua tep:" << endl;
    for (const string& tailLine : tailLines) {
        cout << tailLine << endl;
    }

    // Đóng tệp
    file.close();
}

int main() {
    // Nhập tên tệp từ người dùng
    string fileName;
    cout << "Nhap ten tep: ";
    getline(cin, fileName);

    // Gọi hàm để hiển thị đuôi của tệp
    displayFileTail(fileName);

    return 0;
}
