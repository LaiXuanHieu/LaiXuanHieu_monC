#include <iostream>
using namespace std;

void findLargestSmallest(int arr[], int size, int &largest, int &smallest) {
    largest = arr[0];
    smallest = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
}

int main() {
    const int size = 10;
    int values[size];

    // Nhập giá trị từ người dùng
    cout << "Nhập 10 giá trị vào mảng:\n";
    for (int i = 0; i < size; i++) {
        cout << "Giá trị " << i + 1 << ": ";
        cin >> values[i];
    }

    int largest, smallest;

    // Tìm giá trị lớn nhất và nhỏ nhất
    findLargestSmallest(values, size, largest, smallest);

    // Hiển thị kết quả
    cout << "Giá trị lớn nhất: " << largest << endl;
    cout << "Giá trị nhỏ nhất: " << smallest << endl;

    return 0;
}