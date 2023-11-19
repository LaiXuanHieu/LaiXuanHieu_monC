#include <iostream>
#include <string>

class Car {
private:
    int yearModel;
    std::string make;
    int speed;

public:
    // Constructor
    Car(int nam, std::string hangXe) : yearModel(nam), make(hangXe), speed(0) {}

    // Hàm truy nhập
    int getYearModel() const { return yearModel; }
    std::string getMake() const { return make; }
    int getSpeed() const { return speed; }

    // Hàm tăng tốc
    void accelerate() {
        speed += 5;
    }

    // Hàm phanh
    void brake() {
        speed -= 5;
        if (speed < 0) {
            speed = 0; // Đảm bảo tốc độ không thấp hơn 0
        }
    }
};

int main() {
    // Tạo đối tượng Car
    Car xeToi(2022, "Toyota");

    // Tăng tốc và hiển thị tốc độ
    std::cout << "Tăng tốc:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        xeToi.accelerate();
        std::cout << "Tốc độ hiện tại: " << xeToi.getSpeed() << " mph" << std::endl;
    }

    // Phanh và hiển thị tốc độ
    std::cout << "\nPhanh:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        xeToi.brake();
        std::cout << "Tốc độ hiện tại: " << xeToi.getSpeed() << " mph" << std::endl;
    }

    return 0;
}
