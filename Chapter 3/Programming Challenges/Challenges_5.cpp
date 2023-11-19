// chương trình tính tỉ lệ phần trăm nam nử trong 1 lớp
#include <iostream>
using namespace std;

int main()
{
    int males, females;

    // Nhập số lượng nam và nữ từ người dùng
    cout << "Nhap so luong nam: ";
    cin >> males;
    cout << "Nhap so luong nu: ";
    cin >> females;

    int totalStudents = males + females; // Tổng số học sinh

    double malePercentage = static_cast<double>(males) / totalStudents * 100;     // Tính phần trăm nam
    double femalePercentage = static_cast<double>(females) / totalStudents * 100; // Tính phần trăm nữ

    // Hiển thị kết quả
    cout << "Phan tram nam trong lop hoc: " << malePercentage << "%" << endl;
    cout << "Phan tram nu trong lop hoc: " << femalePercentage << "%" << endl;

    return 0;
}