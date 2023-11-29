#include <iostream>
#include <string>

class IFace {
public:
    virtual void hienThi() = 0;
    virtual IFace* saoChep() = 0;
    virtual ~IFace() {}
};

class EyesFace : public IFace {
private:
    std::string hinhDang;
    int mat;

public:
    static int SO_DOI_TUONG;

    EyesFace(const std::string& hd, const int& m) : hinhDang(hd), mat(m) {
        SO_DOI_TUONG++;
    }

    ~EyesFace() override {
        SO_DOI_TUONG--;
    }

    void hienThi() override {
        // Thực hiện hàm hienThi
        std::cout << "Hinh dang: " << hinhDang << ", Mat: " << mat << std::endl;
    }

    IFace* saoChep() override {
        EyesFace* SaoChep = new EyesFace(hinhDang, mat);
        return SaoChep;
    }
};

int EyesFace::SO_DOI_TUONG = 0;

void kiemTraFace(IFace* fc) {
    IFace* a[3] = { fc, fc->saoChep(), fc->saoChep() };
    for (int i = 0; i < 3; i++) {
        a[i]->hienThi();
    }
    std::cout << "Cung 3 dong giong nhau?" << std::endl;
    delete a[1];
    delete a[2];
    delete fc; // Giải phóng bộ nhớ cho đối tượng gốc
    return;
}

int main() {
    // Ví dụ sử dụng
    EyesFace* matGoc = new EyesFace("Tron", 2);
    matGoc->hienThi();

    kiemTraFace(matGoc);

    std::cout << "So doi tuong thuoc EyesFace: " << EyesFace::SO_DOI_TUONG << std::endl;

    return 0;
}