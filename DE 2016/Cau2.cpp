#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

class BenhNhan {
protected:
    int MSBN;

public:
    virtual void nhap(istream &is) {
        is >> this->MSBN;
    }

    virtual void capNhatNgayXuatVien(int ngay) {
    }

    virtual bool getTrangThai() {
        return true;
    }

    virtual long tinhTien() {
        return 0;
    }

    virtual void capNhatVienPhi(long Tien) {
    }
};

class BenhNhanNgoaiTru : public BenhNhan {
private:
    long _vienPhi;

public:
    BenhNhanNgoaiTru(int id, long vienPhi) : _vienPhi(vienPhi) {
        this->MSBN = id;
    }

    void nhap(istream &is) override {
        is >> this->_vienPhi;
    }

    long tinhTien() override {
        return this->_vienPhi;
    }

    void capNhatVienPhi(long Tien) override {
        this->_vienPhi += Tien;
    }
};

class BenhNhanNoiTru : public BenhNhan {
private:
    int _loaiPhong;
    int _ngayBatDauNamVien;
    int _soNgayNamVien;
    bool _daXuatVien;
    long _phiKhamBenhMoiNgay;

public:
    static long A;
    static long B;
    static long C;

    void nhap(istream &is) override {
        is >> this->_phiKhamBenhMoiNgay;
        char c;
        is >> c;
        this->_loaiPhong = c - 64;
    }

    BenhNhanNoiTru(int MaSo, int ngay, long tien, char c) {
        this->MSBN = MaSo;
        this->_ngayBatDauNamVien = ngay;
        this->_phiKhamBenhMoiNgay = tien;
        this->_loaiPhong = c - 64;
        this->_daXuatVien = false;
    }

    void capNhatNgayXuatVien(int ngay) override {
        this->_soNgayNamVien = ngay - this->_ngayBatDauNamVien;
        this->_daXuatVien = true;
    }

    long tinhTien() override {
        if (this->_loaiPhong == 1) {
            return this->A * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        } else if (this->_loaiPhong == 2) {
            return this->B * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        } else if (this->_loaiPhong == 3) {
            return this->C * (this->_soNgayNamVien + this->_phiKhamBenhMoiNgay);
        } else {
            return 0;
        }
    }
};

long BenhNhanNoiTru::A = 1400000;
long BenhNhanNoiTru::B = 900000;
long BenhNhanNoiTru::C = 600000;

class DanhSachBenhNhan {
    vector<BenhNhan *> _ds;

public:
    void nhap() {
        ifstream fin("input.log");
        int ngay = 0;
        while (fin >> ngay) {
            int MaSo = 0;
            fin >> MaSo;
            string s = "";
            fin >> s;
            BenhNhan *p = NULL;
            if (s == "KB") {
                long Tien = 0;
                fin >> Tien;
                if (MaSo <= this->_ds.size() - 1) {
                    this->_ds[MaSo - 1]->capNhatVienPhi(Tien);
                } else {
                    p = new BenhNhanNgoaiTru(MaSo, Tien);
                    this->_ds.push_back(p);
                }
            } else if (s == "NV") {
                long Tien = 0;
                fin >> Tien;
                char c;
                fin >> c;
                p = new BenhNhanNoiTru(MaSo, ngay, Tien, c);
                this->_ds.push_back(p);
            } else if (s == "XV") {
                this->_ds[MaSo - 1]->capNhatNgayXuatVien(ngay);
            } else if (s == "TKVP") {
                for (int i = 0; i < this->_ds.size(); i++) {
                    if (dynamic_cast<BenhNhanNgoaiTru *>(this->_ds[i]) == NULL) {
                        if (this->_ds[i]->getTrangThai() == false) {
                            this->_ds[i]->capNhatNgayXuatVien(ngay);
                        }
                    }
                }
            }
        }
        fin.close();
    }

    long tinhTongTienVienPhi() {
        long sum = 0;
        for (int i = 0; i < this->_ds.size(); i++) {
            sum += this->_ds[i]->tinhTien();
        }
        return sum;
    }
};

int main() {
    DanhSachBenhNhan danhSach;
    danhSach.nhap();
    cout << "Tong tien vien phi: " << danhSach.tinhTongTienVienPhi() << endl;

    return 0;
}