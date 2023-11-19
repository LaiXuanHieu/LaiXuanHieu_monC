#include <iostream>

class PayRoll {
private:
    double tyLeLuongTheoGio;
    double soGioLamViec;
    double tongLuong;

public:
    // Constructor
    PayRoll() : tyLeLuongTheoGio(0.0), soGioLamViec(0.0), tongLuong(0.0) {}

    // Hàm thay đổi giá trị
    void setTyLeLuongTheoGio(double tyLe) {
        tyLeLuongTheoGio = tyLe;
    }

    void setSoGioLamViec(double soGio) {
        if (soGio >= 0 && soGio <= 60) {
            soGioLamViec = soGio;
        } else {
            std::cerr << "Lỗi: Số giờ làm việc phải từ 0 đến 60." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Hàm để tính tổng lương
    void tinhTongLuong() {
        tongLuong = tyLeLuongTheoGio * soGioLamViec;
    }

    // Hàm truy xuất để lấy tổng lương
    double getTongLuong() const {
        return tongLuong;
    }
};

int main() {
    const int soNhanVien = 7;
    PayRoll nhanVien[soNhanVien];

    // Nhập số giờ làm việc cho mỗi nhân viên
    for (int i = 0; i < soNhanVien; ++i) {
        double soGio;
        std::cout << "Nhập số giờ làm việc cho Nhân Viên " << (i + 1) << ": ";
        std::cin >> soGio;

        nhanVien[i].setTyLeLuongTheoGio(10.0); // Giả sử tỷ lệ lương theo giờ là $10 cho tất cả nhân viên
        nhanVien[i].setSoGioLamViec(soGio);
        nhanVien[i].tinhTongLuong();
    }

    // Hiển thị số lương gộp cho mỗi nhân viên
    std::cout << "\nSố Lương Gộp cho Mỗi Nhân Viên:" << std::endl;
    for (int i = 0; i < soNhanVien; ++i) {
        std::cout << "Nhân Viên " << (i + 1) << ": $" << nhanVien[i].getTongLuong() << std::endl;
    }

    return 0;
}
