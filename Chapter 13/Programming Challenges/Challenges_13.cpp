#include <iostream>
#include <cstdlib> // Đối với hàm rand() và srand()
#include <ctime>   // Đối với hàm time()

class Coin {
private:
    std::string matPhaiLen;

public:
    // Constructor
    Coin() {
        // Khởi tạo seed ngẫu nhiên dựa trên thời gian hiện tại
        srand(static_cast<unsigned int>(time(0)));

        // Xác định mặt phải lên ban đầu ngẫu nhiên
        int giaTriNgauNhien = rand() % 2;
        if (giaTriNgauNhien == 0) {
            matPhaiLen = "heads";
        } else {
            matPhaiLen = "tails";
        }
    }

    // Hàm tung để mô phỏng việc tung đồng xu
    void tung() {
        // Xác định mặt của đồng xu ngẫu nhiên
        int giaTriNgauNhien = rand() % 2;
        if (giaTriNgauNhien == 0) {
            matPhaiLen = "heads";
        } else {
            matPhaiLen = "tails";
        }
    }

    // Hàm truy xuất để lấy mặt phải lên hiện tại
    std::string getMatPhaiLen() const {
        return matPhaiLen;
    }
};

int main() {
    Coin lotoXac, haoQua, nickel;
    double soDu = 0.0;

    while (soDu < 1.0) {
        // Tung quả lọt xác
        lotoXac.tung();
        if (lotoXac.getMatPhaiLen() == "heads") {
            soDu += 0.25;
        }

        // Tung quả hào quả
        haoQua.tung();
        if (haoQua.getMatPhaiLen() == "heads") {
            soDu += 0.10;
        }

        // Tung đồng nickel
        nickel.tung();
        if (nickel.getMatPhaiLen() == "heads") {
            soDu += 0.05;
        }

        // Hiển thị kết quả của vòng chơi hiện tại
        std::cout << "Lọt xác: " << lotoXac.getMatPhaiLen() << " | Hào quả: " << haoQua.getMatPhaiLen()
                  << " | Nickel: " << nickel.getMatPhaiLen() << " | Số Dư: $" << soDu << std::endl;
    }

    // Hiển thị kết quả cuối cùng
    if (soDu == 1.0) {
        std::cout << "\nChúc mừng! Bạn đã thắng trò chơi!" << std::endl;
    } else {
        std::cout << "\nRất tiếc! Bạn đã thua trò chơi. Số dư của bạn vượt quá $1." << std::endl;
    }

    return 0;
}
