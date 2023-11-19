// chương trình so sánh 2 diện tích của 2 hình chử nhật
#include <iostream>
using namespace std;

int main()
{
    double length1, width1, area1;
    double length2, width2, area2;

    // Yêu cầu người dùng nhập chiều dài và chiều rộng của hình chữ nhật thứ nhất
    cout << "Nhap chieu dai cua hinh chu nhat thu nhat: ";
    cin >> length1;
    cout << "Nhap chieu rong cua hinh chu nhat thu nhat: ";
    cin >> width1;

    // Tính diện tích của hình chữ nhật thứ nhất
    area1 = length1 * width1;

    // Yêu cầu người dùng nhập chiều dài và chiều rộng của hình chữ nhật thứ hai
    cout << "Nhap chieu dai cua hinh chu nhat thu hai: ";
    cin >> length2;
    cout << "Nhap chieu rong cua hinh chu nhat thu hai: ";
    cin >> width2;

    // Tính diện tích của hình chữ nhật thứ hai
    area2 = length2 * width2;

    // So sánh diện tích và hiển thị kết quả
    if (area1 > area2)
    {
        cout << "Hinh chu nhat thu nhat co dien tich lon hon." << endl;
    }
    else if (area2 > area1)
    {
        cout << "Hinh chu nhat thu hai co dien tich lon hon." << endl;
    }
    else
    {
        cout << "Ca hai hinh chu nhat co dien tich bang nhau." << endl;
    }

    return 0;
}