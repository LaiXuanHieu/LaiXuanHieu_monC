#include <iostream>
using namespace std;

int main() {
    int ma_nhan_vien;
    double luong_gross, thue_nha_nuoc, thue_federal, khau_tru_FICA;
    double tong_luong_gross = 0, tong_thue_nha_nuoc = 0, tong_thue_federal = 0, tong_khau_tru_FICA = 0, tong_luong_net = 0;

    while (true) {
        cout << "Nhập mã số nhân viên (0 để kết thúc): ";
        cin >> ma_nhan_vien;

        if (ma_nhan_vien == 0) {
            break;
        }

        cout << "Nhập lương gross: ";
        cin >> luong_gross;
        cout << "Nhập thuế nhà nước: ";
        cin >> thue_nha_nuoc;
        cout << "Nhập thuế federal: ";
        cin >> thue_federal;
        cout << "Nhập khấu trừ FICA: ";
        cin >> khau_tru_FICA;

        // Kiểm tra đầu vào
        if (luong_gross < 0 || thue_nha_nuoc < 0 || thue_federal < 0 || khau_tru_FICA < 0) {
            cout << "Lỗi: Không chấp nhận số âm. Vui lòng nhập lại thông tin." << endl;
            continue;
        }

        if (thue_nha_nuoc + thue_federal + khau_tru_FICA > luong_gross) {
            cout << "Lỗi: Các khoản khấu trừ không thể lớn hơn lương gross. Vui lòng nhập lại thông tin." << endl;
            continue;
        }

        tong_luong_gross += luong_gross;
        tong_thue_nha_nuoc += thue_nha_nuoc;
        tong_thue_federal += thue_federal;
        tong_khau_tru_FICA += khau_tru_FICA;
        double luong_net = luong_gross - (thue_nha_nuoc + thue_federal + khau_tru_FICA);
        tong_luong_net += luong_net;
    }

    // Hiển thị tổng kết
    cout << "\nBáo Cáo Lương Hàng Tuần\n";
    cout << "Tổng Lương Gross: $" << tong_luong_gross << endl;
    cout << "Tổng Thuế Nhà Nước: $" << tong_thue_nha_nuoc << endl;
    cout << "Tổng Thuế Federal: $" << tong_thue_federal << endl;
    cout << "Tổng Khấu Trừ FICA: $" << tong_khau_tru_FICA << endl;
    cout << "Tổng Lương Net: $" << tong_luong_net << endl;

    return 0;
}