#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("LineUp.txt");

    if (!inputFile) {
        cout << "Lỗi mở file. Vui lòng đảm bảo 'LineUp.txt' tồn tại." << endl;
        return 1;
    }

    string tenHocSinh;
    int soLuongHocSinh = 0;

    while (getline(inputFile, tenHocSinh)) {
        soLuongHocSinh++;
        cout << "Học sinh " << soLuongHocSinh << ": " << tenHocSinh << endl;
    }

    if (soLuongHocSinh == 0) {
        cout << "Không tìm thấy tên học sinh trong tệp." << endl;
    } else {
        cout << "Tổng số học sinh: " << soLuongHocSinh << endl;
    }

    inputFile.close();

    return 0;
}