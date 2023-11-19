#include <iostream>
#include <cstring>

// Hàm hiển thị chuỗi lùi
void reverseString(const char* str) {
    // Duyệt qua chuỗi từ cuối về đầu và hiển thị từng ký tự
    for (int i = 0; str[i] != '\0'; ++i) {
        std::cout << str[std::strlen(str) - 1 - i];
    }
    std::cout << std::endl;
}

int main() {
    using namespace std;

    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    // Nhập chuỗi từ người dùng
    cout << "Nhap mot chuoi: ";
    cin.getline(inputString, MAX_LENGTH);

    // Gọi hàm hiển thị chuỗi lùi
    cout << "Chuoi lui la: ";
    reverseString(inputString);

    return 0;
}
