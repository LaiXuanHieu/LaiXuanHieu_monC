//chương trình tính số tiền cổ phiếu
#include <iostream>
using namespace std;

int main()
{
    int soCoPhieuMua = 1000;
    double giaMuaTrenMoiCoPhieu = 45.50;
    double tyLeHoaHongMua = 0.02;

    int soCoPhieuBan = 1000;
    double giaBanTrenMoiCoPhieu = 56.90;
    double tyLeHoaHongBan = 0.02;

    // Tính toán số tiền Joe da tra để mua co phieu
    double soTienDaTraMuaCoPhieu = soCoPhieuMua * giaMuaTrenMoiCoPhieu;

    // Tính hoa hong Joe tra cho nguoi moi gioi khi mua co phieu
    double hoaHongMua = soTienDaTraMuaCoPhieu * tyLeHoaHongMua;

    // Tính toán so tien Joe nhan duoc khi ban co phieu
    double soTienNhanDuocKhiBanCoPhieu = soCoPhieuBan * giaBanTrenMoiCoPhieu;

    // Tính hoa hong Joe tra cho nguoi moi gioi khi ban co phieu
    double hoaHongBan = soTienNhanDuocKhiBanCoPhieu * tyLeHoaHongBan;

    // Tính loi nhuan hoac thua lo
    double loiNhuan = soTienNhanDuocKhiBanCoPhieu - hoaHongBan - soTienDaTraMuaCoPhieu - hoaHongMua;

    // Hien thi thong tin
    cout << "So tien da tra de mua co phieu: $" << soTienDaTraMuaCoPhieu << endl;
    cout << "So tien hoa hong da tra khi mua co phieu: $" << hoaHongMua << endl;
    cout << "So tien Joe da ban co phieu: $" << soTienNhanDuocKhiBanCoPhieu << endl;
    cout << "So tien hoa hong da tra khi ban co phieu: $" << hoaHongBan << endl;
    cout << "Loi nhuan/Thua lo: $" << loiNhuan << endl;

    return 0;
}