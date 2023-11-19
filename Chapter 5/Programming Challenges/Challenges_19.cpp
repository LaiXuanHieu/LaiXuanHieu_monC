#include <iostream>
using namespace std;

int main() {
    double ngan_sach;
    double tong_chi_tieu = 0;
    int so_chi_tieu;

    cout << "Nhập số tiền bạn đã dự định chi tiêu trong tháng: $";
    cin >> ngan_sach;

    cout << "Bạn có bao nhiêu khoản chi tiêu? ";
    cin >> so_chi_tieu;

    for (int i = 1; i <= so_chi_tieu; i++) {
        double chi_tieu;
        cout << "Nhập khoản chi tiêu " << i << ": $";
        cin >> chi_tieu;
        tong_chi_tieu += chi_tieu;
    }

    double chenh_lech = tong_chi_tieu - ngan_sach;

    if (chenh_lech >= 0) {
        cout << "Bạn vượt quá ngân sách $" << chenh_lech << endl;
    } else {
        cout << "Bạn tiêu ít hơn ngân sách $" << -chenh_lech << endl;
    }

    return 0;
}