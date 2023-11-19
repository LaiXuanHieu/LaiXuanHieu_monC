#include <iostream>
#include <cstring>
#include <string>

// Hàm đếm số từ và tính số ký tự trong mỗi từ cho chuỗi C
void countWordsAndAverageC(const char* str) {
    int wordCount = 0;
    int charCount = 0;
    bool inWord = false;

    // Duyệt qua chuỗi
    for (int i = 0; str[i] != '\0'; ++i) {
        // Nếu là ký tự không phải khoảng trắng hoặc ký tự xuống dòng
        if (str[i] != ' ' && str[i] != '\n') {
            // Nếu đang không ở trong một từ, tăng bộ đếm từ và đặt inWord thành true
            if (!inWord) {
                ++wordCount;
                inWord = true;
            }
            ++charCount; // Tăng bộ đếm ký tự trong từ
        } else {
            // Nếu là khoảng trắng hoặc ký tự xuống dòng, đặt inWord thành false
            inWord = false;
        }
    }

    if (wordCount == 0) {
        std::cout << "Khong co tu nao trong chuoi.\n";
    } else {
        double averageLetters = static_cast<double>(charCount) / wordCount;
        std::cout << "So tu trong chuoi: " << wordCount << "\n";
        std::cout << "So trung binh ky tu trong moi tu: " << averageLetters << "\n";
    }
}

// Hàm đếm số từ và tính số ký tự trong mỗi từ cho chuỗi lớp string
void countWordsAndAverageString(const std::string& str) {
    int wordCount = 0;
    int charCount = 0;
    bool inWord = false;

    // Duyệt qua chuỗi
    for (char ch : str) {
        // Nếu là ký tự không phải khoảng trắng hoặc ký tự xuống dòng
        if (ch != ' ' && ch != '\n') {
            // Nếu đang không ở trong một từ, tăng bộ đếm từ và đặt inWord thành true
            if (!inWord) {
                ++wordCount;
                inWord = true;
            }
            ++charCount; // Tăng bộ đếm ký tự trong từ
        } else {
            // Nếu là khoảng trắng hoặc ký tự xuống dòng, đặt inWord thành false
            inWord = false;
        }
    }

    if (wordCount == 0) {
        std::cout << "Khong co tu nao trong chuoi.\n";
    } else {
        double averageLetters = static_cast<double>(charCount) / wordCount;
        std::cout << "So tu trong chuoi: " << wordCount << "\n";
        std::cout << "So trung binh ky tu trong moi tu: " << averageLetters << "\n";
    }
}

int main() {
    using namespace std;

    const int MAX_LENGTH = 100;
    char inputStringC[MAX_LENGTH];
    string inputString;

    // Nhập chuỗi từ người dùng
    cout << "Nhap mot chuoi: ";
    cin.getline(inputStringC, MAX_LENGTH);

    cout << "Thong tin ve chuoi (su dung con tro chuoi):\n";
    countWordsAndAverageC(inputStringC);

    // Nhập chuỗi từ người dùng (sử dụng lớp string)
    cout << "Nhap mot chuoi: ";
    getline(cin, inputString);

    cout << "Thong tin ve chuoi (su dung lop string):\n";
    countWordsAndAverageString(inputString);

    return 0;
}
