//chương trinh phan mem ban hang
#include <iostream>
using namespace std;

int main()
{
    // Hang so cho gia va ty le giam gia
    const double GIA_GOI_PHAN_MEM = 99.0;
    const double GIAM_GIA_10_19 = 0.2;
    const double GIAM_GIA_20_49 = 0.3;
    const double GIAM_GIA_50_99 = 0.4;
    const double GIAM_GIA_TU_100 = 0.5;

    int soLuongBan;
    double tongGia;

    // Yeu cau nguoi dung nhap so luong goi phan mem duoc ban
    cout << "Nhap so luong goi phan mem duoc ban: ";
    cin >> soLuongBan;

    // Kiem tra nhap lieu: Dam bao so luong goi phan mem lon hon 0
    if (soLuongBan <= 0)
    {
        cout << "Nhap lieu khong hop le. So luong goi phan mem phai lon hon 0." << endl;
    }
    else
    {
        // Tinh toan tong gia dua tren cac khuyen mai theo so luong ban
        if (soLuongBan >= 10 && soLuongBan <= 19)
        {
            tongGia = soLuongBan * GIA_GOI_PHAN_MEM * (1 - GIAM_GIA_10_19);
        }
        else if (soLuongBan >= 20 && soLuongBan <= 49)
        {
            tongGia = soLuongBan * GIA_GOI_PHAN_MEM * (1 - GIAM_GIA_20_49);
        }
        else if (soLuongBan >= 50 && soLuongBan <= 99)
        {
            tongGia = soLuongBan * GIA_GOI_PHAN_MEM * (1 - GIAM_GIA_50_99);
        }
        else
        {
            tongGia = soLuongBan * GIA_GOI_PHAN_MEM * (1 - GIAM_GIA_TU_100);
        }

        // Hien thi tong gia
        cout << "Tong gia cua giao dich la: $" << tongGia << endl;
    }

    return 0;
}