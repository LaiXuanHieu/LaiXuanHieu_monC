#include <iostream>
#include <map>
#include <sstream>

// Chuyển đổi một ký tự thành mã Morse
std::string charToMorse(char ch) {
    static const std::map<char, std::string> morseCode = {
        {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."},
        {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
        {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."},
        {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
        {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"},
        {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
        {'Y', "-.--"}, {'Z', "--.."},
        {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"},
        {'4', "....-"}, {'5', "....."}, {'6', "-...."}, {'7', "--..."},
        {'8', "---.."}, {'9', "----."}
    };

    auto it = morseCode.find(std::toupper(ch));
    return (it != morseCode.end()) ? it->second : "";
}

// Chuyển đổi một chuỗi thành mã Morse
std::string stringToMorse(const std::string& input) {
    std::ostringstream resultStream;

    for (char ch : input) {
        std::string morseCode = charToMorse(ch);
        if (!morseCode.empty()) {
            resultStream << morseCode << ' ';
        }
    }

    return resultStream.str();
}

int main() {
    std::string input;
    std::cout << "Nhap chuoi: ";
    std::getline(std::cin, input);

    // Chuyển đổi chuỗi thành mã Morse
    std::string morseCode = stringToMorse(input);

    // Hiển thị kết quả
    std::cout << "Ma Morse: " << morseCode << std::endl;

    return 0;
}
