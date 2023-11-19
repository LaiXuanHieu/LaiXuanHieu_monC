// BT11: Array Expander
#include <iostream>
using namespace std;

int *expander(int *arr, int size);

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

    // Xuat ket qua cua mang mo rong
    newArr = expander(arr, num);
    cout << "The expandered array: ";
    for (int i = 0; i < num * 2; i++)
        cout << newArr[i] << " ";

    // Giai phong vung nho con tro
    delete [] arr;
    delete [] newArr;
    arr = nullptr;
    newArr = nullptr;

    return 0;
}

int *expander(int *arr, int size)
{
    int *newArr = nullptr;
    newArr = new int(size * 2);

    newArr = arr;   // Sao chep lai gia tri
    for (int i = (size * 2) - 1; i >= size; i--)    // Voi gia tri o vi tri mo rong gan bang 0
    {
        newArr[i] = 0;
    }

    return newArr;
}