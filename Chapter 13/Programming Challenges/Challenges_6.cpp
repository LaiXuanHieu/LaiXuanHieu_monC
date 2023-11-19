#include <iostream>

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Constructor mặc định
    Inventory() : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {}

    // Constructor thứ hai
    Inventory(int number, double itemCost, int qty) : itemNumber(0), quantity(0), cost(0.0), totalCost(0.0) {
        setItemNumber(number);
        setCost(itemCost);
        setQuantity(qty);
        setTotalCost();
    }

    // Hàm thay đổi giá trị
    void setItemNumber(int number) {
        if (number >= 0) {
            itemNumber = number;
        } else {
            std::cerr << "Lỗi: Số hàng không thể là số âm." << std::endl;
        }
    }

    void setQuantity(int qty) {
        if (qty >= 0) {
            quantity = qty;
            setTotalCost();
        } else {
            std::cerr << "Lỗi: Số lượng không thể là số âm." << std::endl;
        }
    }

    void setCost(double itemCost) {
        if (itemCost >= 0.0) {
            cost = itemCost;
            setTotalCost();
        } else {
            std::cerr << "Lỗi: Giá không thể là số âm." << std::endl;
        }
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Hàm truy nhập
    int getItemNumber() const { return itemNumber; }
    int getQuantity() const { return quantity; }
    double getCost() const { return cost; }
    double getTotalCost() const { return totalCost; }
};

int main() {
    // Thể hiện lớp Inventory
    Inventory matHang1(101, 2.5, 10);
    Inventory matHang2;

    // Hiển thị thông tin cho matHang1
    std::cout << "Thông tin Sản phẩm #1:" << std::endl;
    std::cout << "Số Hàng: " << matHang1.getItemNumber() << std::endl;
    std::cout << "Số Lượng: " << matHang1.getQuantity() << std::endl;
    std::cout << "Giá: $" << matHang1.getCost() << std::endl;
    std::cout << "Tổng Chi phí: $" << matHang1.getTotalCost() << std::endl;
    std::cout << std::endl;

    // Hiển thị thông tin cho matHang2
    std::cout << "Thông tin Sản phẩm #2 (giá trị mặc định):" << std::endl;
    std::cout << "Số Hàng: " << matHang2.getItemNumber() << std::endl;
    std::cout << "Số Lượng: " << matHang2.getQuantity() << std::endl;
    std::cout << "Giá: $" << matHang2.getCost() << std::endl;
    std::cout << "Tổng Chi phí: $" << matHang2.getTotalCost() << std::endl;

    return 0;
}
