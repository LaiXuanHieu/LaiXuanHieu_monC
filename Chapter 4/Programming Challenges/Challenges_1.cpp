/// chương trình tìm min và max
#include <iostream>

using namespace std;

int main()
{
    // khởi tạo 2 giá trị
    int num1, num2;
    cout << "Enter the num1 : ";
    cin >> num1;
    cout << "Enter the num2 : ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << "Num1 is greater than num2";
    }
    else if (num1 < num2)
    {
        cout << "Num2 is greater than num1";
    }
    else
    {
        cout << "The two number is equal ";
    }
    return 0;
}