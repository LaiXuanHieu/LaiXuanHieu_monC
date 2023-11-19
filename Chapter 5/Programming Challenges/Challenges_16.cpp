#include <iostream>
using namespace std;

int main() {
    double lai_suat_hang_nam, so_du_dau_ky, so_du, tong_gui_them = 0, tong_rut_tien = 0, tong_lai = 0;
    int so_thang_da_qua;

    // Nhập thông tin từ người dùng
    cout << "Nhập lãi suất hàng năm (dưới dạng phần trăm): ";
    cin >> lai_suat_hang_nam;
    cout << "Nhập số dư ban đầu: ";
    cin >> so_du_dau_ky;
    cout << "Nhập số tháng đã qua: ";
    cin >> so_thang_da_qua;

    so_du = so_du_dau_ky;

    for (int i = 1; i <= so_thang_da_qua; i++) {
        double lai_suat_thang = lai_suat_hang_nam / 12;

        double gui_them, rut_tien;

        cout << "Nhập số tiền gửi thêm trong tháng " << i << ": ";
        cin >> gui_them;

        if (gui_them < 0) {
            cout << "Nhập không hợp lệ. Vui lòng nhập số tiền dương." << endl;
            i--;
            continue;
        }

        cout << "Nhập số tiền rút trong tháng " << i << ": ";
        cin >> rut_tien;

        if (rut_tien < 0) {
            cout << "Nhập không hợp lệ. Vui lòng nhập số tiền dương." << endl;
            i--;
            continue;
        }

        so_du += gui_them;
        so_du -= rut_tien;
        tong_gui_them += gui_them;
        tong_rut_tien += rut_tien;

        if (so_du < 0) {
            cout << "Tài khoản đã đóng do số dư âm." << endl;
            break;
        }

        double lai_earned = so_du * lai_suat_thang / 100;
        tong_lai += lai_earned;
        so_du += lai_earned;
    }

    cout << "Số dư cuối kỳ: $" << so_du << endl;
    cout << "Tổng số tiền gửi thêm: $" << tong_gui_them << endl;
    cout << "Tổng số tiền rút: $" << tong_rut_tien << endl;
    cout << "Tổng lãi thu được: $" << tong_lai << endl;

    return 0;
}