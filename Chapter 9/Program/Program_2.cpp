//chương trình đơn giản của con trỏ
#include <iostream>

using namespace std;

int main ()
{
    //khơi tạo giá trị và lưu giá trị địa chỉ
    int x = 25; 
    int *ptr = nullptr ;
    ptr = &x;
    //in ra giá trị và địa chỉ của x
    cout <<"The value x is "<< x <<endl;
    cout <<"THe address is " << ptr <<endl;
    return 0 ; 
}