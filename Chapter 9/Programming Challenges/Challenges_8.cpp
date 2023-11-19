// BT8: Mode Function
#include <iostream>
using namespace std;

int *dynaAllo(int n);
int mode(int *arr, int size);

int main()
{
    int *arr = nullptr, number;

    cout << "Enter the number of elements in the array: ";
    cin >> number;
    arr = dynaAllo(number);     // Cap phat dong va nhap cac phan tu cua mang

    cout << "The value in the array occurs most often is " << mode(arr, number);    // Xuat phan tu xuat hien nhieu nhat

    // Giai phong vung nho con tro
    delete [] arr;
    arr = nullptr;
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
        cin >> *(arr + i);
        while (arr[i] < 0)
        {
            cout << "Do not accept negative value. Enter again: ";
            cin >> *(arr + i);
        }
    }
    return arr;
}

int mode(int *arr, int size)
{
    int max = 1, frequency;

    for (int i = 0; i < size; i++)
    {
        int temp = *(arr + i);          
        int count = 1;

        for (int j = i + 1; j < size; j++)
        {
            if (temp == *(arr + j))         // Neu phan tu arr[i] xuat hien nhieu hon 1 lan,
                count++;                    // bien dem se tang them 1
        }

        if (count > max)
        {
            max = temp;
            frequency = *(arr + i);
        }
    }

    if (max == 1)
        frequency = -1;     // Neu cac gia tri chi xuat hien 1 lan thi tra ve -1
    return frequency;
}