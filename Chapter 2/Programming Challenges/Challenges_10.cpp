// chương trình tính số dặm mà xe có thể đi dược trong 1 gallon
#include <iostream>
using namespace std;

int main()
{
    // Số dặm mà chiếc xe có thể đi
    double milesDriven = 375.0;

    // Số gallon xăng mà chiếc xe sử dụng
    double gallonsOfGasUsed = 15.0;

    // Tính MPG
    double mpg = milesDriven / gallonsOfGasUsed;

    // Hiển thị kết quả
    cout << "Miles Per Gallon (MPG): " << mpg << endl;

    return 0;
}