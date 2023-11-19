#include <iostream>
#include <fstream>
using namespace std;

const int THANG = 3;
const int NGAY_TRONG_THANG = 30;

int main() {
    char duLieuThoiTiet[THANG][NGAY_TRONG_THANG];
    int soNgayMua[THANG] = {0};
    int soNgayMuaNhe[THANG] = {0};
    int soNgayNang[THANG] = {0};

    // Đọc dữ liệu thời tiết từ tập tin
    ifstream inputFile("du_lieu_thoi_tiet.txt");
    if (!inputFile) {
        cout << "Lỗi mở tệp.";
        return 1;
    }

    // Đổ dữ liệu thời tiết vào mảng
    for (int thang = 0; thang < THANG; ++thang) {
        for (int ngay = 0; ngay < NGAY_TRONG_THANG; ++ngay) {
            inputFile >> duLieuThoiTiet[thang][ngay];
        }
    }
    inputFile.close();

    // Xử lý dữ liệu thời tiết
    for (int thang = 0; thang < THANG; ++thang) {
        for (int ngay = 0; ngay < NGAY_TRONG_THANG; ++ngay) {
            if (duLieuThoiTiet[thang][ngay] == 'R') {
                soNgayMua[thang]++;
            } else if (duLieuThoiTiet[thang][ngay] == 'N') {
                soNgayMuaNhe[thang]++;
            } else if (duLieuThoiTiet[thang][ngay] == 'S') {
                soNgayNang[thang]++;
            }
        }
    }

    // Hiển thị báo cáo
    for (int thang = 0; thang < THANG; ++thang) {
        cout << "Tháng " << thang + 1 << " - Số ngày mưa: " << soNgayMua[thang]
             << " Số ngày mưa nhẹ: " << soNgayMuaNhe[thang] << " Số ngày nắng: " << soNgayNang[thang] << endl;
    }

    // Xác định tháng có nhiều ngày mưa nhất, mưa nhẹ nhất và nắng nhất
    int thangNhieuMuaNhat = 0, thangMuaNheNhat = 0, thangNangNhat = 0;
    for (int thang = 1; thang < THANG; ++thang) {
        if (soNgayMua[thang] > soNgayMua[thangNhieuMuaNhat]) {
            thangNhieuMuaNhat = thang;
        }
        if (soNgayMuaNhe[thang] < soNgayMuaNhe[thangMuaNheNhat]) {
            thangMuaNheNhat = thang;
        }
        if (soNgayNang[thang] > soNgayNang[thangNangNhat]) {
            thangNangNhat = thang;
        }
    }

    cout << "Tháng có nhiều ngày mưa nhất: Tháng " << thangNhieuMuaNhat + 1 << endl;
    cout << "Tháng có ít ngày mưa nhẹ nhất: Tháng " << thangMuaNheNhat + 1 << endl;
    cout << "Tháng có nhiều ngày nắng nhất: Tháng " << thangNangNhat + 1 << endl;

    return 0;
}