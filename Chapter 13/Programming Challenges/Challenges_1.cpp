#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month, day, year;

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    void printDate1() {
        cout << month << '/' << day << '/' << year << endl;
    }

    void printDate2() {
        const string monthNames[] = {"", "January", "February", "March", "April", "May", "June",
                                     "July", "August", "September", "October", "November", "December"};
        cout << monthNames[month] << ' ' << day << ", " << year << endl;
    }

    void printDate3() {
        const string monthNames[] = {"", "January", "February", "March", "April", "May", "June",
                                     "July", "August", "September", "October", "November", "December"};
        cout << day << ' ' << monthNames[month] << ' ' << year << endl;
    }
};

int main() {
    int month, day, year;

    // Nhập thông tin ngày
    cout << "Nhập tháng (1-12): ";
    cin >> month;
    cout << "Nhập ngày (1-31): ";
    cin >> day;
    cout << "Nhập năm: ";
    cin >> year;

    // Kiểm tra tính hợp lệ của ngày
    if (!(1 <= month && month <= 12) || !(1 <= day && day <= 31)) {
        cout << "Giá trị không hợp lệ. Tháng nên trong khoảng 1-12, và ngày nên trong khoảng 1-31." << endl;
        return 1;
    }

    // Tạo đối tượng Date và hiển thị ngày
    Date dateObject(month, day, year);
    dateObject.printDate1();
    dateObject.printDate2();
    dateObject.printDate3();

    return 0;
}
