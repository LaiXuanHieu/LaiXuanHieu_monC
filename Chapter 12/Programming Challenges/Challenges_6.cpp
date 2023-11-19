#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để tìm kiếm và hiển thị dòng chứa chuỗi trong tệp
int searchAndDisplayString(const string& fileName, const string& searchString) {
    ifstream file(fileName);

    if (!file.is_open()) {
        cout << "Khong the mo tep. Vui long kiem tra lai ten tep." << endl;
        return 0;
    }

    string line;
    int occurrences = 0;

    while (getline(file, line)) {
        // Tìm chuỗi trong dòng
        size_t found = line.find(searchString);
        
        // Nếu chuỗi được tìm thấy, hiển thị dòng và tăng số lần xuất hiện
        if (found != string::npos) {
            cout << line << endl;
            occurrences++;
        }
    }

    // Đóng tệp
    file.close();

    return occurrences;
}

int main() {
    // Nhập tên tệp và chuỗi cần tìm từ người dùng
    string fileName, searchString;
    cout << "Nhap ten tep: ";
    getline(cin, fileName);
    cout << "Nhap chuoi can tim kiem: ";
    getline(cin, searchString);

    // Gọi hàm để tìm kiếm và hiển thị dòng chứa chuỗi trong tệp
    int occurrences = searchAndDisplayString(fileName, searchString);

    // Báo cáo số lần xuất hiện của chuỗi
    cout << "Chuoi '" << searchString << "' xuat hien " << occurrences << " lan trong tep." << endl;

    return 0;
}
