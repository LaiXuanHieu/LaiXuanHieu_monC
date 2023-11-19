//chương trình tính hóa đơn một bửa tại nhà hàng
#include <iostream>
using namespace std;

int main()
{
    // Constants (Hằng số)
    const double mealCharge = 88.67; // Tổng số tiền hóa đơn
    const double taxRate = 0.0675;   // Thuế (6.75%)
    const double tipRate = 0.20;     // Tiền boa (20%)

    // Calculate tax and tip (Tính thuế và tiền boa)
    double taxAmount = mealCharge * taxRate;               // Số tiền thuế
    double tipAmount = (mealCharge + taxAmount) * tipRate; // Số tiền boa

    // Calculate total bill (Tính tổng tiền)
    double totalBill = mealCharge + taxAmount + tipAmount; // Tổng tiền hóa đơn

    // Display the results (Hiển thị kết quả)
    cout << "Meal Charge: $" << mealCharge << endl; // Số tiền hóa đơn
    cout << "Tax Amount: $" << taxAmount << endl;   // Số tiền thuế
    cout << "Tip Amount: $" << tipAmount << endl;   // Số tiền boa
    cout << "Total Bill: $" << totalBill << endl;   // Tổng tiền hóa đơn

    return 0;
}