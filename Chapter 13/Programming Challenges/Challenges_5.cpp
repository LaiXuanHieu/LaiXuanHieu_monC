#include <iostream>
#include <string>

class RetailItem {
private:
    std::string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(const std::string& desc, int units, double itemPrice)
        : description(desc), unitsOnHand(units), price(itemPrice) {}

    // Hàm thay đổi giá trị
    void setDescription(const std::string& desc) { description = desc; }
    void setUnitsOnHand(int units) { unitsOnHand = units; }
    void setPrice(double itemPrice) { price = itemPrice; }

    // Hàm truy nhập
    std::string getDescription() const { return description; }
    int getUnitsOnHand() const { return unitsOnHand; }
    double getPrice() const { return price; }
};

int main() {
    // Tạo các đối tượng RetailItem và lưu trữ dữ liệu
    RetailItem matHang1("Áo Jacket", 12, 59.95);
    RetailItem matHang2("Quần Jeans Thiết Kế", 40, 34.95);
    RetailItem matHang3("Áo Sơ Mi", 20, 24.95);

    // Hiển thị thông tin cho từng RetailItem
    std::cout << "Sản phẩm #1:" << std::endl;
    std::cout << "Mô tả: " << matHang1.getDescription() << std::endl;
    std::cout << "Số lượng trong kho: " << matHang1.getUnitsOnHand() << std::endl;
    std::cout << "Giá: $" << matHang1.getPrice() << std::endl;
    std::cout << std::endl;

    std::cout << "Sản phẩm #2:" << std::endl;
    std::cout << "Mô tả: " << matHang2.getDescription() << std::endl;
    std::cout << "Số lượng trong kho: " << matHang2.getUnitsOnHand() << std::endl;
    std::cout << "Giá: $" << matHang2.getPrice() << std::endl;
    std::cout << std::endl;

    std::cout << "Sản phẩm #3:" << std::endl;
    std::cout << "Mô tả: " << matHang3.getDescription() << std::endl;
    std::cout << "Số lượng trong kho: " << matHang3.getUnitsOnHand() << std::endl;
    std::cout << "Giá: $" << matHang3.getPrice() << std::endl;

    return 0;
}
