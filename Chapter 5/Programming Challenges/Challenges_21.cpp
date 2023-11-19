#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // Khởi tạo seed cho bộ sinh số ngẫu nhiên
    int soNgauNhien = rand() % 100 + 1; // Sinh số ngẫu nhiên từ 1 đến 100
    int doanCuaNguoiDung;
    bool doanDung = false;
    int soLanDoan = 0;

    cout << "Chào mừng bạn đến với trò chơi đoán số ngẫu nhiên!" << endl;

    while (!doanDung) {
        cout << "Hãy nhập dự đoán của bạn (từ 1 đến 100): ";
        cin >> doanCuaNguoiDung;
        soLanDoan++;

        if (doanCuaNguoiDung < 1 || doanCuaNguoiDung > 100) {
            cout << "Đầu vào không hợp lệ. Vui lòng nhập số từ 1 đến 100." << endl;
            continue;
        }

        if (doanCuaNguoiDung > soNgauNhien) {
            cout << "Quá cao, hãy thử lại." << endl;
        } else if (doanCuaNguoiDung < soNgauNhien) {
            cout << "Quá thấp, hãy thử lại." << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số." << endl;
            cout << "Số lần đoán: " << soLanDoan << endl;
            doanDung = true;
        }
    }

    return 0;
}