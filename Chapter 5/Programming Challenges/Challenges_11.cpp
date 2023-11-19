#include <iostream>
using namespace std;

int main() {
    int so_ca_the_ban_dau;
    double tang_truong_trung_binh_moi_ngay;
    int so_ngay;

    // Nhập số cá thể ban đầu (kiểm tra tính hợp lệ của đầu vào)
    do {
        cout << "Nhập số cá thể ban đầu (phải ít nhất là 2): ";
        cin >> so_ca_the_ban_dau;
    } while (so_ca_the_ban_dau < 2);

    // Nhập tỷ lệ tăng trưởng hàng ngày (kiểm tra tính hợp lệ của đầu vào)
    do {
        cout << "Nhập tỷ lệ tăng trưởng trung bình hàng ngày (dưới dạng phần trăm): ";
        cin >> tang_truong_trung_binh_moi_ngay;
    } while (tang_truong_trung_binh_moi_ngay < 0);

    // Nhập số ngày cần dự đoán (kiểm tra tính hợp lệ của đầu vào)
    do {
        cout << "Nhập số ngày cần dự đoán (phải ít nhất là 1): ";
        cin >> so_ngay;
    } while (so_ngay < 1);

    // Hiển thị tiêu đề
    cout << "\nNgày\tQuần thể\n";

    // Tính toán và hiển thị quần thể cho mỗi ngày
    double quan_the = so_ca_the_ban_dau;
    for (int ngay = 1; ngay <= so_ngay; ngay++) {
        cout << ngay << "\t" << quan_the << endl;
        quan_the += (quan_the * (tang_truong_trung_binh_moi_ngay / 100));
    }

    return 0;
}