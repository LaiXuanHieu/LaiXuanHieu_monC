// BT13: Movie Statistics
#include <iostream>
using namespace std;

void sortArray(int *arr, int size);
double median(int *arr, int size);
int mode(int *arr, int size);

int main()
{
    int numStudent;
    int *amount = nullptr;
    double avg, total;

    // Nhap so sinh vien duoc khao sat
    cout << "Enter the number of students were surveyd: ";
    cin >> numStudent;
    while (numStudent < 0)
    {
        cout << "Please enter again: ";
        cin >> numStudent;
    }

    amount = new int(numStudent);       // Cap phat dong 

    // Nhap so phim moi hoc sinh xem duoc
    for (int i = 0; i < numStudent; i++)
    {
        cout << "Enter the number of movie that student#" << (i + 1) << " saw: ";
        cin >> *(amount + i);
        total += *(amount + i);
        
        while (amount[i] < 0)           // Neu gia tri am, yeu cau nhap lai
        {
            cout << "Please enter again: ";
            cin >> *(amount + i);
        }
    }

    // Sap xep mang theo thu tu tang dan
    sortArray(amount, numStudent);

    // Tinh gia tri trung binh va xuat ket qua
    avg = total / numStudent;
    cout << "The average of the values entered is " << avg << endl;

    // Tinh trung vi va xuat ket qua
    cout << "The median of the values entered is " << median(amount, numStudent) << endl;

    // Tinh mode va xuat ket qua
    cout << "The mode of the values entered is " << mode(amount, numStudent) << endl;

    // Giai phong vung nho con tro
    delete [] amount;
    amount = nullptr;
    return 0;
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