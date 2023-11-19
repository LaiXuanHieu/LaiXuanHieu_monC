#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("People.txt");
    if (!inputFile) {
        cerr << "Lỗi: Không thể mở tệp tin." << endl;
        return 1;
    }

    int nam, dan_so;

    cout << "SỰ TĂNG TRƯỞNG DÂN SỐ PRAIRIEVILLE" << endl;
    cout << "(mỗi * đại diện cho 1.000 người)" << endl;

    while (inputFile >> nam >> dan_so) {
        cout << nam << " ";
        for (int i = 0; i < dan_so / 1000; i++) {
            cout << '*';
        }
        cout << endl;
    }

    inputFile.close();
    return 0;
}