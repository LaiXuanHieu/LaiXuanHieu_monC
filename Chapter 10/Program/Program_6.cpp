#include <iostream>
#include <cstring>
using namespace std;

int main(){
    const int NUM_PRODS = 5;
    const int LENGTH = 27;
    char product[NUM_PRODS][LENGTH] =
                            {"TV327 31-inch Television",
                            "CD 257 CD Player",
                            "TA677 Answering Machine",
                            "CS109 Car Stereo",
                            "PC955 Personal Computer"};
    char lookUp[LENGTH];
    char *strPtr = nullptr;
    int index;
    cout << "\tProduct Database\n\n";
    cout << "Enter a product number to search for: ";
    cin.getline(lookUp, LENGTH);
    for (index = 0; index < NUM_PRODS; index++)
    {
        strPtr = strstr(product[index], lookUp);
        if (strPtr != nullptr)
        break;
    }
    if (strPtr != nullptr)
        cout << product[index] << endl;
    else 
        cout << "No matching product was found.\n";

    return 0;
}