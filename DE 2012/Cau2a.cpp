#include <iostream>
using namespace std;
// Lớp cơ sở
class DongVat {
public:
    virtual void keu() {
        cout << "Dong vat nao do keu" << endl;
    }
};
// Lớp kế thừa từ lớp cơ sở
class Meo : public DongVat {
public:
    void keu() override {
        cout << "Meo keu: Meow" << endl;
    }
};
// Lớp kế thừa từ lớp cơ sở
class Cho : public DongVat {
public:
    void keu() override {
        cout << "Cho keu: Gau gau" << endl;
    }
};
int main() {
    DongVat* dongvat1 = new Meo();
    DongVat* dongvat2 = new Cho();
    dongvat1->keu();  // Output: Meo keu: Meow
    dongvat2->keu();  // Output: Cho keu: Gau gau
    delete dongvat1;
    delete dongvat2;
    return 0;
}