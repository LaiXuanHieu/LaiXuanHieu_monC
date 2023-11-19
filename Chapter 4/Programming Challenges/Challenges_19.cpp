// chương trình xác định tia
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    // Nhập độ dài sóng
    double doDaiSong;
    cout << "Nhap do dai song cua song dien tu (met): ";
    cin >> doDaiSong;

    // Kiem tra va xac dinh loai song dien tu
    string loaiSongDienTu;
    if (doDaiSong >= 1E-2)
    {
        loaiSongDienTu = "Song Radio";
    }
    else if (doDaiSong >= 1E-3)
    {
        loaiSongDienTu = "Song vi song";
    }
    else if (doDaiSong >= 7E-7)
    {
        loaiSongDienTu = "Hong ngoai";
    }
    else if (doDaiSong >= 4E-7)
    {
        loaiSongDienTu = "Anh sang nhin thay";
    }
    else if (doDaiSong >= 1E-8)
    {
        loaiSongDienTu = "Tia cuc tim";
    }
    else if (doDaiSong >= 1E-11)
    {
        loaiSongDienTu = "Tia X";
    }
    else
    {
        loaiSongDienTu = "Tia Gamma";
    }

    // Hien thi loai song dien tu tuong ung
    cout << "Song dien tu nay la loai: " << loaiSongDienTu << endl;

    return 0;
}