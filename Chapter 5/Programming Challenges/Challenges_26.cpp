#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outputFile;
    outputFile.open("BaoCaoTietKiem.txt");

    if (!outputFile) {
        cout << "Lỗi mở file để ghi." << endl;
        return 1;
    }

    double soDuDauKy, laiSuatHangNam;
    int soThang;

    cout << "Nhập số dư đầu kỳ: $";
    cin >> soDuDauKy;

    cout << "Nhập lãi suất hàng năm (dưới dạng thập phân): ";
    cin >> laiSuatHangNam;

    cout << "Nhập số tháng: ";
    cin >> soThang;

    for (int i = 1; i <= soThang; i++) {
        double laiHangThang = soDuDauKy * (laiSuatHangNam / 12);
        soDuDauKy += laiHangThang;
        outputFile << "Tháng " << i << ": $" << soDuDauKy << endl;
    }

    outputFile.close();

    cout << "Báo cáo đã được ghi vào 'BaoCaoTietKiem.txt'." << endl;

    return 0;
}