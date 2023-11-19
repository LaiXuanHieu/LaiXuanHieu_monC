#include <iostream>
#include <cstring>
#include <cctype>

// Hàm viết hoa ký tự đầu tiên của mỗi câu cho chuỗi C
void capitalizeSentencesC(char* str) {
    bool capitalizeNext = true;

    // Duyệt qua chuỗi
    for (int i = 0; str[i] != '\0'; ++i) {
        // Nếu là ký tự chấm hoặc dấu chấm than, đặt capitalizeNext thành true
        if (str[i] == '.' || str[i] == '!') {
            capitalizeNext = true;
        }
        // Nếu là ký tự không phải khoảng trắng và cần viết hoa, viết hoa và đặt capitalizeNext thành false
        else if (!isspace(str[i]) && capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = false;
        }
    }
}

// Hàm viết hoa ký tự đầu tiên của mỗi câu cho chuỗi lớp string
void capitalizeSentencesString(std::string& str) {
    bool capitalizeNext = true;

    // Duyệt qua chuỗi
    for (int i = 0; i < str.length(); ++i) {
        // Nếu là ký tự chấm hoặc dấu chấm than, đặt capitalizeNext thành true
        if (str[i] == '.' || str[i] == '!') {
            capitalizeNext = true;
        }
        // Nếu là ký tự không phải khoảng trắng và cần viết hoa, viết hoa và đặt capitalizeNext thành false
        else if (!isspace(str[i]) && capitalizeNext) {
            str[i] = toupper(str[i]);
            capitalizeNext = false;
        }
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

    cout << "Chuoi sau khi viet hoa ky tu đau tien cua moi cau (su dung con tro chuoi):\n";
    capitalizeSentencesC(inputStringC);
    cout << inputStringC << "\n";

    // Nhập chuỗi từ người dùng (sử dụng lớp string)
    cout << "Nhap mot chuoi: ";
    getline(cin, inputString);

    cout << "Chuoi sau khi viet hoa ky tu đau tien cua moi cau (su dung lop string):\n";
    capitalizeSentencesString(inputString);
    cout << inputString << "\n";

    return 0;
}
