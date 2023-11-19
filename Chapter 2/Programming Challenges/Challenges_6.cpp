// chương trình tính thu nhập của nhân viên 1 năm
#include <iostream>
using namespace std;

int main()
{
    // Khai báo và khởi tạo biến cho lương từng kỳ và số kỳ lương trong năm
    double payAmount = 2200.0; // Lương từng kỳ
    int payPeriods = 26;       // Số kỳ lương trong năm

    // Tính tổng thu nhập hàng năm
    double annualPay = payAmount * payPeriods;

    // Hiển thị tổng thu nhập hàng năm
    cout << "Tong thu nhap hang nam cua nhan vien la: $" << annualPay << endl;

    return 0;
}