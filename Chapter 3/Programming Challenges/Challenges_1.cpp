#include <iostream>
using namespace std;

int main()
{
    int totalCustomers = 16500;                   // Tổng số khách hàng trong cuộc khảo sát
    double energyDrinkCustomersPercentage = 0.15; // Tỉ lệ khách hàng mua nước uống có ga
    double citrusFlavoredPercentage = 0.58;       // Tỉ lệ khách hàng thích nước uống có ga vị cam

    // Tính số lượng khách hàng mua nước uống có ga và số lượng thích vị cam
    int customersBuyingEnergyDrinks = totalCustomers * energyDrinkCustomersPercentage;
    int customersPreferringCitrusFlavored = customersBuyingEnergyDrinks * citrusFlavoredPercentage;

    // Hiển thị kết quả
    cout << "So luong khach hang trong cuoc khao sat mua it nhat mot lan nuoc uong co ga moi tuan: " << customersBuyingEnergyDrinks << endl;
    cout << "So luong khach hang trong cuoc khao sat thich nuoc uong co ga vi cam: " << customersPreferringCitrusFlavored << endl;

    return 0;
}