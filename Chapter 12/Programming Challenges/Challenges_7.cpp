#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để chuyển đổi chữ cái thành chữ thường (ngoại trừ chữ cái đầu tiên của mỗi câu)
string convertToLowercaseExceptFirst(const string& input) {
    string result = input;

    // Chuyển đổi chữ cái thành chữ thường
    for (size_t i = 0; i < result.length(); ++i) {
        if (i == 0 || (i > 0 && result[i - 1] == '.')) {
            result[i] = toupper(result[i]); // Chữ cái đầu tiên hoặc chữ cái sau dấu chấm
        } else {
            result[i] = tolower(result[i]);
        }
    }

    return result;
}

int main() {
    // Nhập tên tệp đầu vào và tên tệp đầu ra từ người dùng
    string inputFileName, outputFileName;
    cout << "Nhap ten tep dau vao: ";
    getline(cin, inputFileName);
    cout << "Nhap ten tep dau ra: ";
    getline(cin, outputFileName);

    // Mở tệp đầu vào để đọc
    ifstream inputFile(inputFileName);

    if (!inputFile.is_open()) {
        cout << "Khong the mo tep dau vao. Vui long kiem tra lai ten tep." << endl;
        return 1;
    }

    // Mở tệp đầu ra để ghi
    ofstream outputFile(outputFileName);

    if (!outputFile.is_open()) {
        cout << "Khong the mo tep dau ra. Vui long kiem tra lai ten tep." << endl;
        inputFile.close();
        return 1;
    }

    // Đọc nội dung của tệp đầu vào, chuyển đổi và ghi vào tệp đầu ra
    string line;
    while (getline(inputFile, line)) {
        string convertedLine = convertToLowercaseExceptFirst(line);
        outputFile << convertedLine << endl;
    }

    // Đóng tệp
    inputFile.close();
    outputFile.close();

    cout << "Da chuyen doi va luu vao " << outputFileName << endl;

    return 0;
}

