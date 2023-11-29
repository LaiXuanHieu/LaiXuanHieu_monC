#include <iostream>
using namespace std;
class Shape {
  public:
    virtual void draw() = 0; // hàm trừu tượng
};
class Circle : public Shape {
  public:
    void draw() override {
      cout << "Vẽ hình tròn" << endl;
    }
};
class Square : public Shape {
  public:
    void draw() override {
      cout << "Vẽ hình vuông" << endl;
    }
};
int main() {
  Shape* shape;
  // Khởi tạo đối tượng của lớp Circle
  shape = new Circle();
  shape->draw(); // Vẽ hình tròn
  // Khởi tạo đối tượng của lớp Square
  shape = new Square();
  shape->draw(); // Vẽ hình vuông

  return 0;
}