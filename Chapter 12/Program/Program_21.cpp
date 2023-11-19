#include <iostream>
#include <fstream>
using namespace std;
const int DESC_SIZE = 31;
struct InventoryItem {
    char desc[DESC_SIZE];
    int qty;
    double price;
};
int main(){
    InventoryItem record;
    fstream inventory("Inventory.dat", ios::in | ios::binary);

    inventory.read(reinterpret_cast<char *>(&record),
                    sizeof(record));
    while (!inventory.eof())
    {
        cout << "Description: ";
        cout << record.desc << endl;
        cout << "Quantity: ";
        cout << record.qty << endl;
        cout << "Price: ";
        cout << record.price << endl << endl;
        inventory.read(reinterpret_cast<char *>(&record), 
                        sizeof(record));
    }
    inventory.close();
    return 0;
}