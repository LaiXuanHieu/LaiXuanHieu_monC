#include <iostream>
#include <cstdlib> // Đối với hàm rand() và srand()
#include <ctime>   // Đối với hàm time()

class Coin {
private:
    std::string matPhaiLen;

public:
    // Constructor mặc định
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

    // Hàm thành viên để mô phỏng việc tung đồng xu
    void tung() {
        // Xác định mặt của đồng xu ngẫu nhiên
        int giaTriNgauNhien = rand() % 2;
        if (giaTriNgauNhien == 0) {
            matPhaiLen = "heads";
        } else {
            matPhaiLen = "tails";
        }
    }

    // Hàm thành viên để lấy mặt phải lên hiện tại
    std::string getMatPhaiLen() const {
        return matPhaiLen;
    }
};

int main() {
    Coin dongXu;

    // Hiển thị mặt phải lên ban đầu
    std::cout << "Ban đầu, mặt phải lên là: " << dongXu.getMatPhaiLen() << std::endl;

    // Tung đồng xu 20 lần và hiển thị mặt phải lên mỗi lần
    int demMatPhaiLen = 0;
    int demMatTruoc = 0;

    for (int i = 0; i < 20; ++i) {
        dongXu.tung();
        std::cout << "Sau lần tung thứ " << (i + 1) << ", mặt phải lên là: " << dongXu.getMatPhaiLen() << std::endl;

        // Đếm số lần mặt phải lên và mặt trái lên
        if (dongXu.getMatPhaiLen() == "heads") {
            demMatPhaiLen++;
        } else {
            demMatTruoc++;
        }
    }

    // Hiển thị số lần mặt phải lên và mặt trái lên
    std::cout << "\nSố lần mặt phải lên: " << demMatPhaiLen << std::endl;
    std::cout << "Số lần mặt trái lên: " << demMatTruoc << std::endl;

    return 0;
}
