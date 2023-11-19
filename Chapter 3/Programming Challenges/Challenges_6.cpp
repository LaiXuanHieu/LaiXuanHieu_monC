//chương trình tính số lượng thành phần của bánh 
#include <iostream>
using namespace std;

int main()
{

    //thành phần của một bánh 
    const int CUP_OF_SUGAR = 1.5, CUP_OF_BUTTER = 1 , CUP_OF_FLOUR = 2.75;

    //nhập vào số bánh cần làm 
    cout <<"Please Enter the number the cookies : ";
    int cookies; cin >> cookies;

    //in ra thành phần cần chuẩn bị 
    cout <<"Number Cup of sugar is " << CUP_OF_SUGAR*cookies << " ";
    cout <<"Number Cup of butter is " << CUP_OF_BUTTER*cookies << " ";
    cout <<"Number Cup of cookies is " << CUP_OF_FLOUR*cookies << " ";

    return 0;
}