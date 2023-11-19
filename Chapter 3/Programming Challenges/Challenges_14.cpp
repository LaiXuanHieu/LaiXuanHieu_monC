#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const double STATE_SALES_TAX_RATE = 0.04;
    const double COUNTY_SALES_TAX_RATE = 0.02;

    string month, year;
    double totalCollected, productSales, countySalesTax, stateSalesTax, totalSalesTax;

    // Nhập tháng và năm
    cout << "Nhap thang: ";
    getline(cin, month);
    cout << "Nhap nam : ";
    getline(cin, year);

    // Nhập tổng số tiền thu về
    cout << "Nhập tổng số tiền thu về: $";
    cin >> totalCollected;

    // Tính số tiền từ bán hàng sản phẩm
    productSales = totalCollected / 1.06;

    // Tính số tiền thuế bán hàng của hạt nhân và quận
    countySalesTax = productSales * COUNTY_SALES_TAX_RATE;
    stateSalesTax = productSales * STATE_SALES_TAX_RATE;

    // Tính tổng số tiền thuế bán hàng
    totalSalesTax = countySalesTax + stateSalesTax;

    // Hiển thị báo cáo
    cout << fixed << setprecision(2);
    cout << "Thang: " << month << endl;
    cout << "--------------------" << endl;
    cout << "Tong so tien thu duoc: $" << totalCollected << endl;
    cout << "Doanh so: $" << productSales << endl;
    cout << "Thue ban hang quan : $" << countySalesTax << endl;
    cout << "Thue tieu bang: $" << stateSalesTax << endl;
    cout << "Tong the ban hang : $" << totalSalesTax << endl;

    return 0;
}