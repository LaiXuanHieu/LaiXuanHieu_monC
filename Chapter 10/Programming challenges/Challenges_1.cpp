#include <iostream>

// Hàm tính chiều dài chuỗi
int lengthOfString(const char* str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    // Nhập chuỗi từ người dùng
    std::cout << "Nhap mot chuoi: ";
    std::cin.getline(inputString, MAX_LENGTH);

    // Gọi hàm tính chiều dài chuỗi và hiển thị kết quả
    int length = lengthOfString(inputString);
    std::cout << "Chieu dai cua chuoi la: " << length << std::endl;

    return 0;
}
