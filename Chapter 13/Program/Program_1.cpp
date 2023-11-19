// chương trình hướng đối tượng cơ bản
#include <iostream>
using namespace std;

class Retangle
{
private:
    double width, length;

public:
    void setLength(double);
    void setwidth(double);
    double getLength() const;
    double getWidth() const; 
    double getarea () const ;
};
// gán giá trị
void Retangle ::setLength(double W)
{
    width = W;
}
void Retangle ::setwidth(double leng)
{
    length = leng;
}
double Retangle ::getLength() const
{
    return length ;
}
double Retangle :: getWidth () const 
{
    return  width;
}
double Retangle :: getarea () const 
{
    return length * width ;
}

int main ()
{
    Retangle box1 ;//đối tượng cần tính đầu tiên và có thể tính nhiều đối tượng và tái sử dụng liên tục
    double rectLength , rectWidth ;
    //nhập giá trị của từng biến ở trên
     cout <<"Enter the Length : "; 
     cin >> rectLength;
     cout <<"Enter the width : ";
     cin >> rectWidth ;

     box1.setLength(rectLength);
     box1.setwidth (rectWidth);
     cout<<"here : \n"
     <<"Length :  " << rectLength  <<"\n Width : " << rectWidth
     << "\n The area of retangle : " << box1.getarea() <<endl;
     return 0 ;
}