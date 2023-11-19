#include <iostream>
#include <string>
using namespace std;
void dollarFormat(string &);

int main(){
    string input;
    cout << "Enter a dollar amount int the form nnnnn.nn:";
    cin >> input;
    dollarFormat(input);
    cout << "Here is the amount formatted:\n";
    cout << input << endl;
    return 0;
}
void dollarFormat(string &currency)
{
    int dp;
    dp = currency.find('.');
    if ( dp > 3)
    {
        for ( int x = dp - 3; x > 0; x  -= 3)
            currency.insert(x ,  ",");
    }
    currency.insert(0, "$");
}