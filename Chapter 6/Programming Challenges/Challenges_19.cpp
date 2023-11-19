#include <iostream>
#include <fstream> // Thêm thư viện cho việc ghi dữ liệu vào tệp
using namespace std;

// Hàm tính tổng chi phí cho bệnh nhân nội trú
double tinhTongChiPhi(int soNgay, double chiPhiNgay, double chiPhiThuoc, double chiPhiDichVu)
{
    if (soNgay < 0 || chiPhiNgay < 0 || chiPhiThuoc < 0 || chiPhiDichVu < 0)
    {
        return -1.0; // Dữ liệu không hợp lệ, trả về -1
    }
    return (soNgay * chiPhiNgay) + chiPhiThuoc + chiPhiDichVu;
}

// Hàm tính tổng chi phí cho bệnh nhân ngoại trú
double tinhTongChiPhi(double chiPhiThuoc, double chiPhiDichVu)
{
    if (chiPhiThuoc < 0 || chiPhiDichVu < 0)
    {
        return -1.0; // Dữ liệu không hợp lệ, trả về -1
    }
    return chiPhiThuoc + chiPhiDichVu;
}

int main()
{
    ofstream outFile("bao_cao_benh_vien.txt"); // Tạo một tệp để ghi dữ liệu

    if (!outFile)
    {
        cerr << "Loi khi mo tep dau ra." << endl;
        return 1;
    }

    char loaiBenhNhan;
    int soNgay;
    double chiPhiNgay, chiPhiThuoc, chiPhiDichVu;

    cout << "Benh nhan duoc nhap vien duoi hinh thuc noi tru (N) hay ngoai tru (T)? ";
    cin >> loaiBenhNhan;

    if (loaiBenhNhan == 'N' || loaiBenhNhan == 'n')
    {
        cout << "Nhap so ngay nam vien: ";
        cin >> soNgay;
        cout << "Nhap chi phi moi ngay nam vien: $";
        cin >> chiPhiNgay;
        cout << "Nhap chi phi thuoc: $";
        cin >> chiPhiThuoc;
        cout << "Nhap chi phi dich vu benh vien: $";
        cin >> chiPhiDichVu;

        double tongChiPhi = tinhTongChiPhi(soNgay, chiPhiNgay, chiPhiThuoc, chiPhiDichVu);

        cout << "Tong chi phi cho benh nhan noi tru: $" << tongChiPhi << endl;

        // Ghi thông tin vào tệp
        outFile << "Loai Benh nhan: Noi tru" << endl;
        outFile << "So ngay nam vien: " << soNgay << endl;
        outFile << "Chi phi moi ngay nam vien: $" << chiPhiNgay << endl;
        outFile << "Chi phi thuoc: $" << chiPhiThuoc << endl;
        outFile << "Chi phi dich vu benh vien: $" << chiPhiDichVu << endl;
        outFile << "Tong chi phi: $" << tongChiPhi << endl;
    }
    else if (loaiBenhNhan == 'T' || loaiBenhNhan == 't')
    {
        cout << "Nhap chi phi thuoc: $";
        cin >> chiPhiThuoc;
        cout << "Nhap chi phi dich vu benh vien: $";
        cin >> chiPhiDichVu;

        double tongChiPhi = tinhTongChiPhi(chiPhiThuoc, chiPhiDichVu);

        cout << "Tong chi phi cho benh nhan ngoai tru: $" << tongChiPhi << endl;

        // Ghi thông tin vào tệp
        outFile << "Loai Benh nhan: Ngoai tru" << endl;
        outFile << "Chi phi thuoc: $" << chiPhiThuoc << endl;
        outFile << "Chi phi dich vu benh vien: $" << chiPhiDichVu << endl;
        outFile << "Tong chi phi: $" << tongChiPhi << endl;
    }
    else
    {
        cout << "Loai benh nhan khong hop le. Vui long nhap 'N' cho noi tru hoac 'T' cho ngoai tru." << endl;
    }

    outFile.close(); // Đóng tệp sau khi hoàn tất ghi
    return 0;
}
