// chương trình tính giá tị bất động sản
#include <iostream>
using namespace std;

int main()
{
    // Khai báo hằng số
    const double TY_LE_DINH_GIA = 0.6; // Tỷ lệ định giá
    const double THUE_MOI_100 = 0.75;  // Thuế trên mỗi $100 định giá

    // Khai báo biến
    double GiaTriThuc, GiaTriDinhGia, ThueBatDongSan;

    // Nhập giá trị thực của bất động sản
    cout << "Nhap gia tri thuc cua bat dong san: $";
    cin >> GiaTriThuc;

    // Tính giá trị định giá và thuế bất động sản
    GiaTriDinhGia = GiaTriThuc * TY_LE_DINH_GIA;
    ThueBatDongSan = (GiaTriDinhGia / 100) * THUE_MOI_100;

    // Hiển thị giá trị định giá và thuế bất động sản
    cout << "Gia tri dinh gia: $" << GiaTriDinhGia << endl;
    cout << "Thue bat dong san: $" << ThueBatDongSan << endl;

    return 0;
}