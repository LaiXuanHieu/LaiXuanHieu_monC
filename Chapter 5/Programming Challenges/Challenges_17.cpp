#include <iostream>
using namespace std;

int main() {
    int doanh_so[5];

    // Nhập dữ liệu doanh số
    for (int i = 0; i < 5; i++) {
        cout << "Nhập doanh số hôm nay của cửa hàng " << i + 1 << ": ";
        cin >> doanh_so[i];
    }

    // Hiển thị biểu đồ cột
    cout << "BIỂU ĐỒ CỘT DOANH SỐ" << endl;
    cout << "(Mỗi * tương đương $100)" << endl;

    for (int i = 0; i < 5; i++) {
        cout << "Cửa hàng " << i + 1 << ": ";
        for (int j = 0; j < doanh_so[i] / 100; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}