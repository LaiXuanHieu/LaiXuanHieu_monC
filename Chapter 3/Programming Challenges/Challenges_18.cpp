#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double soTienGoc, laiSuat, soLanLaiSuat;
    double soTienTrongTaiKhoan;

    // Nhập số tiền gốc, lãi suất hàng năm và số lần lãi suất được tính
    cout << "Nhap so tien goc (USD): ";
    cin >> soTienGoc;
    cout << "Nhap lai suat hang nam (duoi dang phan tram): ";
    cin >> laiSuat;
    cout << "Nhap so lan lai suat duoc tinh trong 1 nam: ";
    cin >> soLanLaiSuat;

    // Chuyen lai suat hang nam tu dang phan tram sang dang thap phan
    laiSuat /= 100.0;

    // Tinh so tien trong tai khoan tiet kiem sau mot nam
    soTienTrongTaiKhoan = soTienGoc * pow(1 + (laiSuat / soLanLaiSuat), soLanLaiSuat);

    // Tinh so tien lai
    double lai = soTienTrongTaiKhoan - soTienGoc;

    // Hien thi bao cao
    cout << fixed << setprecision(2);
    cout << "Lai suat hang nam: " << laiSuat * 100 << "%" << endl;
    cout << "So lan lai suat duoc tinh: " << soLanLaiSuat << endl;
    cout << "So tien goc: $" << soTienGoc << endl;
    cout << "Lai: $" << lai << endl;
    cout << "So tien trong tai khoan tiet kiem sau mot nam: $" << soTienTrongTaiKhoan << endl;

    return 0;
}