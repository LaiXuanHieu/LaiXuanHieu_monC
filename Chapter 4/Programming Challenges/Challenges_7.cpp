#include <iostream>
using namespace std;

int main()
{
    int number_of_second;
    do
    {
        // nhập vào và kiểm tra điều kiện
        cout << "Enter the number of second : ";
        cin >> number_of_second;

        if (number_of_second < 0)
        {
            cout << "Please let's enter again !!!";
        }
    }

    while (number_of_second < 0);

    if (number_of_second < 60)
    {

        cout << "Have " << number_of_second << "second ";
    }
    else if (number_of_second >= 60 && number_of_second < 3600)
    {
        int second = number_of_second % 60;
        int minute = number_of_second / 60;
        cout << "have " << minute << "Minute " << second << "second ";
    }
    else if (number_of_second > 3600 && number_of_second < 86400)
    {
        int hour = number_of_second / 3600;
        int minute = (number_of_second % 3600)/60;
        int second = ( number_of_second % 3600 )% 60;
        cout <<"have "<<hour <<" hour " <<minute <<" minute " <<second <<" second ";
    }
    else if (number_of_second > 86400)
    {
        int day = number_of_second / 86400;
        int hour  = (number_of_second % 86400)/3600;
        int minute = ((number_of_second % 86400)%3600)/60;
        int second = ((number_of_second % 86400)%3600)%60;
         cout <<"have "<<day <<" day "<<hour <<" hour " <<minute <<" minute " <<second <<" second ";
    }
    return 0;
}