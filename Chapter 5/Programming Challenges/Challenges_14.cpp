#include <iostream>
#include <string>
using namespace std;

int main() {
    int so_sinh_vien;

    // Nhập số lượng sinh viên (với kiểm tra tính hợp lệ)
    do {
        cout << "Nhập số lượng sinh viên (1-25): ";
        cin >> so_sinh_vien;
    } while (so_sinh_vien < 1 || so_sinh_vien > 25);

    string ten_sinh_vien, sinh_vien_dau, sinh_vien_cuoi;

    // Yêu cầu và đọc tên của sinh viên đầu tiên
    cout << "Nhập tên của sinh viên đầu tiên: ";
    cin >> sinh_vien_dau;
    sinh_vien_cuoi = sinh_vien_dau;

    // Vòng lặp để đọc các tên sinh viên còn lại
    for (int i = 2; i <= so_sinh_vien; i++) {
        cout << "Nhập tên của sinh viên tiếp theo: ";
        cin >> ten_sinh_vien;

        // So sánh tên để tìm sinh viên đầu và cuối
        if (ten_sinh_vien < sinh_vien_dau) {
            sinh_vien_dau = ten_sinh_vien;
        } else if (ten_sinh_vien > sinh_vien_cuoi) {
            sinh_vien_cuoi = ten_sinh_vien;
        }
    }

    // Hiển thị kết quả
    cout << "Sinh viên đứng đầu hàng là: " << sinh_vien_dau << endl;
    cout << "Sinh viên đứng cuối hàng là: " << sinh_vien_cuoi << endl;

    return 0;
}