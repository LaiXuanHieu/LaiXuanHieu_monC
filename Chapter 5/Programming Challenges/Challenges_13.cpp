#include <iostream>
using namespace std;

int main() {
    int so_nguyen, nho_nhat, lon_nhat;

    // Yêu cầu người dùng nhập số nguyên đầu tiên
    cout << "Nhập một số nguyên (-99 để kết thúc): ";
    cin >> so_nguyen;

    // Khởi tạo số nhỏ nhất và lớn nhất với số đầu tiên
    nho_nhat = lon_nhat = so_nguyen;

    while (so_nguyen != -99) {
        // Kiểm tra nếu số nhập vào nhỏ hơn số nhỏ nhất hiện tại
        if (so_nguyen < nho_nhat) {
            nho_nhat = so_nguyen;
        }

        // Kiểm tra nếu số nhập vào lớn hơn số lớn nhất hiện tại
        if (so_nguyen > lon_nhat) {
            lon_nhat = so_nguyen;
        }

        // Yêu cầu người dùng nhập số tiếp theo
        cout << "Nhập một số nguyên (-99 để kết thúc): ";
        cin >> so_nguyen;
    }

    // Hiển thị kết quả
    cout << "Số nhỏ nhất là: " << nho_nhat << endl;
    cout << "Số lớn nhất là: " << lon_nhat << endl;

    return 0;
}