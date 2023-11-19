// chương trình hiển thị mực nước biển qua các năm
#include <iostream>
using namespace std;

int main()
{
    // Tốc độ tăng mực nước biển (mm/năm)
    double oceanRiseRate = 1.5;

    // Số năm trong tương lai
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Tính tăng cao trong tương lai
    double rise5 = oceanRiseRate * years5;
    double rise7 = oceanRiseRate * years7;
    double rise10 = oceanRiseRate * years10;

    // Hiển thị kết quả
    cout << "Sau " << years5 << " nam, muc nuoc bien se cao hon " << rise5 << " mm." << endl;
    cout << "Sau " << years7 << " nam, muc nuoc bien se cao hon " << rise7 << " mm." << endl;
    cout << "Sau " << years10 << " nam, muc nuoc bien se cao hon " << rise10 << " mm." << endl;

    return 0;
}