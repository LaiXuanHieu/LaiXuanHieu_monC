//chương trình tihcs điểm qua việc mua sách 
#include <iostream>
using namespace std;

int main()
{
    int numBooks;
    int points = 0;

    // Yêu cầu người dùng nhập số lượng sách đã mua trong tháng này
    cout << "Nhap so luong sach da mua trong thang nay: ";
    cin >> numBooks;

    // Tính toán so diem dua tren so luong sach da mua
    if (numBooks == 0)
    {
        points = 0;
    }
    else if (numBooks == 1)
    {
        points = 5;
    }
    else if (numBooks == 2)
    {
        points = 15;
    }
    else if (numBooks == 3)
    {
        points = 30;
    }
    else if (numBooks >= 4)
    {
        points = 60;
    }

    // Hien thi so diem da tich luy
    cout << "Ban da tich luy duoc " << points << " diem." << endl;

    return 0;
}