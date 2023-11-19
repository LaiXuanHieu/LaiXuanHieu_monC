// chuong trinh tinh luong mua trung
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string thang1, thang2, thang3;
    double mua1, mua2, mua3;

    // Nhập cho tháng thứ nhất
    cout << "Nhap ten cua thang thu nhat: ";
    cin >> thang1;
    cout << "Nhap luong mua (tinh bang inch) cua thang " << thang1 << ": ";
    cin >> mua1;

    // Nhập cho tháng thứ hai
    cout << "Nhap ten cua thang thu hai: ";
    cin >> thang2;
    cout << "Nhap luong mua (tinh bang inch) cua thang " << thang2 << ": ";
    cin >> mua2;

    // Nhập cho tháng thứ ba
    cout << "Nhap ten cua thang thu ba: ";
    cin >> thang3;
    cout << "Nhap luong mua (tinh bang inch) cua thang " << thang3 << ": ";
    cin >> mua3;

    // Tính toán lượng mua trung bình
    double muaTrungBinh = (mua1 + mua2 + mua3) / 3.0;

    // Hiển thị kết quả
    cout << "Luong mua trung binh cho " << thang1 << ", " << thang2 << ", va " << thang3 << " la " << muaTrungBinh << " inch." << endl;

    return 0;
}