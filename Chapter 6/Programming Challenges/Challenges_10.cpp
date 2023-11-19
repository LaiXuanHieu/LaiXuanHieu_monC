//chương trình tính giá trị của tài khoản ngân hàng
#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính giá trị tương lai (future value)
double futureValue(double presentValue, double monthlyInterestRate, int months)
{
    return presentValue * pow(1 + monthlyInterestRate, months);
}

int main()
{
    double presentValue, monthlyInterestRate;
    int months;

    cout << "Nhap gia tri hien tai (P): $";
    cin >> presentValue;
    cout << "Nhap ty le lai suat hang thang (duoi dang phan tram): ";
    cin >> monthlyInterestRate;
    monthlyInterestRate /= 100; // Chuyển tỷ lệ lãi suất hàng thang từ phần trăm sang số thập phân
    cout << "Nhap so thang (t): ";
    cin >> months;

    double futureVal = futureValue(presentValue, monthlyInterestRate, months);

    cout << "Sau " << months << " thang, gia tri tuong lai cua tai khoan la: $" << futureVal << endl;

    return 0;
}
