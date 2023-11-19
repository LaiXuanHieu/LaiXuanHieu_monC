#include <iostream>
#include <cstring>
using namespace std;
int main() {
    const int MAX_LENGTH = 100;

    char firstName[MAX_LENGTH];
    char middleName[MAX_LENGTH];
    char lastName[MAX_LENGTH];
    char arrangedName[MAX_LENGTH];

    // Nhập tên từ người dùng
    cout << "Nhap ten dem: ";
    cin.getline(firstName, MAX_LENGTH);

    cout << "Nhap ten giua: ";
    cin.getline(middleName, MAX_LENGTH);

    cout << "Nhap ho: ";
    cin.getline(lastName, MAX_LENGTH);

    // Sắp xếp tên theo định dạng yêu cầu
    strcpy(arrangedName, lastName);
    strcat(arrangedName, ", ");
    strcat(arrangedName, firstName);
    strcat(arrangedName, " ");
    strcat(arrangedName, middleName);

    // Hiển thị tên đã sắp xếp
    cout << "Ten da sap xep: " << arrangedName << std::endl;

    return 0;
}
