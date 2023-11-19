#include <iostream>
using namespace std;

// Ham nhap diem cua mot giam khao va kiem tra tinh hop le
void getJudgeData(double &score) {
    do {
        cout << "Nhap diem cua mot giam khao (0-10): ";
        cin >> score;
    } while (score < 0 || score > 10);
}

// Ham tim diem thap nhat trong mang diem
double findLowest(double scores[]) {
    double lowest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
        }
    }
    return lowest;
}

// Ham tim diem cao nhat trong mang diem
double findHighest(double scores[]) {
    double highest = scores[0];
    for (int i = 1; i < 5; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
        }
    }
    return highest;
}

// Ham tinh diem cuoi cung sau khi loai bo diem thap nhat va diem cao nhat
void calcScore(double scores[]) {
    double lowest = findLowest(scores);
    double highest = findHighest(scores);
    double total = 0;

    for (int i = 0; i < 5; i++) {
        if (scores[i] != lowest && scores[i] != highest) {
            total += scores[i];
        }
    }

    double finalScore = total / 3;
    cout << "Diem cuoi cung cua nguoi tham gia la: " << finalScore << endl;
}

int main() {
    double scores[5];

    for (int i = 0; i < 5; i++) {
        getJudgeData(scores[i]);
    }

    calcScore(scores);

    return 0;
}
