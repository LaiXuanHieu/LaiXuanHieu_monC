// BT12: Element Shifter
#include <iostream>
using namespace std;

int *shifter(int *arr, int size);

int main()
{
    int *arr = nullptr, num, *newArr = nullptr;
     
    cout << "Enter the array's size: ";     // Nhap so phan tu mang
    cin >> num;

    arr = new int(num);     // Cap phat dong

    // Nhap gia tri phan tu cua mang
    for (int i = 0; i < num; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> *(arr + i);
    }

    // Xuat mang dich chuyen ra man hinh
    newArr = shifter(arr, num);
    cout << "The new array is ";
    for (int i = 0; i <= num; i++)
    {
        cout << newArr[i] << " ";
    }
    return 0;
}

int *shifter(int *arr, int size)
{
    int *newArr = nullptr;
    newArr = new int(size + 1);
    newArr[0] = 0;      // Gan phan tu dau tien bang 0
    for (int i = 1; i <= size; i++)
    {
        newArr[i] = arr[i - 1];     // Sao chep cac phan tu cua mang arr vao vi tri con lai
    }

    return newArr;
}