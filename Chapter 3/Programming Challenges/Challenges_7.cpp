#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Hằng số cho giá vé và phần trăm cho nhà phân phối
    const double GIA_VE_NGUOI_LON = 10.00;
    const double GIA_VE_TRE_EM = 6.00;
    const double PHAN_TRAM_NHA_PHAN_PHOI = 0.8; // 80%

    // Biến để lưu trữ thông tin nhập từ người dùng
    string tenPhim;
    int veNguoiLonBanDuoc, veTreEmBanDuoc;

    // Nhập thông tin từ người dùng
    cout << "Nhap ten phim ";
    getline(cin, tenPhim);
    cout << "nhap so ve da ban : ";
    cin >> veNguoiLonBanDuoc;
    cout << "nhap so ve tre em da ban : ";
    cin >> veTreEmBanDuoc;

    // Tính doanh thu tổng và lợi nhuận thực
    double doanhThuTong = (veNguoiLonBanDuoc * GIA_VE_NGUOI_LON) + (veTreEmBanDuoc * GIA_VE_TRE_EM);
    double loiNhuanThuc = doanhThuTong * PHAN_TRAM_NHA_PHAN_PHOI;
    double phanLoiNhuanNhaPhanPhoi = doanhThuTong - loiNhuanThuc;

    // Hiển thị báo cáo
    cout << "\nTên phim: \"" << tenPhim << "\"" << endl;
    cout << "So ve nguoi lon da ban : " << veNguoiLonBanDuoc << endl;
    cout << "so ve tre em da ban: " << veTreEmBanDuoc << endl;
    cout << "tong danh thu : $" << doanhThuTong << fixed << setprecision(2) << endl;
    cout << "loi nhuan thuc : $" << loiNhuanThuc << fixed << setprecision(2) << endl;
    cout << "so tien tra cho nha phan phoi : $" << phanLoiNhuanNhaPhanPhoi << fixed << setprecision(2) << endl;

    return 0;
}