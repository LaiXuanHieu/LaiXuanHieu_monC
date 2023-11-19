// chương trình tính tổng số tiền mua
#include <iostream>
using namespace std;

int main()
{
    // Giá của từng mặt hàng
    double price1 = 15.95;
    double price2 = 24.95;
    double price3 = 6.95;
    double price4 = 12.95;
    double price5 = 3.95;

    // Tỷ lệ thuế
    double taxRate = 0.07;

    // Tính tổng tiền hàng
    double subtotal = price1 + price2 + price3 + price4 + price5;

    // Tính số tiền thuế
    double salesTax = subtotal * taxRate;

    // Tính tổng cộng
    double total = subtotal + salesTax;

    // Hiển thị giá từng mặt hàng
    cout << "Gia cua mat hang 1: $" << price1 << endl;
    cout << "Gia cua mat hang 2: $" << price2 << endl;
    cout << "Gia cua mat hang 3: $" << price3 << endl;
    cout << "Gia cua mat hang 4: $" << price4 << endl;
    cout << "Gia cua mat hang 5: $" << price5 << endl;

    // Hiển thị tổng tiền hàng, số tiền thuế, và tổng cộng
    cout << "Tong tien hang: $" << subtotal << endl;
    cout << "So tien thue: $" << salesTax << endl;
    cout << "Tong cung: $" << total << endl;

    return 0;
}