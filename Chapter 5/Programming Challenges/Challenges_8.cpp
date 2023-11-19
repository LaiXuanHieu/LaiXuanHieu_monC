#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void hien_thi_menu() {
    cout << "Menu Học Toán\n";
    cout << "1. Cộng\n";
    cout << "2. Trừ\n";
    cout << "3. Nhân\n";
    cout << "4. Chia\n";
    cout << "5. Thoát\n";
    cout << "Nhập lựa chọn của bạn (1-5): ";
}

int lay_lua_chon_cua_nguoi_dung() {
    int lua_chon;
    cin >> lua_chon;
    return lua_chon;
}

int tao_so_ngau_nhien(int lower, int upper) {
    return rand() % (upper - lower + 1) + lower;
}

int main() {
    srand(time(0));

    int lua_chon;
    do {
        hien_thi_menu();
        lua_chon = lay_lua_chon_cua_nguoi_dung();

        if (lua_chon >= 1 && lua_chon <= 4) {
            int so1 = tao_so_ngau_nhien(10, 99);
            int so2 = tao_so_ngau_nhien(10, 99);

            switch (lua_chon) {
                case 1:
                    cout << so1 << " + " << so2 << " = ";
                    cout << so1 + so2 << endl;
                    break;
                case 2:
                    cout << so1 << " - " << so2 << " = ";
                    cout << so1 - so2 << endl;
                    break;
                case 3:
                    cout << so1 << " * " << so2 << " = ";
                    cout << so1 * so2 << endl;
                    break;
                case 4:
                    cout << so1 << " / " << so2 << " = ";
                    cout << static_cast<double>(so1) / so2 << endl;
                    break;
            }
        } else if (lua_chon != 5) {
            cout << "Lựa chọn không hợp lệ. Vui lòng thử lại.\n";
        }

    } while (lua_chon != 5);

    return 0;
}