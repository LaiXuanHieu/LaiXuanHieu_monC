#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nhietDo;

    // Định nghĩa cấu trúc thông tin về chất
    struct Chat
    {
        string ten;
        int diemDong;
        int diemSoi;
    };

    // Tạo một mảng các chất
    Chat cacChat[] = {
        {"Rượu etyl", -173, 172},
        {"Thủy ngân", -38, 676},
        {"Oxy", -362, -306},
        {"Nước", 32, 212}};

    // Nhập nhiệt độ
    cout << "Nhap nhiet do theo do Fahrenheit: ";
    cin >> nhietDo;

    // Kiểm tra các chất về điểm đông và điểm sôi
    cout << "Cac chat co the dong o " << nhietDo << "°F:" << endl;
    for (const Chat &chat : cacChat)
    {
        if (nhietDo <= chat.diemDong)
        {
            cout << chat.ten << endl;
        }
    }

    cout << "Cac chat co the soi o " << nhietDo << "°F:" << endl;
    for (const Chat &chat : cacChat)
    {
        if (nhietDo >= chat.diemSoi)
        {
            cout << chat.ten << endl;
        }
    }

    return 0;
}