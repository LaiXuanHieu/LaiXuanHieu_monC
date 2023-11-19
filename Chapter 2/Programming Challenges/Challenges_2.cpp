//chương trình tính tiền theo phần trăm thu nhập 
#include <iostream> 
using namespace std;
int main ()
{
    //khai báo 2 biến 
    double total_Sale = 8.6;
    double Percent_coast = 58;

    //in ra màn hình số tiền chiếm 58% của 8.6 tỷ 
    cout <<"The money is from  "<<total_Sale <<"is" << (total_Sale *100)/ Percent_coast <<"MIllion in year";
    return 0;
}