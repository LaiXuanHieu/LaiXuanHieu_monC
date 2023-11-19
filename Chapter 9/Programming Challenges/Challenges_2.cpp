// BT2: Test Scores #1
#include <iostream>
#include <iomanip>
using namespace std;

double *dynaAllo(int n);
void sortArray(double *a, int num);
double getAverage(double *a, int num);

int main()
{
    double *score = nullptr,   // Khoi tao bien con tro
        number;
    double avg;
    
    
    // Nhap so bai kiem tra
    cout << "Enter the number of test scores: ";
    cin >> number;
    
    // Cap phat bo nho dong
    score = dynaAllo(number);
    
    // Sap xep bang diem
    cout << "The sorted list of scores: ";
    sortArray(score, number);
    for (int i = 0; i < number; i++)
        cout << score[i] << " ";

    // Tinh trung binh cong va xuat ket qua
    avg = getAverage(score, number);
    cout << setprecision(2) << fixed << "\nThe average is " << avg;

    // Giai phong vung nho con tro
    delete [] score;
    score = 0;
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
        cout << "Score #" << (i + 1) << ": ";
        cin >> arr[i];
        while (arr[i] < 0)
        {
            cout << "Please enter again: ";
            cin >> arr[i];
        }
    }
    return arr;
}

void sortArray(double *arr, int size)
{
    int i, minIndex;
    double minElem;

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

double getAverage(double *arr, int size)
{
    double sum = 0, avg;
    
    // Tinh tong diem
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    avg = sum / size;    // Tinh diem trung binh
    return avg;
}