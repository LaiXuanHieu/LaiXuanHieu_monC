#include <iostream>
#include <cmath>
using namespace std;

// Hàm tính giá trị hiện tại (present value)
double presentValue(double futureValue, double annualInterestRate, int years)
{
    double r = annualInterestRate / 100; // Chuyen ty le lai suat tu phan tram thanh so thap phan
    return futureValue / pow(1 + r, years);
}

int main()
{
    double futureValue, annualInterestRate;
    int years;

    cout << "Nhap gia tri tuong lai (F): ";
    cin >> futureValue;
    cout << "Nhap ty le lai suat hang nam (duoi dang phan tram): ";
    cin >> annualInterestRate;
    cout << "Nhap so nam (n): ";
    cin >> years;

    double presentVal = presentValue(futureValue, annualInterestRate, years);

    cout << "So tien ban can gui vao tai khoan ngay hom nay (P) la: $" << presentVal << endl;

    return 0;
}
