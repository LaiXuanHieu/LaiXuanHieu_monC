#include <iostream>
#include <string>

class IFace {
public:
    virtual void show() = 0;
    virtual IFace* clone() = 0;
    virtual ~IFace() {}
};

class EyedFace : public IFace {
private:
    std::string hinhDang;  // Đổi tên biến thành hinhDang
    int mat;

public:
    void show() override {
        // Triển khai hàm show
        std::cout << "Hình dạng: " << hinhDang << ", Mắt: " << mat << std::endl;
    }

    IFace* clone() override {
        EyedFace* Clone = new EyedFace(hinhDang, mat);
        return Clone;
    }

    ~EyedFace() override {
        // Triển khai hàm hủy
    }

    EyedFace(const std::string& hinh, const int& soMat) : hinhDang(hinh), mat(soMat) {}

    // Loại bỏ hàm hủy không cần thiết
};

int main() {
    // Ví dụ sử dụng
    EyedFace* matGoc = new EyedFace("Tròn", 2);
    matGoc->show();

    IFace* matClone = matGoc->clone();
    matClone->show();

    delete matGoc;
    delete matClone;

    return 0;
}