// chương trình tính giá gói cươc
#include <iostream>
using namespace std;

int main()
{
    double startingTime;
    int callMinutes;

    // Nhập thời gian bắt đầu và số phút cuộc gọi
    cout << "Nhap thoi gian bat dau cuoc goi (theo dinh dang HH.MM): ";
    cin >> startingTime;
    cout << "Nhap so phut cuoc goi: ";
    cin >> callMinutes;

    // Kiểm tra tính hợp lệ của thời gian và số phút
    if (startingTime < 0.0 || startingTime >= 24.0 || callMinutes < 0)
    {
        cout << "Thoi gian hoac so phut khong hop le. Vui long nhap lai." << endl;
        return 1;
    }

    // Xác định khoảng thời gian cuộc gọi
    double ratePerMinute;
    if (startingTime >= 0.0 && startingTime < 7.0)
    {
        ratePerMinute = 0.05;
    }
    else if (startingTime >= 7.0 && startingTime <= 19.0)
    {
        ratePerMinute = 0.45;
    }
    else
    {
        ratePerMinute = 0.20;
    }

    // Tính giá cước
    double totalCharge = ratePerMinute * callMinutes;

    // Hiển thị giá cước
    cout << "Gia cuoc cua cuoc goi la: $" << totalCharge << endl;

    return 0;
}