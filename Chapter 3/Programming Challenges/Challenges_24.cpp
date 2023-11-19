#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, city, college, profession, animal, petName;
    int age;

    cout << "Nhap ten cua ban: ";
    getline(cin, name);

    cout << "Nhap tuoi cua ban: ";
    cin >> age;
    cin.ignore(); // Loai bo ky tu '\n' trong bo nho dem

    cout << "Nhap ten thanh pho: ";
    getline(cin, city);

    cout << "Nhap ten truong dai hoc: ";
    getline(cin, college);

    cout << "Nhap nghe nghiep: ";
    getline(cin, profession);

    cout << "Nhap ten loai dong vat: ";
    getline(cin, animal);

    cout << "Nhap ten con vat nuoi: ";
    getline(cin, petName);

    cout << "Co mot nguoi ten la " << name << " song o " << city << ". ";
    cout << "Vao tuoi " << age << ", " << name << " da hoc tai truong " << college << ". ";
    cout << name << " tot nghiep va bat dau lam nghe nghe la " << profession << ". ";
    cout << "Sau do, " << name << " nuoi mot con " << animal << " ten la " << petName << ". ";
    cout << "Ho da song hanh phuc mai mai!" << endl;

    return 0;
}