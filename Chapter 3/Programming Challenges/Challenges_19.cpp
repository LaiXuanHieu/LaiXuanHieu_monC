#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double loanAmount, annualInterestRate, monthlyInterestRate, monthlyPayment;
    int numberOfPayments;

    // Nhập số tiền vay, lãi suất hàng năm và số lần trả trong năm
    cout << "Nhap so tien vay (USD): ";
    cin >> loanAmount;
    cout << "Nhap lai suat hang nam (duoi dang phan tram): ";
    cin >> annualInterestRate;
    cout << "Nhap so lan tra trong nam: ";
    cin >> numberOfPayments;

    // Chuyen lai suat hang nam sang lai suat hang thang
    monthlyInterestRate = annualInterestRate / (12 * 100);

    // Tinh so tien tra hang thang
    monthlyPayment = loanAmount * monthlyInterestRate / (1 - 1 / pow(1 + monthlyInterestRate, numberOfPayments));

    // Tinh so tien tra trong suot thoi gian vay
    double amountPaidBack = monthlyPayment * numberOfPayments;

    // Tinh so tien lai tra
    double interestPaid = amountPaidBack - loanAmount;

    // Hien thi bao cao
    cout << fixed << setprecision(2);
    cout << "So tien vay: $" << loanAmount << endl;
    cout << "Lai suat hang thang: " << (monthlyInterestRate * 100) << "%" << endl;
    cout << "So lan tra: " << numberOfPayments << endl;
    cout << "So tien tra hang thang: $" << monthlyPayment << endl;
    cout << "So tien tra trong suot thoi gian vay: $" << amountPaidBack << endl;
    cout << "So tien lai tra: $" << interestPaid << endl;

    return 0;
}