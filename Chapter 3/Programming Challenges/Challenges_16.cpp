// chương trình tính tùa lua thế của bất động sản
#include <iostream>
using namespace std;

int main()
{
    const double MIEN_THUE_NGUOI_CAOTUOI = 5000.0;
    double GiaTriThuc, GiaTriDinhGia, TyLeThue, ThueHangNam, HoaDonThueHangQuy;

    // Nhập giá trị thực của bất động sản và tỷ lệ thuế
    cout << "Nhap gia tri thuc cua bat dong san: $";
    cin >> GiaTriThuc;
    cout << "Nhap ty le thue hien tai (tren moi $100 gia tri dinh gia): ";
    cin >> TyLeThue;

    // Tính giá trị định giá sau khi áp dụng mien thue cho nguoi cao tuoi
    GiaTriDinhGia = GiaTriThuc * 0.6;
    GiaTriDinhGia -= MIEN_THUE_NGUOI_CAOTUOI;

    // Tính thue bat dong san hang nam
    ThueHangNam = (GiaTriDinhGia / 100) * TyLeThue;

    // Tính hoa don thue hang quy
    HoaDonThueHangQuy = ThueHangNam / 4;

    // Hiển thị kết quả
    cout << "Thue bat dong san hang nam cho nguoi cao tuoi: $" << ThueHangNam << endl;
    cout << "Hoa don thue hang quy: $" << HoaDonThueHangQuy << endl;

    return 0;
}