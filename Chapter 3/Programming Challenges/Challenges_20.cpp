#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    const double SLICE_AREA = 14.125;

    double diameter, radius, pizzaArea, numSlices;

    // Nhập đường kính của pizza
    cout << "Nhap vao duong kinh cua pizza (inches): ";
    cin >> diameter;

    // Tính bán kính của pizza
    radius = diameter / 2.0;

    // Tính diện tích của pizza
    pizzaArea = PI * pow(radius, 2);

    // Tính số lát pizza có thể chia
    numSlices = pizzaArea / SLICE_AREA;

    // Hiển thị số lát pizza
    cout << fixed << setprecision(1);
    cout << "So luong lat pizza co the chia: " << numSlices << endl;

    return 0;
}