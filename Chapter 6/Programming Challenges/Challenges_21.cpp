#include <iostream>
#include <iomanip>
using namespace std;

// Hàm tính lợi nhận hoặc thua lỗ từ một giao dịch cổ phiếu
double tinhLoiNhuan(int giaMua, int giaBan, int soLuuong)
{
    return (giaBan - giaMua) * soLuuong;
}

int main()
{
    int soGiaoDich;
    cout << "Nhap so lan giao dich: ";
    cin >> soGiaoDich;

    double tongLoiNhuan = 0.0;

    for (int i = 0; i < soGiaoDich; i++)
    {
        int giaMua, giaBan, soLuuong;
        cout << "Nhap gia mua cho giao dich " << i + 1 << ": ";
        cin >> giaMua;
        cout << "Nhap gia ban cho giao dich " << i + 1 << ": ";
        cin >> giaBan;
        cout << "Nhap so luong co phieu cho giao dich " << i + 1 << ": ";
        cin >> soLuuong;

        double loiNhuanGiaoDich = tinhLoiNhuan(giaMua, giaBan, soLuuong);
        tongLoiNhuan += loiNhuanGiaoDich;

        cout << "Loi nhuan/Thua lo tu giao dich " << i + 1 << ": $" << fixed << setprecision(2) << loiNhuanGiaoDich << endl;
    }

    cout << "Tong Loi nhuan/Thua lo tu tat ca cac giao dich: $" << fixed << setprecision(2) << tongLoiNhuan << endl;

    return 0;
}
