#include <iostream>
using namespace std;

class MayLoc {
public:
    virtual void nhap() = 0;
    virtual float tinhLuongNuoc() = 0;
    virtual long tinhChiPhi() = 0;
    virtual ~MayLoc() {}
};

class MayLyTam : public MayLoc {
public:
    void nhap() override {
        // Cài đặt nhập cho MayLyTam
    }

    float tinhLuongNuoc() override {
        // Cài đặt tính lượng nước cho MayLyTam
        return 0.0;
    }

    long tinhChiPhi() override {
        // Cài đặt tính chi phí cho MayLyTam
        return 0;
    }
};

class MayXucTac : public MayLoc {
public:
    void nhap() override {
        // Cài đặt nhập cho MayXucTac
    }

    float tinhLuongNuoc() override {
        // Cài đặt tính lượng nước cho MayXucTac
        return 0.0;
    }

    long tinhChiPhi() override {
        // Cài đặt tính chi phí cho MayXucTac
        return 0;
    }
};

class DanhSachMayLoc {
private:
    MayLoc** _danhSach;
    int _N;

public:
    DanhSachMayLoc() : _N(0), _danhSach(nullptr) {}

    ~DanhSachMayLoc() {
        for (int i = 0; i < _N; ++i) {
            delete _danhSach[i];
        }
        delete[] _danhSach;
    }

    void nhap() {
        cout << "Nhập số lượng máy:";
        cin >> this->_N;
        _danhSach = new MayLoc*[_N];
        for (int i = 0; i < _N; i++) {
            int choice = 0;
            cout << "Nhập loại máy: 1 = máy lý tâm, 2 = máy xúc tác:\n";
            cin >> choice;
            if (choice == 1) {
                _danhSach[i] = new MayLyTam();
            } else {
                _danhSach[i] = new MayXucTac();
            }
            _danhSach[i]->nhap();
        }
    }

    float tinhLuongNuoc() {
        float sum = 0.0;
        for (int i = 0; i < _N; i++) {
            sum += _danhSach[i]->tinhLuongNuoc();
        }
        return sum;
    }

    long tinhChiPhi() {
        long sum = 0;
        for (int i = 0; i < _N; i++) {
            sum += _danhSach[i]->tinhChiPhi();
        }
        return sum;
    }
};

class Ao {
private:
    int _M;
    DanhSachMayLoc _ds;

public:
    void nhap() {
        cout << "Nhập lượng nước: ";
        cin >> this->_M;
        cout << "Nhập danh sách:\n";
        this->_ds.nhap();
    }

    bool AoDuocLocHetKhong() {
        return this->_M <= this->_ds.tinhLuongNuoc();
    }

    long tongChiPhi() {
        return this->_ds.tinhChiPhi();
    }

    Ao() : _M(0) {}

    ~Ao() {}
};

int main() {
    Ao ao;
    ao.nhap();

    if (ao.AoDuocLocHetKhong()) {
        cout << "Ao được lọc hết nước.\n";
    } else {
        cout << "Không đủ nước để lọc cho ao.\n";
    }

    cout << "Tổng chi phí: " << ao.tongChiPhi() << endl;

    return 0;
}