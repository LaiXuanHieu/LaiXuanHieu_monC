#include <iostream>
using namespace std;

// Hàm tính kích thước dân số cho một năm
int tinhDanSo(int pop, double tyLeSinh, double tyLeTuVong, int nguoiVao, int nguoiRa)
{
    return pop + (pop * tyLeSinh / 100) - (pop * tyLeTuVong / 100) + nguoiVao - nguoiRa;
}

int main()
{
    int kichThuocBanDau, soNam;
    double tyLeSinh, tyLeTuVong;
    int nguoiVao, nguoiRa;

    // Nhập các giá trị ban đầu
    cout << "Nhap kich thuoc dan so ban dau: ";
    cin >> kichThuocBanDau;

    while (kichThuocBanDau < 2)
    {
        cout << "Kich thuoc dan so ban dau phai it nhat la 2. Vui long nhap gia tri hop le: ";
        cin >> kichThuocBanDau;
    }

    cout << "Nhap ty le sinh hang nam (duoi dang phan tram): ";
    cin >> tyLeSinh;

    while (tyLeSinh < 0)
    {
        cout << "Ty le sinh khong the am. Vui long nhap gia tri hop le: ";
        cin >> tyLeSinh;
    }

    cout << "Nhap ty le tu vong hang nam (duoi dang phan tram): ";
    cin >> tyLeTuVong;

    while (tyLeTuVong < 0)
    {
        cout << "Ty le tu vong khong the am. Vui long nhap gia tri hop le: ";
        cin >> tyLeTuVong;
    }

    cout << "Nhap so nguoi thuong di chuyen vao khu vuc hang nam: ";
    cin >> nguoiVao;

    while (nguoiVao < 0)
    {
        cout << "So nguoi di chuyen vao khong the am. Vui long nhap gia tri hop le: ";
        cin >> nguoiVao;
    }

    cout << "Nhap so nguoi thuong di chuyen ra khoi khu vuc hang nam: ";
    cin >> nguoiRa;

    while (nguoiRa < 0)
    {
        cout << "So nguoi di chuyen ra khong the am. Vui long nhap gia tri hop le: ";
        cin >> nguoiRa;
    }

    cout << "Nhap so nam can du doan: ";
    cin >> soNam;

    // Xuat kich thuoc dan so ban dau
    cout << "Nam 0: Kich thuoc dan so ban dau la " << kichThuocBanDau << endl;

    // Du doan kich thuoc dan so cho moi nam
    for (int nam = 1; nam <= soNam; nam++)
    {
        kichThuocBanDau = tinhDanSo(kichThuocBanDau, tyLeSinh, tyLeTuVong, nguoiVao, nguoiRa);
        cout << "Nam " << nam << ": Kich thuoc dan so la " << kichThuocBanDau << endl;
    }

    return 0;
}
