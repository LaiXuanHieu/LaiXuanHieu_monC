// chương trình tính lượng chất béo
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Khai bao bien
    double calories, fatGrams, caloriesFromFat;

    // Nhap so luong calo va chat beo
    cout << "Nhap so luong calo trong thuc pham: ";
    cin >> calories;

    cout << "Nhap so luong chat beo trong thuc pham: ";
    cin >> fatGrams;

    // Kiem tra dau vao
    if (calories < 0 || fatGrams < 0 || fatGrams * 9 > calories)
    {
        cout << "Loi: Gia tri dau vao khong hop le. Vui long kiem tra gia tri calo va chat beo." << endl;
    }
    else
    {
        // Tinh toan
        caloriesFromFat = fatGrams * 9;
        double fatCaloriesPercentage = (caloriesFromFat / calories) * 100;

        // Hien thi phan tram calo tu chat beo
        cout << fixed << setprecision(2); // Dinh dang hien thi so thap phan
        cout << "Phan tram calo tu chat beo: " << fatCaloriesPercentage << "%" << endl;

        // Kiem tra xem thuc pham co it chat beo hay khong
        if (fatCaloriesPercentage < 30)
        {
            cout << "Thuc pham nay it chat beo." << endl;
        }
    }

    return 0;
}