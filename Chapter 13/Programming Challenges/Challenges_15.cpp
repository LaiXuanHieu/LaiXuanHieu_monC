#include <iostream>
#include <cmath>

class TinhToanVay {
private:
    double soTienVay;
    double laiSuatHangNam;
    int soNamVay;

public:
    // Constructor
    TinhToanVay() : soTienVay(0), laiSuatHangNam(0), soNamVay(0) {}

    // Các hàm thiết lập cho chi tiết vay
    void datSoTienVay(double soTien) {
        if (soTien >= 0) {
            soTienVay = soTien;
        } else {
            std::cout << "Số tiền vay không thể là số âm. Đặt giá trị về 0." << std::endl;
            soTienVay = 0;
        }
    }

    void datLaiSuatHangNam(double laiSuat) {
        if (laiSuat >= 0) {
            laiSuatHangNam = laiSuat;
        } else {
            std::cout << "Lãi suất hàng năm không thể là số âm. Đặt giá trị về 0." << std::endl;
            laiSuatHangNam = 0;
        }
    }

    void datSoNamVay(int soNam) {
        if (soNam >= 0) {
            soNamVay = soNam;
        } else {
            std::cout << "Số năm vay không thể là số âm. Đặt giá trị về 0." << std::endl;
            soNamVay = 0;
        }
    }

    // Tính toán khoản trả hàng tháng
    double tinhKhoanTraHangThang() const {
        if (laiSuatHangNam == 0) {
            // Nếu không có lãi suất, sử dụng công thức lãi đơn
            return soTienVay / (soNamVay * 12);
        } else {
            double laiSuatHangThang = laiSuatHangNam / (12 * 100);
            int soLanTra = soNamVay * 12;
            return soTienVay * (laiSuatHangThang * std::pow(1 + laiSuatHangThang, soLanTra)) /
                   (std::pow(1 + laiSuatHangThang, soLanTra) - 1);
        }
    }

    // Tính tổng số tiền đã trả sau thời gian vay
    double tinhTongSoTienDaTra() const {
        return tinhKhoanTraHangThang() * soNamVay * 12;
    }
};

int main() {
    TinhToanVay tinhToan;

    // Nhập thông tin vay từ người dùng
    double soTienVay, laiSuatHangNam;
    int soNamVay;

    std::cout << "Nhập số tiền vay: $";
    std::cin >> soTienVay;
    tinhToan.datSoTienVay(soTienVay);

    std::cout << "Nhập lãi suất hàng năm (dưới dạng phần trăm): ";
    std::cin >> laiSuatHangNam;
    tinhToan.datLaiSuatHangNam(laiSuatHangNam);

    std::cout << "Nhập số năm vay: ";
    std::cin >> soNamVay;
    tinhToan.datSoNamVay(soNamVay);

    // Hiển thị khoản trả hàng tháng và tổng số tiền đã trả
    std::cout << "\nKhoản Trả Hàng Tháng: $" << tinhToan.tinhKhoanTraHangThang() << std::endl;
    std::cout << "Tổng Số Tiền Đã Trả: $" << tinhToan.tinhTongSoTienDaTra() << std::endl;

    return 0;
}
