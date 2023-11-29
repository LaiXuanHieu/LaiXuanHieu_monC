#include <iostream>
#include <cmath>

class Function {
public:
    virtual ~Function() = default;

    virtual double GiaTri(double x) = 0;
    virtual double DaoHam(double x) = 0;
};

class Cos : public Function {
public:
    double GiaTri(double x) override {
        return cos(x);
    }

    double DaoHam(double x) override {
        return -sin(x);
    }
};

double DaoHamThuong(Function* f, Function* g, double x) {
    if (g != nullptr) {
        return (f->DaoHam(x) * g->GiaTri(x) - f->GiaTri(x) * g->DaoHam(x)) / (g->GiaTri(x) * g->GiaTri(x));
    }
    return 0;
}

double DaoHamCuaHamHop(Function* f, Function* g, double x) {
    if (f != nullptr && g != nullptr) {
        return f->DaoHam(g->GiaTri(x)) * g->DaoHam(x);
    }
    return 0;
}

int main() {
    Cos cosFunction;
    std::cout << "Cos(1.0): " << cosFunction.GiaTri(1.0) << std::endl;
    std::cout << "Đạo hàm của Cos tại x=1.0: " << cosFunction.DaoHam(1.0) << std::endl;

    return 0;
}