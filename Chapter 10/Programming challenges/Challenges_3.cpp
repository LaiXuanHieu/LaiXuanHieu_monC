#include <iostream>
#include <cstring>
#include <string>

// Hàm đếm số từ trong chuỗi C
int countWordsC(const char* str) {
    int count = 0;
    bool inWord = false;

    // Duyệt qua chuỗi
    for (int i = 0; str[i] != '\0'; ++i) {
        // Nếu là ký tự không phải khoảng trắng hoặc ký tự xuống dòng
        if (str[i] != ' ' && str[i] != '\n') {
            // Nếu đang không ở trong một từ, tăng bộ đếm và đặt inWord thành true
            if (!inWord) {
                ++count;
                inWord = true;
            }
        } else {
            // Nếu là khoảng trắng hoặc ký tự xuống dòng, đặt inWord thành false
            inWord = false;
        }
    }

    return count;
}

// Hàm đếm số từ trong chuỗi lớp string
int countWordsString(const std::string& str) {
    int count = 0;
    bool inWord = false;

    // Duyệt qua chuỗi
    for (char ch : str) {
        // Nếu là ký tự không phải khoảng trắng hoặc ký tự xuống dòng
        if (ch != ' ' && ch != '\n') {
            // Nếu đang không ở trong một từ, tăng bộ đếm và đặt inWord thành true
            if (!inWord) {
                ++count;
                inWord = true;
            }
        } else {
            // Nếu là khoảng trắng hoặc ký tự xuống dòng, đặt inWord thành false
            inWord = false;
        }
    }

    return count;
}

int main() {
    using namespace std;

    const int MAX_LENGTH = 100;
    char inputStringC[MAX_LENGTH];
    string inputString;

    // Nhập chuỗi từ người dùng
    cout << "Nhap mot chuoi: ";
    cin.getline(inputStringC, MAX_LENGTH);

    cout << "So tu trong chuoi (su dung con tro chuoi): " << countWordsC(inputStringC) << endl;

    // Nhập chuỗi từ người dùng (sử dụng lớp string)
    cout << "Nhap mot chuoi: ";
    getline(cin, inputString);

    cout << "So tu trong chuoi (su dung lop string): " << countWordsString(inputString) << endl;

    return 0;
}
