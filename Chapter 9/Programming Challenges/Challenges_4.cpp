// BT4: Test Scores #2
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void sortArray(int *arr, string *name, int num);

int main()
{
    int *score = nullptr,   // Khoi tao bien con tro
        number;  
    
    // Nhap so bai kiem tra
    cout << "Enter the number of test scores: ";
    cin >> number;
    while (number <= 0)
    {
        cout << "ERROR! Try again: ";
        cin >> number;
    }
    cin.ignore();
    
    // Cap phat bo nho dong    
    score = new int[number];
    string *name = new string[number];  // Cap phat bo nho dong cho mang

    // Nhap phan tu mang
    for (int i = 0; i < number; i++)
    {
        cout << "Name #" << (i + 1) << ": ";
        getline(cin, name[i]);
        cout << "Score: ";
        cin >> score[i];
        while (score[i] < 0)
        {
            cout << "Please enter again: ";
            cin >> score[i];
        }
        if (i != (number - 1))
            cin.ignore();
    }
    
    // Sap xep bang diem
    cout << "The sorted list of scores: \n";
    sortArray(score, name, number);
    for (int i = 0; i < number; i++)
        cout << name[i] << ": " << score[i] << endl;

    // Giai phong vung nho con tro
    delete [] score;
    score = 0;
    delete [] name;
    name = 0;
    return 0;
}

void sortArray(int *arr, string *student, int size)
{
    int i, minIndex;
    int minElem;
    string temp;

    for (i = 0; i < (size - 1); i++)
    {
        minIndex = i;
        minElem = arr[i];
        temp = student[i];
        for(int j = i + 1; j < size; j++)
        {
            if ((arr[j]) < minElem)
            {
                minElem = arr[j];
                temp = student[j];
                minIndex = j;
            }
        }
        arr[minIndex] = arr[i];
        student[minIndex] = student[i];
        arr[i] = minElem;
        student[i] = temp;
    }
}