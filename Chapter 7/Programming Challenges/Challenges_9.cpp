#include <iostream>
using namespace std;

int main() {
    long empId[] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[7];
    double payRate[7];
    double wages[7];

    for (int i = 0; i < 7; i++) {
        cout << "Nhập số giờ làm việc cho nhân viên " << empId[i] << ": ";
        cin >> hours[i];
        
        while (hours[i] < 0) {
            cout << "Giá trị không hợp lệ. Vui lòng nhập một số không âm: ";
            cin >> hours[i];
        }

        cout << "Nhập mức lương giờ cho nhân viên " << empId[i] << ": ";
        cin >> payRate[i];

        while (payRate[i] < 15.00) {
            cout << "Giá trị không hợp lệ. Vui lòng nhập một giá trị lớn hơn hoặc bằng 15.00: ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "\nMã số nhân viên\tTiền lương\n";
    for (int i = 0; i < 7; i++) {
        cout << empId[i] << "\t\t" << wages[i] << endl;
    }

    return 0;
}