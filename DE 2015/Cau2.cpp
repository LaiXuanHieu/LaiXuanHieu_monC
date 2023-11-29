#include <iostream>
#include <string>

class SoNguyenLon {
private:
    std::string _soLon;

public:
    SoNguyenLon() : _soLon("") {}

    SoNguyenLon(std::string s) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                for (int j = i; j < s.size(); j++) {
                    s[i] = s[i + 1];
                }
                i--;
                s[s.size() - 1] = 0;
            }
        }
        this->_soLon = s;
    }

    friend std::istream& operator>>(std::istream& is, SoNguyenLon& so) {
        getline(is, so._soLon);
        return is;
    }

    bool operator==(const SoNguyenLon& soKhac) const {
        return this->_soLon == soKhac._soLon;
    }
};

int main() {
    SoNguyenLon so1, so2;

    std::cout << "Nhập số nguyên lớn thứ nhất: ";
    std::cin >> so1;

    std::cout << "Nhập số nguyên lớn thứ hai: ";
    std::cin >> so2;

    if (so1 == so2) {
        std::cout << "Hai số nguyên lớn bằng nhau." << std::endl;
    } else {
        std::cout << "Hai số nguyên lớn không bằng nhau." << std::endl;
    }

    return 0;
}