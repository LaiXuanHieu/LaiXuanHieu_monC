// chương tính số điểm trung điểm trung bình của 5 mon
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double testScores[5];  // Mảng lưu trữ 5 điểm kiểm tra
    double totalScore = 0; // Tổng điểm

    // Nhập điểm cho từng bài kiểm tra
    for (int i = 0; i < 5; i++)
    {
        cout << "Nhap diem cho bai kiem tra " << i + 1 << ": ";
        cin >> testScores[i];
        totalScore += testScores[i]; // Cộng điểm vào tổng
    }

    // Tính điểm trung bình
    double averageScore = totalScore / 5;

    // Hiển thị điểm trung bình với định dạng số thập phân có một chữ số sau dấu phẩy
    cout << fixed << setprecision(1);
    cout << "Diem trung binh cua " << 5 << " bai kiem tra la: " << averageScore << endl;

    return 0;
}