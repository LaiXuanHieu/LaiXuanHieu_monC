#include <iostream>
#include <cmath>

class Sin {
public:
    // Hàm tĩnh để lấy đối tượng duy nhất của lớp Sin
    static Sin& getInstance() {
        static Sin instance;  // Đảm bảo chỉ tạo một lần
        return instance;
    }

    // Hàm tính sin(x)
    double CalculateSin(double x) {
        return std::sin(x);
    }

private:
    // Hàm tạo và hủy ẩn để ngăn chặn việc tạo đối tượng từ bên ngoài
    Sin() {}
    ~Sin() {}
    
    // Ngăn chặn sao chép và gán
    Sin(const Sin&) = delete;
    Sin& operator=(const Sin&) = delete;
};

int main() {
    double x = 2.0;
    std::cout << Sin::getInstance().CalculateSin(x) << std::endl;

    return 0;
}