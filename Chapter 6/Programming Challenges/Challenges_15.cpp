#include <iostream>
using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nội trú
double tongChiPhiNoiTru(int soNgay, double chiPhiNgay, double chiPhiThuoc, double chiPhiDichVu)
{
    if (soNgay < 0 || chiPhiNgay < 0 || chiPhiThuoc < 0 || chiPhiDichVu < 0)
    {
        return -1.0; // Dữ liệu không hợp lệ, trả về -1
    }
    return (soNgay * chiPhiNgay) + chiPhiThuoc + chiPhiDichVu;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại tru
double tongChiPhiNgoaiTru(double chiPhiThuoc, double chiPhiDichVu)
{
    if (chiPhiThuoc < 0 || chiPhiDichVu < 0)
    {
        return -1.0; // Dữ liệu không hợp lệ, trả về -1
    }
    return chiPhiThuoc + chiPhiDichVu;
}

int main()
{
    char loaiBenhNhan;
    int soNgay;
    double chiPhiNgay, chiPhiThuoc, chiPhiDichVu;

    cout << "Benh nhan duoc nhap vien duoi hinh thuc noi tru (N) hay ngoai tru (T)? ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan == 'N' || loaiBenhNhan == 'n')
    {
        cout << "Nhap so ngay nam vien: ";
        cin >> soNgay;
        cout << "Nhap chi phi moi ngay nam vien: $";
        cin >> chiPhiNgay;
        cout << "Nhap chi phi thuoc: $";
        cin >> chiPhiThuoc;
        cout << "Nhap chi phi dich vu benh vien: $";
        cin >> chiPhiDichVu;

        double tongChiPhi = tongChiPhiNoiTru(soNgay, chiPhiNgay, chiPhiThuoc, chiPhiDichVu);
        if (tongChiPhi >= 0)
        {
            cout << "Tong chi phi cho benh nhan noi tru: $" << tongChiPhi << endl;
        }
        else
        {
            cout << "Du lieu khong hop le. Vui long dam bao nhap cac gia tri khong am." << endl;
        }
    }
    else if (loaiBenhNhan == 'T' || loaiBenhNhan == 't')
    {
        cout << "Nhap chi phi thuoc: $";
        cin >> chiPhiThuoc;
        cout << "Nhap chi phi dich vu benh vien: $";
        cin >> chiPhiDichVu;

        double tongChiPhi = tongChiPhiNgoaiTru(chiPhiThuoc, chiPhiDichVu);
        if (tongChiPhi >= 0)
        {
            cout << "Tong chi phi cho benh nhan ngoai tru: $" << tongChiPhi << endl;
        }
        else
        {
            cout << "Du lieu khong hop le. Vui long dam bao nhap cac gia tri khong am." << endl;
        }
    }
    else
    {
        cout << "Loai benh nhan khong hop le. Vui long nhap 'N' cho noi tru hoac 'T' cho ngoai tru." << endl;
    }

    return 0;
}
