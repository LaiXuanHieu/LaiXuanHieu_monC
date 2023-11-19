#include <iostream>
using namespace std;

// Hàm nhập điểm, kiểm tra và lưu vào tham chiếu
void getScore(double &score) {
    do {
        cout << "Nhap diem thi (0-100): ";
        cin >> score;
    } while (score < 0 || score > 100);
}

// Hàm tìm điểm thấp nhất
int findLowest(double scores[]) {
    int lowestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (scores[i] < scores[lowestIndex]) {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

// Hàm tính trung bình sau khi loại bỏ điểm thấp nhất
void calcAverage(double scores[]) {
    int lowestIndex = findLowest(scores);
    double sum = 0;

    for (int i = 0; i < 5; i++) {
        if (i != lowestIndex) {
            sum += scores[i];
        }
    }

    double average = sum / 4;
    cout << "Diem trung binh sau khi loai bo diem thap nhat la: " << average << endl;
}

int main() {
    double scores[5];

    for (int i = 0; i < 5; i++) {
        getScore(scores[i]);
    }

    calcAverage(scores);

    return 0;
}
