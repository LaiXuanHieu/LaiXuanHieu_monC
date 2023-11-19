#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int SO_NGUOI = 3;
    const int SO_NGAY = 5;

    // Mảng hai chiều lưu trữ số pound thức ăn mỗi ngày của các con khỉ
    double luongThucAn[SO_NGUOI][SO_NGAY] = {0};

    // Nhập số pound thức ăn mỗi ngày của từng con khỉ với kiểm tra dữ liệu đầu vào
    for (int i = 0; i < SO_NGUOI; ++i) {
        for (int j = 0; j < SO_NGAY; ++j) {
            do {
                cout << "Nhập số pound thức ăn của con khỉ " << i + 1 << " vào ngày " << j + 1 << ": ";
                cin >> luongThucAn[i][j];
                // Kiểm tra dữ liệu đầu vào: Không chấp nhận số âm
                if (luongThucAn[i][j] < 0) {
                    cout << "Dữ liệu không hợp lệ. Xin vui lòng nhập số không âm.\n";
                }
            } while (luongThucAn[i][j] < 0);
        }
    }

    // Tính trung bình, lớn nhất và nhỏ nhất lượng thức ăn được ăn
    double tongThucAn = 0;
    double itNhatThucAn = luongThucAn[0][0];
    double nhieuNhatThucAn = luongThucAn[0][0];

    for (int i = 0; i < SO_NGUOI; ++i) {
        for (int j = 0; j < SO_NGAY; ++j) {
            tongThucAn += luongThucAn[i][j];
            if (luongThucAn[i][j] < itNhatThucAn) {
                itNhatThucAn = luongThucAn[i][j];
            }
            if (luongThucAn[i][j] > nhieuNhatThucAn) {
                nhieuNhatThucAn = luongThucAn[i][j];
            }
        }
    }

    // Tính lượng trung bình thức ăn mỗi ngày cho cả gia đình con khỉ
    double trungBinhThucAnMoiNgay = tongThucAn / (SO_NGUOI * SO_NGAY);

    // Hiển thị báo cáo
    cout << fixed << setprecision(2);
    cout << "Lượng thức ăn trung bình mỗi ngày cho cả gia đình con khỉ: " << trungBinhThucAnMoiNgay << " pounds\n";
    cout << "Lượng thức ăn ít nhất trong tuần của một con khỉ: " << itNhatThucAn << " pounds\n";
    cout << "Lượng thức ăn nhiều nhất trong tuần của một con khỉ: " << nhieuNhatThucAn << " pounds\n";

    return 0;
}