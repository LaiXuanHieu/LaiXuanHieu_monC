#include <iostream>
using namespace std;

void stringCopy(char [], char []); // Function prototype

int main()
{
    const int LENGTH = 30; // Kích thước của mảng
    char first[LENGTH]; // Để chứa đầu vào từ người dùng
    char second[LENGTH]; // Để chứa bản sao

    // Nhận chuỗi từ người dùng và lưu vào first.
    cout << "Enter a string with no more than "
         << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);

    // Sao chép nội dung từ first sang second.
    stringCopy(first, second);

    // Hiển thị bản sao.
    cout << "The string you entered is:\n" << second << endl;

    return 0;
}

void stringCopy(char string1[], char string2[])
{
    int index = 0; // Bộ đếm vòng lặp

    // Duyệt qua string1, sao chép từng phần tử vào string2.
    // Dừng khi gặp ký tự null.
    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
    }

    // Đặt ký tự null vào string2.
    string2[index] = '\0';
}
