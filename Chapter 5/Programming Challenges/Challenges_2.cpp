#include <iostream>
using namespace std;

void hien_thi_ky_tu_ascii() {
    for (int i = 0; i < 128; i++) {
        cout << char(i) << " ";
        if ((i + 1) % 16 == 0) {
            cout << endl;
        }
    }
}

int main() {
    hien_thi_ky_tu_ascii();
    return 0;
}