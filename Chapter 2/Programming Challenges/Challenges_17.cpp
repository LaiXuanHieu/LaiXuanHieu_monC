#include <iostream>
using namespace std;

int main()
{
    int shares = 750;
    double sharePrice = 35.00;
    double commissionRate = 0.02;

    // Tính giá trị của cổ phiếu mà không tính hoa hồng
    double stockCost = shares * sharePrice;

    // Tính số tiền hoa hồng
    double commission = stockCost * commissionRate;

    // Tính tổng số tiền đã trả (cổ phiếu + hoa hồng)
    double totalCost = stockCost + commission;

    // Hiển thị kết quả
    cout << "Amount paid for the stock alone: $" << stockCost << endl;
    cout << "Amount of the commission: $" << commission << endl;
    cout << "Total amount paid (stock + commission): $" << totalCost << endl;

    return 0;
}