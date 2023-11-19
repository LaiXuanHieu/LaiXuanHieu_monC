// BT9: Median Function
#include <iostream>
using namespace std;

// Function prototype
int *dynaAllo(int n);
void sortArray(int *arr, int size);
double median(int *arr, int size);

int main()
{
    int *arr = nullptr, number;

    cout << "Enter the number of elements in the array: ";
    cin >> number;              // Nhap so luong phan tu mang
    arr = dynaAllo(number);     // Cap phat dong va nhap cac phan tu mang
    
    sortArray(arr, number); // Sap xep cac phan tu theo thu tu tang dan

    // Tim trung vi va xuat ra ket qua
    cout << "The median is " << median(arr, number);

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
        cin >> arr[i];
    }
    return arr;
}

void sortArray(int *arr, int size)
{
    int i, minIndex, minElem;

    for (i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        minElem = arr[i];
        for(int j = i + 1; j < size; j++)
        {
            if ((arr[j]) < minElem)
            {
                minElem = arr[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        arr[i] = minElem;
    }
}

double median(int *arr, int size)
{
    double med;
    int index = size / 2;

    if (size % 2 != 0)              // Truong hop kich thuoc mang la so le
    {
        med = *(arr + index);
    }
    else                            // Truong hop kich thuoc mang la so chan
    {
        double pos1 = *(arr + index - 1),
               pos2 = *(arr + index);
        med = (pos1 + pos2) / 2 ;
    }

    return med;    
}