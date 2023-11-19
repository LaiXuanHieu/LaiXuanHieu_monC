#include <iostream>

class TemperatureConverter {
public:
    TemperatureConverter(float temperature) : temperature(temperature) {}

    bool isEthylFreezing() const {
        return temperature <= -173;
    }

    bool isEthylBoiling() const {
        return temperature >= 172;
    }

    bool isOxygenFreezing() const {
        return temperature <= -362;
    }

    bool isOxygenBoiling() const {
        return temperature >= -306;
    }

    bool isWaterFreezing() const {
        return temperature <= 32;
    }

    bool isWaterBoiling() const {
        return temperature >= 212;
    }

private:
    float temperature;
};

int main() {
    // Nhập nhiệt độ từ người dùng
    float temperature_input;
    std::cout << "Nhập nhiệt độ: ";
    std::cin >> temperature_input;

    // Tạo một đối tượng của lớp TemperatureConverter
    TemperatureConverter temperature_converter(temperature_input);

    // Kiểm tra và hiển thị chất có thể đóng ở nhiệt độ đã nhập
    if (temperature_converter.isEthylFreezing()) {
        std::cout << "Ethyl alcohol sẽ đóng ở nhiệt độ này." << std::endl;
    }
    if (temperature_converter.isOxygenFreezing()) {
        std::cout << "Oxygen sẽ đóng ở nhiệt độ này." << std::endl;
    }
    if (temperature_converter.isWaterFreezing()) {
        std::cout << "Nước sẽ đóng ở nhiệt độ này." << std::endl;
    }

    // Kiểm tra và hiển thị chất có thể sôi ở nhiệt độ đã nhập
    if (temperature_converter.isEthylBoiling()) {
        std::cout << "Ethyl alcohol sẽ sôi ở nhiệt độ này." << std::endl;
    }
    if (temperature_converter.isOxygenBoiling()) {
        std::cout << "Oxygen sẽ sôi ở nhiệt độ này." << std::endl;
    }
    if (temperature_converter.isWaterBoiling()) {
        std::cout << "Nước sẽ sôi ở nhiệt độ này." << std::endl;
    }

    return 0;
}
