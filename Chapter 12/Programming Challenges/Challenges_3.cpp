#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Hàm để đọc và hiển thị từng dòng từ tệp chứa câu chuyện cười
void readAndDisplayJoke(const string& jokeFileName) {
    ifstream jokeFile(jokeFileName);

    if (!jokeFile.is_open()) {
        cout << "Khong the mo tep joke. Vui long kiem tra lai ten tep." << endl;
        return;
    }

    cout << "Cau chuyen cuoi:" << endl;

    string line;
    while (getline(jokeFile, line)) {
        cout << line << endl;
    }

    jokeFile.close();
}

// Hàm để đọc và hiển thị dòng cuối cùng từ tệp chứa dòng đục lỗ
void readAndDisplayPunchline(const string& punchlineFileName) {
    ifstream punchlineFile(punchlineFileName);

    if (!punchlineFile.is_open()) {
        cout << "Khong the mo tep punchline. Vui long kiem tra lai ten tep." << endl;
        return;
    }

    cout << "Dong ket thuc:" << endl;

    string lastLine;
    string line;
    while (getline(punchlineFile, line)) {
        lastLine = line;
    }

    cout << lastLine << endl;

    punchlineFile.close();
}

int main() {
    // Tên của tệp chứa câu chuyện cười
    string jokeFileName = "joke.txt";
    
    // Tên của tệp chứa dòng đục lỗ
    string punchlineFileName = "punchline.txt";

    // Gọi hai hàm để đọc và hiển thị nội dung từ hai tệp khác nhau
    readAndDisplayJoke(jokeFileName);
    cout << endl; // Thêm dòng trống giữa câu chuyện cười và dòng đục lỗ
    readAndDisplayPunchline(punchlineFileName);

    return 0;
}
