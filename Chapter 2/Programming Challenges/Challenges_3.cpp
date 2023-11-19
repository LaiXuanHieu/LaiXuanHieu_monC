//chương trình tính thuế khi mua hàng
#include <iostream>
using namespace std;

int main()
{
    // Xác định số tiền mua hàng
    double soTienMuaHang = 95.0;

    // Xác định tỷ lệ thuế thu nhập của tiểu bang và thuế quận
    double tyLeThueThuNhapTB = 4.0; // 4 phần trăm
    double tyLeThueQuan = 2.0;      // 2 phần trăm

    // Tính toán số tiền thuế thu nhập
    double thueThuNhapTB = (tyLeThueThuNhapTB / 100) * soTienMuaHang;
    double thueQuan = (tyLeThueQuan / 100) * soTienMuaHang;

    // Tính toán tổng số tiền thuế
    double tongThueMuaHang = thueThuNhapTB + thueQuan;

    // In kết quả
    cout << "So tien mua hang: $" << soTienMuaHang << endl;
    cout << "Thue thu nhap của tieu bang: $" << thueThuNhapTB << endl;
    cout << "Thue quan: $" << thueQuan << endl;
    cout << "Tong so tien thue: $" << tongThueMuaHang << endl;

    return 0;
}