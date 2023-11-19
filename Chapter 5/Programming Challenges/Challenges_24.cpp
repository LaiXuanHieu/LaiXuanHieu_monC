#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    inputFile.open("Random.txt");

    if (!inputFile) {
        cout << "Lỗi mở file. Vui lòng đảm bảo 'Random.txt' tồn tại." << endl;
        return 1;
    }

    int so;
    int tongSoLuong = 0;
    int tong = 0;

    while (inputFile >> so) {
        tongSoLuong++;
        tong += so;
    }

    inputFile.close();

    if (tongSoLuong == 0) {
        cout << "Không tìm thấy số nào trong tệp." << endl;
        return 1;
    }

    double trungBinh = static_cast<double>(tong) / tongSoLuong;

    cout << "Số lượng số trong tệp: " << tongSoLuong << endl;
    cout << "Tổng của tất cả các số trong tệp: " << tong << endl;
    cout << "Trung bình của tất cả các số trong tệp: " << trungBinh << endl;

    return 0;
}