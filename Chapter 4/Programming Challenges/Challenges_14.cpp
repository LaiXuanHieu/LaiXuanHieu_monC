// chương trình tính phí dịch vụ ngân hàng mổi tháng
#include <iostream>
using namespace std;

int main()
{
    double soDuBanDau, phiDichVu = 10.0;
    int soLuongCheque;

    // Yeu cau nguoi dung nhap so du ban dau
    cout << "Nhap so du ban dau: $";
    cin >> soDuBanDau;

    // Kiem tra du lieu dau vao: Kiem tra xem so du ban dau co la so am (qua tra) khong
    if (soDuBanDau < 0)
    {
        cout << "Thong bao cap bach: Tai khoan bi tham hut." << endl;
        return 1; // Thoat khoi chuong trinh
    }

    // Yeu cau nguoi dung nhap so luong sec da viet
    cout << "Nhap so luong sec da viet: ";
    cin >> soLuongCheque;

    // Kiem tra du lieu dau vao: Kiem tra xem so luong sec co la so am khong
    if (soLuongCheque < 0)
    {
        cout << "Du lieu khong hop le: So luong sec khong the la so am." << endl;
        return 1; // Thoat khoi chuong trinh
    }

    // Tinh toan phi dich vu dua tren so luong sec
    if (soLuongCheque < 20)
    {
        phiDichVu += soLuongCheque * 0.10;
    }
    else if (soLuongCheque >= 20 && soLuongCheque < 40)
    {
        phiDichVu += soLuongCheque * 0.08;
    }
    else if (soLuongCheque >= 40 && soLuongCheque < 60)
    {
        phiDichVu += soLuongCheque * 0.06;
    }
    else
    {
        phiDichVu += soLuongCheque * 0.04;
    }

    // Kiem tra xem so du co giam xuong duoi $400 va ap dung phi bo sung $15
    if (soDuBanDau < 400)
    {
        phiDichVu += 15.0;
    }

    // Hien thi tong phi dich vu cho thang
    cout << "Phi dich vu cua ngan hang cho thang la: $" << phiDichVu << endl;

    return 0;
}