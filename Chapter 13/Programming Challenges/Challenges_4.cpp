#include <iostream>
#include <string>

class PersonalInformation {
private:
    std::string name;
    std::string address;
    int age;
    std::string phoneNumber;

public:
    // Hàm thay đổi giá trị
    void setName(const std::string& newName) { name = newName; }
    void setAddress(const std::string& newAddress) { address = newAddress; }
    void setAge(int newAge) { age = newAge; }
    void setPhoneNumber(const std::string& newPhoneNumber) { phoneNumber = newPhoneNumber; }

    // Hàm truy nhập
    std::string getName() const { return name; }
    std::string getAddress() const { return address; }
    int getAge() const { return age; }
    std::string getPhoneNumber() const { return phoneNumber; }
};

int main() {
    // Tạo các thể hiện của PersonalInformation
    PersonalInformation thongTinCuaBan;
    PersonalInformation thongTinBanBe1;
    PersonalInformation thongTinBanBe2;

    // Thiết lập thông tin cá nhân
    thongTinCuaBan.setName("Tên của bạn");
    thongTinCuaBan.setAddress("Địa chỉ của bạn");
    thongTinCuaBan.setAge(25);  // Đặt tuổi của bạn
    thongTinCuaBan.setPhoneNumber("Số điện thoại của bạn");

    thongTinBanBe1.setName("Tên của Bạn Bè 1");
    thongTinBanBe1.setAddress("Địa chỉ của Bạn Bè 1");
    thongTinBanBe1.setAge(30);  // Đặt tuổi của Bạn Bè 1
    thongTinBanBe1.setPhoneNumber("Số điện thoại của Bạn Bè 1");

    thongTinBanBe2.setName("Tên của Bạn Bè 2");
    thongTinBanBe2.setAddress("Địa chỉ của Bạn Bè 2");
    thongTinBanBe2.setAge(28);  // Đặt tuổi của Bạn Bè 2
    thongTinBanBe2.setPhoneNumber("Số điện thoại của Bạn Bè 2");

    // Hiển thị thông tin cá nhân
    std::cout << "Thông tin của bạn:" << std::endl;
    std::cout << "Tên: " << thongTinCuaBan.getName() << std::endl;
    std::cout << "Địa chỉ: " << thongTinCuaBan.getAddress() << std::endl;
    std::cout << "Tuổi: " << thongTinCuaBan.getAge() << std::endl;
    std::cout << "Số điện thoại: " << thongTinCuaBan.getPhoneNumber() << std::endl;
    std::cout << std::endl;

    std::cout << "Thông tin của Bạn Bè 1:" << std::endl;
    std::cout << "Tên: " << thongTinBanBe1.getName() << std::endl;
    std::cout << "Địa chỉ: " << thongTinBanBe1.getAddress() << std::endl;
    std::cout << "Tuổi: " << thongTinBanBe1.getAge() << std::endl;
    std::cout << "Số điện thoại: " << thongTinBanBe1.getPhoneNumber() << std::endl;
    std::cout << std::endl;

    std::cout << "Thông tin của Bạn Bè 2:" << std::endl;
    std::cout << "Tên: " << thongTinBanBe2.getName() << std::endl;
    std::cout << "Địa chỉ: " << thongTinBanBe2.getAddress() << std::endl;
    std::cout << "Tuổi: " << thongTinBanBe2.getAge() << std::endl;
    std::cout << "Số điện thoại: " << thongTinBanBe2.getPhoneNumber() << std::endl;

    return 0;
}
