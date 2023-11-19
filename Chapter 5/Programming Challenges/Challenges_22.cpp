#include <iostream>
using namespace std;

int main() {
    int doDaiCanh;

    cout << "Nhập một số nguyên dương không lớn hơn 15: ";
    cin >> doDaiCanh;

    if (doDaiCanh < 1 || doDaiCanh > 15) {
        cout << "Đầu vào không hợp lệ. Vui lòng nhập một số từ 1 đến 15." << endl;
        return 1;
    }

    for (int i = 0; i < doDaiCanh; i++) {
        for (int j = 0; j < doDaiCanh; j++) {
            cout << "X";
        }
        cout << endl;
    }

    return 0;
}