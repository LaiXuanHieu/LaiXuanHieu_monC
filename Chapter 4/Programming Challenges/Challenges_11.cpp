//chuong trinh tinh toan co ban
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // Khởi tạo bộ sinh so ngau nhien
    srand(time(0));

    // Sinh ra hai so ngau nhien trong khoang tu 1 den 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    // Tinh toan ket qua dung
    int ketQuaDung = num1 + num2;

    // Hien thi bai toan
    cout << num1 << " + " << num2 << " = ?" << endl;

    // Lay cau tra loi cua hoc sinh
    int cauTraLoi;
    cout << "Nhap cau tra loi cua ban: ";
    cin >> cauTraLoi;

    // Kiem tra neu cau tra loi la dung
    if (cauTraLoi == ketQuaDung)
    {
        cout << "Chuc mung! Do la cau tra loi dung." << endl;
    }
    else
    {
        cout << "Xin loi, cau tra loi dung la " << ketQuaDung << "." << endl;
    }

    return 0;
}