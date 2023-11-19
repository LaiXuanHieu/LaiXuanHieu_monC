#include <iostream>
#include <iomanip>
using namespace std;

// Ham tinh so lit son can su dung
double tinhSoLitSon(int dienTich)
{
    return static_cast<double>(dienTich) / 110.0;
}

// Ham tinh so gio lao dong can thiet
double tinhGioLaoDong(int dienTich)
{
    return static_cast<double>(dienTich) / 110.0 * 8.0;
}

// Ham tinh chi phi son
double tinhChiPhiSon(double litSon, double giaTienTrenMotLit)
{
    return litSon * giaTienTrenMotLit;
}

// Ham tinh chi phi lao dong
double tinhChiPhiLaoDong(double gioLaoDong, double giaTienLaoDongTrenMotGio)
{
    return gioLaoDong * giaTienLaoDongTrenMotGio;
}

int main()
{
    int soPhong;
    double giaTienTrenMotLit, dienTichToanBo, soLitSon, gioLaoDong, chiPhiSon, chiPhiLaoDong, tongChiPhi;

    // Nhap so luong phong can son
    cout << "Nhap so luong phong can son: ";
    cin >> soPhong;

    // Khoi tao bien chi phi tong cong
    dienTichToanBo = 0.0;
    soLitSon = 0.0;
    gioLaoDong = 0.0;
    chiPhiSon = 0.0;
    chiPhiLaoDong = 0.0;
    tongChiPhi = 0.0;

    // Nhap dien tich va gia tien tren mot lit son cho tung phong
    for (int i = 1; i <= soPhong; i++)
    {
        double dienTich;
        cout << "Nhap dien tich cua phong " << i << ": ";
        cin >> dienTich;
        dienTichToanBo += dienTich;
    }

    cout << "Nhap gia tien tren mot lit son: $";
    cin >> giaTienTrenMotLit;

    // Tinh so lit son va so gio lao dong can thiet
    soLitSon = tinhSoLitSon(dienTichToanBo);
    gioLaoDong = tinhGioLaoDong(dienTichToanBo);

    // Tinh chi phi son va chi phi lao dong
    chiPhiSon = tinhChiPhiSon(soLitSon, giaTienTrenMotLit);
    chiPhiLaoDong = tinhChiPhiLaoDong(gioLaoDong, 25.00); // $25.00 moi gio lao dong

    // Tinh tong chi phi
    tongChiPhi = chiPhiSon + chiPhiLaoDong;

    // Hien thi ket qua
    cout << setprecision(2) << fixed;
    cout << "So lit son can su dung: " << soLitSon << endl;
    cout << "So gio lao dong can thiet: " << gioLaoDong << " gio" << endl;
    cout << "Chi phi son: $" << chiPhiSon << endl;
    cout << "Chi phi lao dong: $" << chiPhiLaoDong << endl;
    cout << "Tong chi phi cua cong viec son: $" << tongChiPhi << endl;

    return 0;
}
