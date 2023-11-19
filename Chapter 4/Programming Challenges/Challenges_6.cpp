#include <iostream>
using namespace std;

int main()
{
    double mass, weight;

    // Nhập khối lượng của đối tượng (kilograms)
    cout << "Nhap khoi luong cua doi tuong (kilograms): ";
    cin >> mass;

    // Tính trọng lượng (newtons) dựa trên công thức
    weight = mass * 9.8;

    // Hiển thị trọng lượng và kiểm tra trạng thái (quá nặng hoặc quá nhẹ)
    cout << "Trong luong cua doi tuong la: " << weight << " newtons" << endl;

    if (weight > 1000)
    {
        cout << "Doi tuong qua nang." << endl;
    }
    else if (weight < 10)
    {
        cout << "Doi tuong qua nhe." << endl;
    }

    return 0;
}