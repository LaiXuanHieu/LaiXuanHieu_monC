// chương trình tính phí vận chuyển
#include <iostream>
using namespace std;

int main()
{
    double khoiLuong, khoangCach, phiVanChuyen;

    // Yêu cầu người dùng nhập khoi luong cua goi hang
    cout << "Nhap khoi luong cua goi hang (kilogram): ";
    cin >> khoiLuong;

    // Kiểm tra dữ liệu đầu vào: Kiểm tra xem khoi luong có hợp lệ không
    if (khoiLuong <= 0 || khoiLuong > 20)
    {
        cout << "Du lieu khong hop le: Khoi luong phai nam trong khoang tu 0 den 20 kg." << endl;
        return 1; // Thoat khoi chuong trinh
    }

    // Yêu cầu người dùng nhập khoang cach van chuyen
    cout << "Nhap khoang cach van chuyen (miles): ";
    cin >> khoangCach;

    // Kiểm tra dữ liệu đầu vào: Kiểm tra xem khoang cach có hợp lệ không
    if (khoangCach < 10 || khoangCach > 3000)
    {
        cout << "Du lieu khong hop le: Khoang cach phai nam trong khoang tu 10 den 3,000 miles." << endl;
        return 1; // Thoat khoi chuong trinh
    }

    // Tinh toan phi van chuyen dua tren khoi luong va khoang cach
    if (khoiLuong <= 2)
    {
        phiVanChuyen = (khoangCach / 500) * 1.10;
    }
    else if (khoiLuong > 2 && khoiLuong <= 6)
    {
        phiVanChuyen = (khoangCach / 500) * 2.20;
    }
    else if (khoiLuong > 6 && khoiLuong <= 10)
    {
        phiVanChuyen = (khoangCach / 500) * 3.70;
    }
    else
    {
        phiVanChuyen = (khoangCach / 500) * 4.80;
    }

    // Hien thi phi van chuyen
    cout << "Phi van chuyen la: $" << phiVanChuyen << endl;

    return 0;
}