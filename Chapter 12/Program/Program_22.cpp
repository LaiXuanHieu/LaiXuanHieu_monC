#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;

struct InventoryItem {
    char desc[DESC_SIZE];
    int qty;
    double price;
};
int main()
{
    InventoryItem record;
    long recNum;
    fstream inventory("Inventory.dat",
                        ios::in | ios:: out | ios::binary);
    cout << "Which record do you want to edit?";
    cin >> recNum;
    inventory.read(reinterpret_cast<char *>(&record),
                    sizeof(record));
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "price: ";
    cout << record.price << endl;
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;
    inventory.seekp(recNum * sizeof(record), ios::beg);
    inventory.write(reinterpret_cast<char *>(&record),
                    sizeof(record));
    inventory.close();
    return 0;
}