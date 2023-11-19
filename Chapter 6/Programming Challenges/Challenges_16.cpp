#include <iostream>
using namespace std;

// Hàm tính kích thước dân số cho một năm
int tinhDanSo(int pop, double birthRate, double deathRate)
{
    return pop + (pop * birthRate / 100) - (pop * deathRate / 100);
}

int main()
{
    int startingPopulation, years;
    double birthRate, deathRate;

    cout << "Nhap kich thuoc dan so ban dau: ";
    cin >> startingPopulation;

    cout << "Nhap ty le sinh hang nam (phan tram): ";
    cin >> birthRate;

    cout << "Nhap ty le tu vong hang nam (phan tram): ";
    cin >> deathRate;

    cout << "Nhap so nam can tinh: ";
    cin >> years;

    cout << "Nam 0: Kich thuoc dan so ban dau la " << startingPopulation << endl;

    for (int year = 1; year <= years; year++)
    {
        startingPopulation = tinhDanSo(startingPopulation, birthRate, deathRate);
        cout << "Nam " << year << ": Kich thuoc dan so la " << startingPopulation << endl;
    }

    return 0;
}
