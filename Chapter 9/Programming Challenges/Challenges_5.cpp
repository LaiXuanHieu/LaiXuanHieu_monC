// BT5: Pointer Rewrite
#include <iostream>
using namespace std;

int doSomething(int *x, int *y);    // Function prototype

int main()
{
    int a, b, result;

    // Nhap a, b
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    // Su dung ham de tinh toan
    result = doSomething(&a, &b);
    cout << "The result is " << result;     // Xuat ket qua

    return 0;
}

int doSomething(int *x, int *y)
{
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;
    return (*x + *y);
}