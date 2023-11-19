//chương trình tính trung bình cộng 5 số
#include <iostream>
using namespace std;

int main() {
    // Khai báo và khởi tạo biến cho các giá trị
    int value1 = 28; // Biến cho giá trị thứ nhất
    int value2 = 32; // Biến cho giá trị thứ hai
    int value3 = 37; // Biến cho giá trị thứ ba
    int value4 = 24; // Biến cho giá trị thứ tư
    int value5 = 33; // Biến cho giá trị thứ năm

    // Tính tổng của các giá trị
    int sum = value1 + value2 + value3 + value4 + value5; // Tính tổng của các giá trị

    // Tính trung bình cộng
    double average = static_cast<double>(sum) / 5; // Đảm bảo sử dụng phép chia số thực

    // Hiển thị trung bình cộng
    cout << "Trung binh cong cua cac gia tri la: " << average << endl;

    return 0;
}