#include <iostream>
#include <fstream>

using namespace std;

// Hàm để mã hóa ký tự
char encodeChar(char ch) {
    // Thêm 10 vào mã ASCII của ký tự
    return ch + 10;
}

// Hàm để mã hóa tệp
void encodeFile(const char* inputFile, const char* outputFile) {
    ifstream inFile(inputFile);

    if (!inFile.is_open()) {
        cout << "Khong the mo tep " << inputFile << " de doc." << endl;
        return;
    }

    ofstream outFile(outputFile);

    if (!outFile.is_open()) {
        cout << "Khong the mo tep " << outputFile << " de ghi." << endl;
        inFile.close();
        return;
    }

    // Mã hóa từng ký tự và ghi vào tệp thứ hai
    char ch;
    while (inFile.get(ch)) {
        char encodedChar = encodeChar(ch);
        outFile.put(encodedChar);
    }

    // Đóng tệp
    inFile.close();
    outFile.close();

    cout << "Tep da duoc ma hoa va luu vao " << outputFile << endl;
}

int main() {
    const char* inputFile = "input.txt";
    const char* outputFile = "encoded_output.txt";

    // Gọi hàm để mã hóa tệp
    encodeFile(inputFile, outputFile);

    return 0;
}
