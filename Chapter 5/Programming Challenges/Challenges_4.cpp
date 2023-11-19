#include <iostream>
using namespace std;

double tinh_calo_da_dot_chay(int phut) {
    double calo_mot_phut = 3.6;
    return calo_mot_phut * phut;
}

void hien_thi_calo_da_dot_chay() {
    int danh_sach_phut[] = {5, 10, 15, 20, 25, 30};
    cout << "Phut\tCalo Da Dot Chay" << endl;
    cout << "----------------------" << endl;
    for (int phut : danh_sach_phut) {
        double calo = tinh_calo_da_dot_chay(phut);
        cout << phut << "\t" << calo << endl;
    }
}

int main() {
    hien_thi_calo_da_dot_chay();
    return 0;
}