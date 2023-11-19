#include <iostream>
#include <fstream>

using namespace std;

// Hàm để giải mã ký tự
char decodeChar(char ch) {
    // Trừ 10 từ mã ASCII của ký tự để giải mã
    return ch - 10;
}

// Hàm để giải mã tệp
void decodeFile(const char* inputFile, const char* outputFile) {
    ifstream inFile(inputFile, ios::binary);

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

    // Giải mã từng ký tự và ghi vào tệp thứ hai
    char ch;
    while (inFile.get(ch)) {
        char decodedChar = decodeChar(ch);
        outFile.put(decodedChar);
    }

    // Đóng tệp
    inFile.close();
    outFile.close();

    cout << "Tep da duoc giai ma va luu vao " << outputFile << endl;
}

int main() {
    const char* inputFile = "encoded_output.txt"; // Tên tệp đã mã hóa
    const char* outputFile = "decoded_output.txt"; // Tên tệp để lưu kết quả giải mã

    // Gọi hàm để giải mã tệp
    decodeFile(inputFile, outputFile);

    return 0;
}
