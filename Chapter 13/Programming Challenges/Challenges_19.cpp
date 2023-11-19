#include <iostream>
#include <string>

class CauHoi {
private:
    std::string cauHoiText;
    std::string dapAn1;
    std::string dapAn2;
    std::string dapAn3;
    std::string dapAn4;
    int dapAnDung;

public:
    CauHoi(
        const std::string& chuoiCauHoi,
        const std::string& da1,
        const std::string& da2,
        const std::string& da3,
        const std::string& da4,
        int dapAn)
        : cauHoiText(chuoiCauHoi), dapAn1(da1), dapAn2(da2), dapAn3(da3), dapAn4(da4), dapAnDung(dapAn) {}

    // Các hàm truy xuất
    std::string layChuoiCauHoi() const {
        return cauHoiText;
    }

    std::string layDapAn1() const {
        return dapAn1;
    }

    std::string layDapAn2() const {
        return dapAn2;
    }

    std::string layDapAn3() const {
        return dapAn3;
    }

    std::string layDapAn4() const {
        return dapAn4;
    }

    int layDapAnDung() const {
        return dapAnDung;
    }
};

// Hàm để chơi trò chơi trắc nghiệm
void choiTrivia(CauHoi cauHoi[], int soCauHoi) {
    int diemNguoiChoi1 = 0;
    int diemNguoiChoi2 = 0;

    for (int i = 0; i < soCauHoi; ++i) {
        std::cout << "\nCâu " << (i + 1) << ": " << cauHoi[i].layChuoiCauHoi() << std::endl;
        std::cout << "1. " << cauHoi[i].layDapAn1() << std::endl;
        std::cout << "2. " << cauHoi[i].layDapAn2() << std::endl;
        std::cout << "3. " << cauHoi[i].layDapAn3() << std::endl;
        std::cout << "4. " << cauHoi[i].layDapAn4() << std::endl;

        int dapAnNguoiChoi1, dapAnNguoiChoi2;

        std::cout << "Người chơi 1, nhập câu trả lời của bạn (1-4): ";
        std::cin >> dapAnNguoiChoi1;

        std::cout << "Người chơi 2, nhập câu trả lời của bạn (1-4): ";
        std::cin >> dapAnNguoiChoi2;

        if (dapAnNguoiChoi1 == cauHoi[i].layDapAnDung()) {
            diemNguoiChoi1++;
        }

        if (dapAnNguoiChoi2 == cauHoi[i].layDapAnDung()) {
            diemNguoiChoi2++;
        }
    }

    std::cout << "\nKết thúc trò chơi!\n";
    std::cout << "Điểm của Người chơi 1: " << diemNguoiChoi1 << std::endl;
    std::cout << "Điểm của Người chơi 2: " << diemNguoiChoi2 << std::endl;

    if (diemNguoiChoi1 > diemNguoiChoi2) {
        std::cout << "Người chơi 1 là người chiến thắng!\n";
    } else if (diemNguoiChoi2 > diemNguoiChoi1) {
        std::cout << "Người chơi 2 là người chiến thắng!\n";
    } else {
        std::cout << "Đây là một cuộc đối đầu hòa!\n";
    }
}

int main() {
    const int soCauHoi = 10;

    // Tạo mảng các đối tượng CauHoi
    CauHoi cauHoi[soCauHoi] = {
        {"Thủ đô của Pháp là gì?", "Berlin", "Paris", "London", "Rome", 2},
        {"Hành tinh nào được biết đến với tên gọi Hành tinh Đỏ?", "Mars", "Venus", "Jupiter", "Saturn", 1},
        {"Ai là tác giả của 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Jane Austen", "Mark Twain", 2},
        {"Loài động vật nào là lớn nhất trên thế giới?", "Voi", "Cá voi xanh", "Hươu cao cổ", "Cá heo", 2},
        {"Vào năm nào Chiến tranh thế giới thứ nhất bắt đầu?", "1914", "1918", "1939", "1945", 1},
        {"Nguyên tố nào có ký hiệu hóa học là 'O'?", "Oxygen", "Gold", "Silver", "Hydrogen", 1},
        {"Ai là người vẽ bức tranh Mona Lisa?", "Vincent van Gogh", "Leonardo da Vinci", "Pablo Picasso", "Claude Monet", 2},
        {"Thủ đô của Nhật Bản là gì?", "Seoul", "Beijing", "Tokyo", "Bangkok", 3},
        {"Đại dương nào là lớn nhất trên Trái đất?", "Đại Tây Dương", "Ấn Độ Dương", "Nam Băng Dương", "Thái Bình Dương", 4},
        {"Ngôn ngữ lập trình nào nổi tiếng với tính đọc hiểu và sự đơn giản?", "Java", "Python", "C++", "JavaScript", 2}
    };

    // Chơi trò chơi trắc nghiệm
    choiTrivia(cauHoi, soCauHoi);

    return 0;
}
