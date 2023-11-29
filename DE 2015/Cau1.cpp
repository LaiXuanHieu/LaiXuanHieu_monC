#include <iostream>

class Singleton {
private:
    // Biến tĩnh để lưu trữ thể hiện duy nhất của lớp
    static Singleton* instance;

    // Hạn chế tạo mới đối tượng từ bên ngoài
    Singleton() {}

public:
    // Phương thức để lấy thể hiện duy nhất của lớp
    static Singleton* getInstance() {
        // Nếu chưa có thể hiện, tạo mới một thể hiện mới
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    // Các phương thức khác của lớp
    void someMethod() {
        std::cout << "Calling someMethod in Singleton" << std::endl;
    }

    // Hủy bỏ việc sao chép và gán
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

// Khởi tạo biến tĩnh instance bên ngoài lớp
Singleton* Singleton::instance = nullptr;

int main() {
    // Sử dụng thể hiện duy nhất của Singleton
    Singleton* singletonInstance1 = Singleton::getInstance();
    singletonInstance1->someMethod();

    // Thử tạo một thể hiện khác, nhưng chỉ nhận được thể hiện đã tạo trước đó
    Singleton* singletonInstance2 = Singleton::getInstance();
    singletonInstance2->someMethod();

    // Điều này sẽ in ra cùng địa chỉ, chứng minh rằng chỉ có một thể hiện được tạo
    std::cout << "Address of singletonInstance1: " << singletonInstance1 << std::endl;
    std::cout << "Address of singletonInstance2: " << singletonInstance2 << std::endl;

    return 0;
}