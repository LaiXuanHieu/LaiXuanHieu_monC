#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Giá vé cho từng loại ghế
    const double classA_price = 15.0;
    const double classB_price = 12.0;
    const double classC_price = 9.0;

    int classA_tickets, classB_tickets, classC_tickets;

    // Nhập số lượng vé từng loại ghế đã bán
    cout << "Nhap so luong ve loai A da ban: ";
    cin >> classA_tickets;

    cout << "Nhap so luong ve loai B da ban: ";
    cin >> classB_tickets;

    cout << "Nhap so luong ve loai C da ban: ";
    cin >> classC_tickets;

    // Tính tổng doanh thu
    double totalRevenue = (classA_tickets * classA_price) + (classB_tickets * classB_price) + (classC_tickets * classC_price);

    // Hiển thị doanh thu với định dạng tiền tệ
    cout << fixed << setprecision(2); // Hiển thị số thập phân với 2 chữ số sau dấu phẩy
    cout << "Tong doanh thu tu viec ban ve: $" << totalRevenue << endl;

    return 0;
}