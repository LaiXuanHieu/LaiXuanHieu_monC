#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int MAX_LENGTH = 100;

    char inputString[MAX_LENGTH];

    // Nhập dãy số từ người dùng
    cout << "Nhap day so co mot chu so (khong co khoang trang): ";
    cin >> inputString;

    // Tính tổng các chữ số
    int sum = 0;
    char highestDigit = '0';
    char lowestDigit = '9';

    for (int i = 0; i < strlen(inputString); ++i) {
        char currentDigit = inputString[i];

        if (isdigit(currentDigit)) {
            // Cộng vào tổng
            sum += currentDigit - '0';

            // Cập nhật chữ số cao nhất và thấp nhất
            if (currentDigit > highestDigit) {
                highestDigit = currentDigit;
            }

            if (currentDigit < lowestDigit) {
                lowestDigit = currentDigit;
            }
        }
    }

    // Hiển thị kết quả
    cout << "Tong cac chu so: " << sum << endl;
    cout << "Chu so cao nhat: " << highestDigit << endl;
    cout << "Chu so thap nhat: " << lowestDigit << endl;

    return 0;
}
