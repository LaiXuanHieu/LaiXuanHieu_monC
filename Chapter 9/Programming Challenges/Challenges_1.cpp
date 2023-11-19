// BT1: Array Allocator
#include <iostream>
using namespace std;

int *dynaAllo(int n);   // Function prototype

int main()
{
    int *pointer = nullptr, // Khoi tao bien con tro 
         num;

    // Nhap so phan tu
    cout << "Enter the number of elements: ";
    cin >> num;

    // Cap phat dong
    pointer = dynaAllo(num);

    // In mang ra man hinh
    for (int i = 0; i < num; i++)
        cout << pointer[i] << " ";    

    // Giai phong vung nho con tro
    delete [] pointer;
    pointer = 0;
    return 0;
}

int *dynaAllo(int n)
{
    int *arr = nullptr;      // Khoi tao mang 

    if (n <= 0)
        return nullptr;
    
    arr = new int[n];   // Cap phat bo nho dong cho mang

    // Nhap phan tu mang
    for (int i = 0; i < n; i++)
    {
        cout << "A[" << i << "] = ";
        cin >> arr[i];
    }
    return arr;
}