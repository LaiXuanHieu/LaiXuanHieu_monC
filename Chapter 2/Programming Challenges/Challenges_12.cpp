// chương trình tính đất
#include <iostream>
using namespace std;

int main()
{
    // Diện tích của lô đất trong square feet
    double squareFeet = 391876.0;

    // Tỷ lệ: 1 acre = 43,560 square feet
    double acresPerSquareFeet = 1.0 / 43560.0;

    // Tính số acre
    double acres = squareFeet * acresPerSquareFeet;

    // Hiển thị kết quả
    cout << "So acre trong lot dat: " << acres << " acres." << endl;

    return 0;
}