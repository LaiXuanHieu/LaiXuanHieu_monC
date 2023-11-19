#include <iostream>
#include <cstdlib> // Đối với hàm rand() và srand()
#include <ctime>   // Đối với hàm time()

class Die {
private:
    int soMat;

public:
    // Constructor
    Die(int soMat) {
        this->soMat = soMat;
    }

    // Hàm thành viên để mô phỏng việc tung xúc xắc
    int tung() const {
        return rand() % soMat + 1;
    }
};

int main() {
    // Khởi tạo seed ngẫu nhiên dựa trên thời gian hiện tại
    srand(static_cast<unsigned int>(time(0)));

    // Tạo một xúc xắc sáu mặt cho trò chơi câu cá
    Die xucXac(6);

    // Biến để theo dõi điểm câu cá và đầu vào của người chơi
    int diemCauCa = 0;
    char tiepTucCauCa;

    do {
        // Hỏi người chơi liệu có muốn tiếp tục câu cá không
        std::cout << "Bạn có muốn tiếp tục câu cá không? (y/n): ";
        std::cin >> tiepTucCauCa;

        if (tiepTucCauCa == 'y' || tiepTucCauCa == 'Y') {
            // Mô phỏng việc tung xúc xắc để câu được một mục nào đó
            int soHieuMuc = xucXac.tung();

            // Xác định số điểm câu cá dựa trên mục câu được
            int diemThuong = 0;
            switch (soHieuMuc) {
                case 1:
                    std::cout << "Bạn câu được một con cá lớn! +5 điểm" << std::endl;
                    diemThuong = 5;
                    break;
                case 2:
                    std::cout << "Bạn câu được một chiếc giày cũ! -1 điểm" << std::endl;
                    diemThuong = -1;
                    break;
                case 3:
                    std::cout << "Bạn câu được một con cá nhỏ! +2 điểm" << std::endl;
                    diemThuong = 2;
                    break;
                // Thêm các trường hợp cho các mục khác
                default:
                    std::cout << "Bạn câu được một cái gì đó không biết! +1 điểm" << std::endl;
                    diemThuong = 1;
            }

            // Cập nhật tổng điểm câu cá
            diemCauCa += diemThuong;
        }

    } while (tiepTucCauCa == 'y' || tiepTucCauCa == 'Y');

    // Hiển thị tổng điểm câu cá và thông điệp chúc mừng tương ứng
    std::cout << "\nTổng Điểm Câu Cá: " << diemCauCa << std::endl;

    if (diemCauCa >= 10) {
        std::cout << "Chúc mừng! Bạn là nhà vô địch câu cá!" << std::endl;
    } else if (diemCauCa >= 0) {
        std::cout << "Câu cá thành công! Bạn đã làm tốt." << std::endl;
    } else {
        std::cout << "Chúc bạn may mắn lần sau. Hãy tiếp tục luyện tập!" << std::endl;
    }

    return 0;
}
