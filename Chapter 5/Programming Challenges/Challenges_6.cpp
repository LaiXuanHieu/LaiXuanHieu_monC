#include <iostream>
using namespace std;

float nhap_van_toc() {
    while (true) {
        float van_toc;
        cout << "Nhập tốc độ của phương tiện (mph): ";
        cin >> van_toc;
        if (van_toc >= 0) {
            return van_toc;
        } else {
            cout << "Vui lòng nhập tốc độ không âm." << endl;
        }
    }
}

int nhap_thoi_gian() {
    while (true) {
        int thoi_gian;
        cout << "Nhập số giờ đã di chuyển: ";
        cin >> thoi_gian;
        if (thoi_gian >= 1) {
            return thoi_gian;
        } else {
            cout << "Vui lòng nhập số giờ lớn hơn hoặc bằng 1." << endl;
        }
    }
}

float tinh_quang_duong(float van_toc, int thoi_gian) {
    return van_toc * thoi_gian;
}

void hien_thi_bang_quang_duong(float van_toc, int thoi_gian) {
    cout << "Giờ   Quãng Đường Đã Đi" << endl;
    cout << "------------------------" << endl;
    for (int gio = 1; gio <= thoi_gian; gio++) {
        float quang_duong = tinh_quang_duong(van_toc, gio);
        cout << gio << "\t\t" << quang_duong << endl;
    }
}

int main() {
    float van_toc = nhap_van_toc();
    int thoi_gian = nhap_thoi_gian();

    hien_thi_bang_quang_duong(van_toc, thoi_gian);

    return 0;
}