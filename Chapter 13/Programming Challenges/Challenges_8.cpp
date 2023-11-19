#include <iostream>

class Circle {
private:
    double radius;
    const double pi;

public:
    // Hàm tạo mặc định
    Circle() : radius(0.0), pi(3.14159) {}

    // Hàm tạo với bán kính làm đối số
    Circle(double r) : radius(r), pi(3.14159) {}

    // Hàm thay đổi giá trị cho biến bán kính
    void setRadius(double r) {
        radius = r;
    }

    // Hàm truy nhập cho biến bán kính
    double getRadius() const {
        return radius;
    }

    // Hàm để tính và trả về diện tích của hình tròn
    double getArea() const {
        return pi * radius * radius;
    }

    // Hàm để tính và trả về đường kính của hình tròn
    double getDiameter() const {
        return radius * 2;
    }

    // Hàm để tính và trả về chu vi của hình tròn
    double getCircumference() const {
        return 2 * pi * radius;
    }
};

int main() {
    // Yêu cầu người dùng nhập bán kính của hình tròn
    double banKinh;
    std::cout << "Nhập bán kính của hình tròn: ";
    std::cin >> banKinh;

    // Tạo một đối tượng Circle với bán kính do người dùng nhập
    Circle hinhTron(banKinh);

    // Hiển thị thông tin về hình tròn
    std::cout << "\nThông Tin Hình Tròn:" << std::endl;
    std::cout << "Bán Kính: " << hinhTron.getRadius() << std::endl;
    std::cout << "Diện Tích: " << hinhTron.getArea() << std::endl;
    std::cout << "Đường Kính: " << hinhTron.getDiameter() << std::endl;
    std::cout << "Chu Vi: " << hinhTron.getCircumference() << std::endl;

    return 0;
}
