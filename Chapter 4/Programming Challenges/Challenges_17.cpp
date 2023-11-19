// chương trình tính hiển thị số lần nhãy tốt nhất
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct NhayCao
{
    string ngay;
    double chieuCao;
};

int main()
{
    string tenVDD;
    vector<NhayCao> danhSachNhayCao;

    cout << "Nhap ten cua van dong vien nhay cao: ";
    getline(cin, tenVDD);

    for (int i = 0; i < 3; i++)
    {
        cout << "Nhap ngay cua lan nhay " << i + 1 << " (YYYY-MM-DD): ";
        string ngay;
        cin >> ngay;

        double chieuCao;
        do
        {
            cout << "Nhap chieu cao cua lan nhay vao ngay " << ngay << " (met): ";
            cin >> chieuCao;

            if (chieuCao < 2.0 || chieuCao > 5.0)
            {
                cout << "Chieu cao khong hop le. Chieu cao phai nam trong khoang tu 2.0 den 5.0 met." << endl;
            }
        } while (chieuCao < 2.0 || chieuCao > 5.0);

        danhSachNhayCao.push_back({ngay, chieuCao});
    }

    // Sap xep danh sach nhay cao theo chieu cao (cao nhat dau tien)
    sort(danhSachNhayCao.begin(), danhSachNhayCao.end(), [](const NhayCao &a, const NhayCao &b)
         { return a.chieuCao > b.chieuCao; });

    cout << "Van dong vien nhay cao: " << tenVDD << endl;
    cout << "Cac Ky luc nhay cao tot nhat (theo chieu cao):\n";

    for (const NhayCao &nhayCao : danhSachNhayCao)
    {
        cout << "Ngay: " << nhayCao.ngay << " - Chieu cao: " << nhayCao.chieuCao << " met\n";
    }

    return 0;
}