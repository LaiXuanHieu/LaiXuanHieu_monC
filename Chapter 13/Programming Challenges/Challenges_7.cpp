#include <iostream>

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    // Hàm tạo
    TestScores() : score1(0.0), score2(0.0), score3(0.0) {}

    // Hàm thay đổi giá trị
    void setScore1(double s1) { score1 = s1; }
    void setScore2(double s2) { score2 = s2; }
    void setScore3(double s3) { score3 = s3; }

    // Hàm truy nhập
    double getScore1() const { return score1; }
    double getScore2() const { return score2; }
    double getScore3() const { return score3; }

    // Hàm thành viên để tính và trả về giá trị trung bình
    double calculateAverage() const {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    // Tạo một thể hiện của lớp TestScores
    TestScores doiTuongTest;

    // Yêu cầu người dùng nhập ba điểm kiểm tra
    double diem1, diem2, diem3;
    std::cout << "Nhập Điểm Kiểm Tra 1: ";
    std::cin >> diem1;
    std::cout << "Nhập Điểm Kiểm Tra 2: ";
    std::cin >> diem2;
    std::cout << "Nhập Điểm Kiểm Tra 3: ";
    std::cin >> diem3;

    // Đặt các điểm kiểm tra trong đối tượng TestScores
    doiTuongTest.setScore1(diem1);
    doiTuongTest.setScore2(diem2);
    doiTuongTest.setScore3(diem3);

    // Hiển thị giá trị trung bình của các điểm kiểm tra
    std::cout << "Điểm Trung Bình Kiểm Tra: " << doiTuongTest.calculateAverage() << std::endl;

    return 0;
}
