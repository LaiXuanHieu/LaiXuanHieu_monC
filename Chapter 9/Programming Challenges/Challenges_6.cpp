// BT6: Case Study Modification #1
// Sua lai Program 9.19 theo yeu cau bai
#include <iostream>
using namespace std;

// Function prototypes
double *dynaAllo(int n);
void arrSelectSort(double *arr, int n);
void showArray(double *arr, int);
void showArrPtr(double *arr, int);

int main()
{
    int numDonations; // So luong nguoi quyen gop
    double *donations = nullptr;

    // Nhap so luong nguoi quyen gop
    cout << "Enter the number of donations: ";
    cin >> numDonations;

    // Cap phat dong bo nho
    donations = dynaAllo(numDonations);
    double *arrPtr = new double[numDonations];

    for (int i = 0; i < numDonations; i++)
    {
        arrPtr[i] = donations[i];
    }

    // Sap xep cac phan tu
    arrSelectSort(donations, numDonations);

    // Hien thi mang sau khi sap xep theo thu tu tang dan
    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(donations, numDonations);

    // Hien thi mang ban dau
    cout << "The donations, in their original order are: \n";
    showArray(arrPtr, numDonations);

    // Xoa vung nho cua con tro
    delete [] donations;
    donations = 0;
    delete [] arrPtr;
    arrPtr = 0;
    return 0;
}

double *dynaAllo(int n)
{
    double *arr = nullptr;      // Khoi tao mang 

    if (n <= 0)
        return nullptr;
    
    arr = new double[n];   // Cap phat bo nho dong cho mang

    // Nhap phan tu mang
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the donation amounts #" << (i + 1) << ": ";
        cin >> arr[i];
    }
    return arr;
}

void arrSelectSort(double *arr, int size)
{
    int startScan, minIndex;
    double minElem;

    for (startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if ((arr[index]) < minElem)
            {
                minElem = arr[index];
                minIndex = index;

            }
        }
        arr[minIndex] = arr[startScan];
        arr[startScan] = minElem;
    }
}

void showArray(double *arr, int size)
{
    for (int count = 0; count < size; count++)
    cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(double *arr, int size)
{
    for (int count = 0; count < size; count++)
    cout << arr[count] << " ";
    cout << endl;
}