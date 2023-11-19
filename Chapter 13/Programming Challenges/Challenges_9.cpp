#include <iostream>
#include <iomanip>

class Population {
private:
    int danSo;
    int soSinh;
    int soTu;

public:
    // Constructor với kiểm tra đầu vào
    Population(int danSo, int sinh, int tu) {
        setDanSo(danSo);
        setSoSinh(sinh);
        setSoTu(tu);
    }

    // Hàm thay đổi giá trị với kiểm tra đầu vào
    void setDanSo(int danSo) {
        if (danSo >= 1) {
            this->danSo = danSo;
        } else {
            std::cerr << "Lỗi: Số dân phải lớn hơn hoặc bằng 1." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    void setSoSinh(int sinh) {
        if (sinh >= 0) {
            soSinh = sinh;
        } else {
            std::cerr << "Lỗi: Số lượng sinh không thể là số âm." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    void setSoTu(int tu) {
        if (tu >= 0) {
            soTu = tu;
        } else {
            std::cerr << "Lỗi: Số lượng tử không thể là số âm." << std::endl;
            exit(EXIT_FAILURE);
        }
    }

    // Hàm thành viên để tính và trả về tỷ lệ sinh và tử
    double tinhTyLeSinh() const {
        return static_cast<double>(soSinh) / danSo;
    }

    double tinhTyLeTu() const {
        return static_cast<double>(soTu) / danSo;
    }
};

int main() {
    // Yêu cầu người dùng nhập số dân, số lượng sinh và số lượng tử
    int danSoNguoi, soLuongSinh, soLuongTu;
    std::cout << "Nhập số dân: ";
    std::cin >> danSoNguoi;
    std::cout << "Nhập số lượng sinh: ";
    std::cin >> soLuongSinh;
    std::cout << "Nhập số lượng tử: ";
    std::cin >> soLuongTu;

    // Tạo một đối tượng Population với các giá trị do người dùng nhập
    Population thongTinDanSo(danSoNguoi, soLuongSinh, soLuongTu);

    // Hiển thị tỷ lệ sinh và tử
    std::cout << "\nThông Tin Dân Số:" << std::endl;
    std::cout << "Tỷ Lệ Sinh: " << std::fixed << std::setprecision(2) << thongTinDanSo.tinhTyLeSinh() << std::endl;
    std::cout << "Tỷ Lệ Tử: " << std::fixed << std::setprecision(2) << thongTinDanSo.tinhTyLeTu() << std::endl;

    return 0;
}
