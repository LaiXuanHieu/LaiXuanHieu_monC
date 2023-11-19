#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    const double PI = 3.14159;
    const double DIEN_TICH_MIENG_PIZZA = 14.125;

   double bankinh ;
   cout <<"Enter the radius Pizza : ";
   cin >> bankinh ;
   cout <<"Enter the number people : ";
   int peopple ; cin >> peopple;//một người ăn bốn lát có kích cở 14,125;

    double totalarea = (PI * pow(bankinh,2));
    
    
   cout <<"Vậy số bánh cần mua là : "   << ((peopple * 4 *14.125)/totalarea);   

    
    return 0;
}