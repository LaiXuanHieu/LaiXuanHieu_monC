//chương trình tính BMA của cơ thể
#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;

    // Nhập cân nặng (pounds) và chiều cao (inches) của người dùng
    cout << "Nhap can nang (pounds): ";
    cin >> weight;
    cout << "Nhap chieu cao (inches): ";
    cin >> height;

    // Tính chỉ số khối cơ thể (BMI) dựa trên công thức
    bmi = (weight * 703) / (height * height);

    // Hiển thị chỉ số BMI và đánh giá
    cout << "Chu so Khoi co the (BMI) cua ban la: " << bmi << endl;

    if (bmi < 18.5)
    {
        cout << "Ban bi thieu can (underweight)." << endl;
    }
    else if (bmi >= 18.5 && bmi <= 25)
    {
        cout << "Ban co can nang ly tuong (optimal weight)." << endl;
    }
    else
    {
        cout << "Ban bi thua can (overweight)." << endl;
    }

    return 0;
}