#include <iostream>
#include <iomanip>
using namespace std;

double tinh_phi_hoi_vien_du_kien(double phi_hien_tai, double ty_le_tang_hang_nam, int nam) {
    for (int i = 1; i <= nam; i++) {
        phi_hien_tai += phi_hien_tai * ty_le_tang_hang_nam;
    }
    return phi_hien_tai;
}

void hien_thi_phi_hoi_vien_du_kien(double phi_hien_tai, double ty_le_tang_hang_nam, int nam) {
    cout << "Nam\tPhi Du Kien (USD)" << endl;
    cout << "-----------------------" << endl;
    for (int i = 1; i <= nam; i++) {
        phi_hien_tai += phi_hien_tai * ty_le_tang_hang_nam;
        cout << i << "\t" << fixed << setprecision(2) << phi_hien_tai << endl;
    }
}

int main() {
    double phi_hien_tai = 2500.0;  // Phi hội viên hiện tại trong đô la
    double ty_le_tang_hang_nam = 0.04;  // Tỷ lệ tăng 4% mỗi năm
    int nam = 6;

    hien_thi_phi_hoi_vien_du_kien(phi_hien_tai, ty_le_tang_hang_nam, nam);

    return 0;
}