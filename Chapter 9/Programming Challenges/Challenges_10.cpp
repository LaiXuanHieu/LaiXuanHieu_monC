// BT10: Reverse Array
#include <iostream>
using namespace std;

int *reverse(int *arr, int size);

int main()
{
    int num, *arr = nullptr, *newArr = nullptr;
    
    cout << "Enter the array's size: ";     // Nhap so phan tu mang
    cin >> num;

    arr = new int(num);     // Cap phat dong

    // Nhap gia tri phan tu cua mang
    for (int i = 0; i < num; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> *(arr + i);
    }

    // Xuat mang ban dau
    cout << "The original array: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    // Xuat mang sau khi dao nguoc
    cout << "\nThe reverse array: ";
    newArr = reverse(arr, num);
    for (int i = 0; i < num; i++)
    {
        cout << newArr[i] << " ";
    }

    // Giai phong vung nho con tro
    delete [] arr;
    arr = nullptr;
    delete [] newArr;
    newArr = nullptr;

    return 0;
}

int *reverse(int *arr, int size)
{
    int *newArr = nullptr;

    newArr = new int(size);

    for (int i = 0; i < size; i++)
    {
        newArr[size - i - 1] = arr[i];
    }

    return newArr;
}