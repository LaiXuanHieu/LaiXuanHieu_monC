#include <iostream>
#include <iomanip>

class NumberArray {
private:
    double* numbers; // Mảng động để lưu trữ các số thực
    int size;        // Kích thước của mảng

public:
    // Constructor cấp phát động mảng
    NumberArray(int size) {
        this->size = size;
        numbers = new double[size];
    }

    // Destructor giải phóng bộ nhớ đã cấp phát động
    ~NumberArray() {
        delete[] numbers;
    }

    // Hàm để lưu trữ một số trong một phần tử của mảng
    void setElement(int index, double value) {
        if (index >= 0 && index < size) {
            numbers[index] = value;
        } else {
            std::cerr << "Lỗi: Chỉ số không hợp lệ." << std::endl;
        }
    }

    // Hàm để truy xuất một số từ một phần tử của mảng
    double getElement(int index) const {
        if (index >= 0 && index < size) {
            return numbers[index];
        } else {
            std::cerr << "Lỗi: Chỉ số không hợp lệ." << std::endl;
            return 0.0; // Giá trị mặc định nếu chỉ số vượt ra khỏi giới hạn
        }
    }

    // Hàm để trả về giá trị lớn nhất được lưu trữ trong mảng
    double getHighest() const {
        double highest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    // Hàm để trả về giá trị nhỏ nhất được lưu trữ trong mảng
    double getLowest() const {
        double lowest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    // Hàm để trả về giá trị trung bình của tất cả các số được lưu trữ trong mảng
    double getAverage() const {
        double sum = 0.0;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
        }
        return sum / size;
    }
};

int main() {
    // Tạo một thể hiện của lớp NumberArray với kích thước cụ thể
    NumberArray array(5);

    // Lưu trữ các số trong mảng
    for (int i = 0; i < 5; ++i) {
        double value;
        std::cout << "Nhập một số cho chỉ số " << i << ": ";
        std::cin >> value;
        array.setElement(i, value);
    }

    // Hiển thị các số được lưu trữ, giá trị lớn nhất, nhỏ nhất và giá trị trung bình
    std::cout << "\nCác số được lưu trữ trong mảng:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << "Chỉ số " << i << ": " << array.getElement(i) << std::endl;
    }

    std::cout << "Giá trị lớn nhất: " << array.getHighest() << std::endl;
    std::cout << "Giá trị nhỏ nhất: " << array.getLowest() << std::endl;
    std::cout << "Giá trị trung bình: " << std::fixed << std::setprecision(2) << array.getAverage() << std::endl;

    return 0;
}
