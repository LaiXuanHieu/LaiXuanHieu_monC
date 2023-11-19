#include <iostream>
using namespace std;

int main() {
    int so_tang;
    
    // Nhập số tầng (kiểm tra tính hợp lệ của đầu vào)
    do {
        cout << "Nhập số tầng của khách sạn (phải ít nhất là 1): ";
        cin >> so_tang;
    } while (so_tang < 1);

    int tong_so_phong = 0;
    int so_phong_da_thue = 0;

    // Lặp qua từng tầng
    for (int tang = 1; tang <= so_tang; tang++) {
        // Bỏ qua tầng thứ 13
        if (tang == 13) {
            continue;
        }

        int so_phong, so_phong_thue;

        // Nhập số phòng trên tầng (kiểm tra tính hợp lệ của đầu vào)
        do {
            cout << "Nhập số phòng ở tầng " << tang << ": ";
            cin >> so_phong;
        } while (so_phong < 10);

        // Nhập số phòng đã thuê (kiểm tra tính hợp lệ của đầu vào)
        do {
            cout << "Nhập số phòng đã thuê ở tầng " << tang << ": ";
            cin >> so_phong_thue;
        } while (so_phong_thue > so_phong || so_phong_thue < 0);

        tong_so_phong += so_phong;
        so_phong_da_thue += so_phong_thue;
    }

    // Tính toán số phòng trống
    int so_phong_trong = tong_so_phong - so_phong_da_thue;

    // Tính toán tỷ lệ lấp đầy
    double ty_le_lap_day = static_cast<double>(so_phong_da_thue) / tong_so_phong * 100;

    // Hiển thị kết quả
    cout << "\nTóm tắt khách sạn:\n";
    cout << "Tổng số phòng: " << tong_so_phong << endl;
    cout << "Số phòng đã thuê: " << so_phong_da_thue << endl;
    cout << "Số phòng trống: " << so_phong_trong << endl;
    cout << "Tỷ lệ lấp đầy: " << ty_le_lap_day << "%\n";

    return 0;
}