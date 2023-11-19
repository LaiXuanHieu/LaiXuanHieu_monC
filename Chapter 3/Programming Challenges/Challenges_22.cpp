#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double angle, sinValue, cosValue, tanValue;

    // Nhập góc từ người dùng
    cout << "Nhap goc (radians): ";
    cin >> angle;

    // Tính giá trị sin, cos, và tan
    sinValue = sin(angle);
    cosValue = cos(angle);
    tanValue = tan(angle);

    // Hiển thị kết quả với độ chính xác 4 chữ số thập phân
    cout << fixed << setprecision(4);
    cout << "Sin(" << angle << ") = " << sinValue << endl;
    cout << "Cos(" << angle << ") = " << cosValue << endl;
    cout << "Tan(" << angle << ") = " << tanValue << endl;

    return 0;
}