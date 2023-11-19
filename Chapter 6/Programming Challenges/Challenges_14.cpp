#include <iostream>
using namespace std;

// Ham de nhap thong tin don hang
void getDetailsDonHang(int &soSpoolsDaDat, int &soSpoolsSanXuat, bool &coPhiVanChuyen, double &phiVanChuyenTrenMotSpool)
{
    do
    {
        cout << "Nhap so luong spools dat hang: ";
        cin >> soSpoolsDaDat;
    } while (soSpoolsDaDat < 1);

    do
    {
        cout << "Nhap so luong spools co san trong kho: ";
        cin >> soSpoolsSanXuat;
    } while (soSpoolsSanXuat < 0);

    cout << "Co phi van chuyen va xu ly dac biet khong? (1 cho co, 0 cho khong): ";
    cin >> coPhiVanChuyen;

    if (coPhiVanChuyen)
    {
        do
        {
            cout << "Nhap phi van chuyen dac biet tren moi spool: ";
            cin >> phiVanChuyenTrenMotSpool;
        } while (phiVanChuyenTrenMotSpool < 0);
    }
}

// Ham de hien thi tinh trang don hang
void hienThiTinhTrangDonHang(int soSpoolsDaDat, int soSpoolsSanXuat, bool coPhiVanChuyen, double phiVanChuyenTrenMotSpool = 10.0)
{
    int sanSangVanChuyen = min(soSpoolsDaDat, soSpoolsSanXuat);
    int doiSpools = soSpoolsDaDat - sanSangVanChuyen;
    double tongCong = sanSangVanChuyen * 100.0;
    double phiVanChuyenXuLy = sanSangVanChuyen * phiVanChuyenTrenMotSpool;
    double tongDonHang = tongCong + phiVanChuyenXuLy;

    cout << "So luong spools san sang van chuyen tu kho hien tai: " << sanSangVanChuyen << endl;
    cout << "So luong spools dat hang cho san xuat: " << doiSpools << endl;
    cout << "Tong so tien cho phan san sang van chuyen: $" << tongCong << endl;
    cout << "Tong phi van chuyen va xu ly cho phan san sang van chuyen: $" << phiVanChuyenXuLy << endl;
    cout << "Tong gia tri cua don hang san sang van chuyen: $" << tongDonHang << endl;
}

int main()
{
    int soSpoolsDaDat, soSpoolsSanXuat;
    bool coPhiVanChuyen;
    double phiVanChuyenTrenMotSpool;

    getDetailsDonHang(soSpoolsDaDat, soSpoolsSanXuat, coPhiVanChuyen, phiVanChuyenTrenMotSpool);
    hienThiTinhTrangDonHang(soSpoolsDaDat, soSpoolsSanXuat, coPhiVanChuyen, phiVanChuyenTrenMotSpool);

    return 0;
}
