#include <iostream>
#include <iomanip>

class HangHoa {
private:
    std::string tenHang;
    double gia;
    int soLuong;

public:
    HangHoa(std::string ten, double g, int sl) {
        tenHang = ten;
        gia = g;
        soLuong = sl;
    }

    std::string layTen() const {
        return tenHang;
    }

    double layGia() const {
        return gia;
    }

    int laySoLuong() const {
        return soLuong;
    }

    void giamSoLuong(int sl) {
        if (sl > 0 && sl <= soLuong) {
            soLuong -= sl;
        }
    }
};

class MayTinhTien {
private:
    HangHoa hangHoa;

public:
    MayTinhTien(const HangHoa& hh) : hangHoa(hh) {}

    void xuLyMuaHang(int soLuong) {
        if (soLuong <= 0) {
            std::cout << "Số lượng không hợp lệ. Vui lòng nhập một giá trị dương." << std::endl;
            return;
        }

        double giaBan = hangHoa.layGia() * 1.3; // 30% lợi nhuận
        double thanhTien = giaBan * soLuong;
        double thue = thanhTien * 0.06;
        double tongTien = thanhTien + thue;

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Tổng cộng: $" << thanhTien << std::endl;
        std::cout << "Thuế (6%): $" << thue << std::endl;
        std::cout << "Tổng thanh toán: $" << tongTien << std::endl;

        hangHoa.giamSoLuong(soLuong);
    }
};

int main() {
    // Ví dụ sử dụng
    HangHoa hang1("Hàng 1", 10.0, 50);
    MayTinhTien mayTinh1(hang1);

    int soLuong;
    std::cout << "Nhập số lượng của Hàng 1 muốn mua: ";
    std::cin >> soLuong;

    mayTinh1.xuLyMuaHang(soLuong);

    std::cout << "Số lượng còn lại: " << hang1.laySoLuong() << std::endl;

    return 0;
}
