#include <iostream>
#include <sstream>
#include <vector>
using namespace std;
bool isVowel(char ch) {
    // Kiểm tra xem ký tự có phải là nguyên âm hay không
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

    string convertToPigLatin(const string& word) {
    // Chuyển đổi từ thành Pig Latin
    if (word.empty()) {
        return ""; // Trả về chuỗi trống nếu từ là rỗng
    }

    char firstChar = word[0];
    if (isVowel(firstChar)) {
        // Nếu chữ cái đầu tiên là nguyên âm, chỉ cần thêm "ay" vào cuối từ
        return word + "ay";
    } else {
        // Nếu chữ cái đầu tiên không phải là nguyên âm
        // Chuyển ký tự đầu tiên cuối cùng và thêm "ay"
        return word.substr(1) + firstChar + "ay";
    }
}

    string convertSentenceToPigLatin(const string& sentence) {
    istringstream stream(sentence);
    string word;
    vector<string> pigLatinWords;

    // Đọc từng từ từ câu và chuyển đổi thành Pig Latin
    while (stream >> word) {
        pigLatinWords.push_back(convertToPigLatin(word));
    }

    // Tạo câu mới từ các từ đã chuyển đổi
    ostringstream resultStream;
    for (const string& pigLatinWord : pigLatinWords) {
        resultStream << pigLatinWord << ' ';
    }

    return resultStream.str();
}

int main() {
    string sentence;
    cout << "Nhap cau tieng Viet: ";
    getline(cin, sentence);

    // Chuyển đổi câu thành Pig Latin
    string pigLatinSentence = convertSentenceToPigLatin(sentence);

    // Hiển thị kết quả
    cout << "Pig Latin: " << pigLatinSentence << endl;

    return 0;
}
