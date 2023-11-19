#include <iostream>
using namespace std;

int main() {
    int so_nam;

    // Nhập số năm (kiểm tra tính hợp lệ của đầu vào)
    do {
        cout << "Nhập số năm: ";
        cin >> so_nam;
    } while (so_nam < 1);

    double tong_luong_mua = 0.0;
    int tong_thang = so_nam * 12;

    // Vòng lặp ngoài cho mỗi năm
    for (int nam = 1; nam <= so_nam; nam++) {
        // Vòng lặp trong cho mỗi tháng
        for (int thang = 1; thang <= 12; thang++) {
            double luong_mua_thang;

            // Nhập lượng mưa tháng (kiểm tra tính hợp lệ của đầu vào)
            do {
                cout << "Nhập lượng mưa (inches) cho Tháng " << thang << " năm " << nam << ": ";
                cin >> luong_mua_thang;
            } while (luong_mua_thang < 0);

            tong_luong_mua += luong_mua_thang;
        }
    }

    // Tính lượng mưa trung bình
    double luong_mua_trung_binh = tong_luong_mua / tong_thang;

    // Hiển thị kết quả
    cout << "\nTổng số tháng: " << tong_thang << endl;
    cout << "Tổng lượng mưa (inches): " << tong_luong_mua << " inches" << endl;
    cout << "Lượng mưa trung bình mỗi tháng: " << luong_mua_trung_binh << " inches" << endl;

    return 0;
}