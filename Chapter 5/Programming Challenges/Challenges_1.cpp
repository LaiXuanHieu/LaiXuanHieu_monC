#include <iostream>
using namespace std;

int nhap_so_nguyen_duong() {
    int num;
    while (true) {
        cout << "Nhap mot so nguyen duong: ";
        cin >> num;
        if (num > 0) {
            return num;
        } else {
            cout << "Vui long nhap mot so nguyen duong." << endl;
        }
    }
}

int tong_cac_so(int n) {
    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int number = nhap_so_nguyen_duong();
    int ket_qua = tong_cac_so(number);

    cout << "Tong cua cac so tu 1 den " << number << " la: " << ket_qua << endl;

    return 0;
}