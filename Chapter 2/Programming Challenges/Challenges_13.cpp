// chương trình tính giá bán một vi mạch
#include <iostream>
using namespace std;

int main()
{
    // Giá thành của bo mạch vi mạch
    double costPrice = 14.95;

    // Lợi nhuận (35%)
    double profitPercentage = 35.0;

    // Tính giá bán
    double sellingPrice = costPrice + (costPrice * (profitPercentage / 100));

    // Hiển thị giá bán
    cout << "Gia ban cua bo mach vi mach: $" << sellingPrice << endl;

    return 0;
}