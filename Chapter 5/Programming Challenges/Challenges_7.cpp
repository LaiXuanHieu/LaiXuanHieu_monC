#include <iostream>
#include <iomanip>
using namespace std;

double tinh_so_tien(int so_ngay) {
    double tong_tien = 0;
    cout << "Ngày\tLương (đô la)" << endl;
    cout << "------------------------" << endl;
    for (int ngay = 1; ngay <= so_ngay; ngay++) {
        double luong = 0.01 * pow(2, ngay - 1);  // Lương tăng gấp đôi mỗi ngày
        tong_tien += luong;
        cout << ngay << "\t$" << fixed << setprecision(2) << luong << endl;
    }
    return tong_tien;
}

int main() {
    int so_ngay;
    while (true) {
        cout << "Nhập số ngày làm việc: ";
        cin >> so_ngay;
        if (so_ngay >= 1) {
            break;
        } else {
            cout << "Vui lòng nhập số ngày lớn hơn hoặc bằng 1." << endl;
        }
    }

    double tong_tien = tinh_so_tien(so_ngay);
    cout << "\nTổng tiền kiếm được trong " << so_ngay << " ngày: $" << fixed << setprecision(2) << tong_tien << endl;

    return 0;
}