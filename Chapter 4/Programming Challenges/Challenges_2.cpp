// chương trình chuyển đổi số la mã từ 1 đến 10
#include <iostream>

using namespace std;

int main()
{
    int number;

    // Vòng lặp kiểm tra tính hợp lệ của đầu vào
    do
    {
        cout << "Nhap mot so tu 1 den 10: ";
        cin >> number;

        if (number < 1 || number > 10)
        {
            cout << "Dau vao khong hop le. Vui long nhap mot so tu 1 den 10." << endl;
        }
    } while (number < 1 || number > 10);

    // Chuyen doi so thanh bieu dien so La Ma su dung cau lenh switch
    string soLaMa;

    switch (number)
    {
    case 1:
        soLaMa = "I";
        break;
    case 2:
        soLaMa = "II";
        break;
    case 3:
        soLaMa = "III";
        break;
    case 4:
        soLaMa = "IV";
        break;
    case 5:
        soLaMa = "V";
        break;
    case 6:
        soLaMa = "VI";
        break;
    case 7:
        soLaMa = "VII";
        break;
    case 8:
        soLaMa = "VIII";
        break;
    case 9:
        soLaMa = "IX";
        break;
    case 10:
        soLaMa = "X";
        break;
    }

    cout << "Bieu dien so La Ma tuong ung: " << soLaMa << endl;

    return 0;
}