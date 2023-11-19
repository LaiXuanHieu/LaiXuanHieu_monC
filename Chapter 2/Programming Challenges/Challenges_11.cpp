// chương trình khoảng cách xe có thể di được
#include <iostream>
using namespace std;

int main()
{
    // Số gallon xăng trong bình
    double gallonsInTank = 20.0;

    // Số dặm trung bình trên mỗi gallon khi lái trong thành phố
    double cityMilesPerGallon = 23.5;

    // Số dặm trung bình trên mỗi gallon khi lái trên xa lộ
    double highwayMilesPerGallon = 28.9;

    // Tính khoảng cách khi lái trong thành phố
    double cityDistance = gallonsInTank * cityMilesPerGallon;

    // Tính khoảng cách khi lái trên xa lộ
    double highwayDistance = gallonsInTank * highwayMilesPerGallon;

    // Hiển thị kết quả
    cout << "Khoang cach khi lai trong thanh pho: " << cityDistance << " miles." << endl;
    cout << "Khoang cach khi lai tren xa lo: " << highwayDistance << " miles." << endl;

    return 0;
}