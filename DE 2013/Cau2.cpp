#include <iostream>

class Base {
public:
    Base() {
        std::cout << "Constructor of Base\n";
    }

    virtual ~Base() {
        std::cout << "Destructor of Base\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        std::cout << "Constructor of Derived\n";
    }

    ~Derived() {
        std::cout << "Destructor of Derived\n";
    }
};

int main() {
    Base* basePtr = new Derived(); // Tạo một đối tượng Derived thông qua con trỏ đến đối tượng cơ Base
    delete basePtr; // Không có virtual destructor, có thể xảy ra slicing và chỉ hủy phần Base của đối tượng
    
    return 0;
}
