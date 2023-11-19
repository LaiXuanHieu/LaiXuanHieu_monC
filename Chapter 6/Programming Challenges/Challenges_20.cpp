#include <iostream>
using namespace std;

double tinhLoiNhuanCuaCoPhieu(int soLuongCoPhieu, double giaMuaMotCoPhieu, double phiMua, double giaBanMotCoPhieu, double phiBan)
{
    // Tính lợi nhuận sử dụng công thức đã cung cấp
    double loiNhuan = ((soLuongCoPhieu * giaBanMotCoPhieu - phiBan) - (soLuongCoPhieu * giaMuaMotCoPhieu + phiMua));

    return loiNhuan;
}

int main()
{
    int soLuongCoPhieu;
    double giaMuaMotCoPhieu, phiMua, giaBanMotCoPhieu, phiBan;

    // Nhập dữ liệu
    cout << "Nhap so luong co phieu: ";
    cin >> soLuongCoPhieu;
    cout << "Nhap gia mua mot co phieu: $";
    cin >> giaMuaMotCoPhieu;
    cout << "Nhap phi mua: $";
    cin >> phiMua;
    cout << "Nhap gia ban mot co phieu: $";
    cin >> giaBanMotCoPhieu;
    cout << "Nhap phi ban: $";
    cin >> phiBan;

    // Tinh toan loi nhuan hoac lo
    double loiNhuanHoacLo = tinhLoiNhuanCuaCoPhieu(soLuongCoPhieu, giaMuaMotCoPhieu, phiMua, giaBanMotCoPhieu, phiBan);

    // Hien thi ket qua
    if (loiNhuanHoacLo > 0)
    {
        cout << "Loi nhuan tu viec ban co phieu: $" << loiNhuanHoacLo << endl;
    }
    else if (loiNhuanHoacLo < 0)
    {
        cout << "Lo tu viec ban co phieu: $" << -loiNhuanHoacLo << endl;
    }
    else
    {
        cout << "Khong co loi nhuan hoac lo tu viec ban co phieu." << endl;
    }

    return 0;
}
