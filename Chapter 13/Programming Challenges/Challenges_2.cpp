#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int idNumber;
    std::string department;
    std::string position;

public:
    // Constructors
    Employee(std::string empName, int empId, std::string empDept, std::string empPos)
        : name(empName), idNumber(empId), department(empDept), position(empPos) {}

    Employee(std::string empName, int empId)
        : name(empName), idNumber(empId), department(""), position("") {}

    Employee()
        : name(""), idNumber(0), department(""), position("") {}

    // Mutator functions
    void setName(std::string empName) { name = empName; }
    void setIdNumber(int empId) { idNumber = empId; }
    void setDepartment(std::string empDept) { department = empDept; }
    void setPosition(std::string empPos) { position = empPos; }

    // Accessor functions
    std::string getName() const { return name; }
    int getIdNumber() const { return idNumber; }
    std::string getDepartment() const { return department; }
    std::string getPosition() const { return position; }
};

int main() {
    // Tạo đối tượng Employee
    Employee emp1("Susan Meyers", 47899, "Kế toán", "Phó Chủ tịch");
    Employee emp2("Mark Jones", 39119, "Công nghệ thông tin", "Lập trình viên");
    Employee emp3("Joy Rogers", 81774, "Sản xuất", "Kỹ sư");

    // Hiển thị thông tin nhân viên
    std::cout << "Nhân viên 1:" << std::endl;
    std::cout << "Tên: " << emp1.getName() << std::endl;
    std::cout << "Số ID: " << emp1.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << emp1.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << emp1.getPosition() << std::endl;
    std::cout << std::endl;

    std::cout << "Nhân viên 2:" << std::endl;
    std::cout << "Tên: " << emp2.getName() << std::endl;
    std::cout << "Số ID: " << emp2.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << emp2.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << emp2.getPosition() << std::endl;
    std::cout << std::endl;

    std::cout << "Nhân viên 3:" << std::endl;
    std::cout << "Tên: " << emp3.getName() << std::endl;
    std::cout << "Số ID: " << emp3.getIdNumber() << std::endl;
    std::cout << "Bộ phận: " << emp3.getDepartment() << std::endl;
    std::cout << "Chức vụ: " << emp3.getPosition() << std::endl;

    return 0;
}
