#include <iostream>
#include <cstdlib>
#include <ctime>

// Lớp Die để mô phỏng việc tung xúc xắc
class Die {
private:
    int soMat;
public:
    Die(int soMat) : soMat(soMat) {
        // Seed bộ sinh số ngẫu nhiên
        srand(static_cast<unsigned int>(time(0)));
    }

    int tung() const {
        return rand() % soMat + 1;
    }
};

// Hàm để mô phỏng một vòng chơi của trò chơi
int choiVong() {
    const int soMatXucXac = 6;
    Die xucXac(soMatXucXac);

    int diemComputer = xucXac.tung() + xucXac.tung();
    int diemNguoiChoi = 0;
    char tungTiep;

    std::cout << "Tổng điểm của máy tính được giấu." << std::endl;

    do {
        std::cout << "Tổng điểm của bạn: " << diemNguoiChoi << std::endl;
        std::cout << "Ném xúc xắc? (y/n): ";
        std::cin >> tungTiep;

        if (tungTiep == 'y' || tungTiep == 'Y') {
            int tung = xucXac.tung();
            std::cout << "Bạn tung được: " << tung << std::endl;
            diemNguoiChoi += tung;
        }

    } while ((tungTiep == 'y' || tungTiep == 'Y') && diemNguoiChoi <= 21);

    std::cout << "Tổng điểm của máy tính: " << diemComputer << std::endl;
    return (diemNguoiChoi <= 21 && (diemNguoiChoi > diemComputer || diemComputer > 21)) ? diemNguoiChoi : 0;
}

int main() {
    int diemNguoiChoi = 0;

    char choiTiep;
    do {
        int diemVong = choiVong();
        diemNguoiChoi = (diemVong > diemNguoiChoi) ? diemVong : diemNguoiChoi;

        std::cout << "Tổng điểm của bạn: " << diemNguoiChoi << std::endl;
        std::cout << "Bạn có muốn chơi tiếp không? (y/n): ";
        std::cin >> choiTiep;

    } while (choiTiep == 'y' || choiTiep == 'Y');

    std::cout << "Cảm ơn bạn đã chơi! Tổng điểm cuối cùng của bạn là: " << diemNguoiChoi << std::endl;

    return 0;
}
