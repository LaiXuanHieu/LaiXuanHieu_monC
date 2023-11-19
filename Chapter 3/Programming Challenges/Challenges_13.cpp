// chương trình thực hiện chuyển đổi tiền tệ
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    double dollars, yen, euros;

    //nhập số dollar cần quy đổi 
    cout << "Enter the amount in U.S. dollars: $";
    cin >> dollars;

    // chuyển đổi sang yên và euro
    yen = dollars * YEN_PER_DOLLAR;
    euros = dollars * EUROS_PER_DOLLAR;

    //hiển thị ra màn hình
    cout << fixed << setprecision(2);
    cout << "Equivalent amount in Japanese Yen: " << yen << " Yen" << endl;
    cout << "Equivalent amount in Euros: " << euros << " Euros" << endl;

    return 0;
}