#include <iostream>
#include <fstream>
using namespace std;
const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;
struct Info
{
    char name[NAME_SIZE]; 
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE]; 
    char phone[PHONE_SIZE];

};
long byteNum(int);
void showRec(Info);
int main(){
    Info person;
    fstream people;
    people.open("people.dat", ios::in | ios::binary);
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }
    cout << "Here is record 1:\n";
    people.seekg(byteNum(1), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person); 
    cout << "\nHere is record 0:\n"; 
    people.seekg(byteNum(0), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof(person));
    showRec(person);
    people.close();
    return 0;
}
long byteNum(int recNum)
{
    return sizeof(Info) * recNum;
}
void showRec(Info record) 
{
    cout << "Name: ";
    cout << record.name << endl;
    cout << "Age: ";
    cout << record.age << endl;
    cout << "Address line 1: ";
    cout << record.address1 << endl;
    cout << "Address line 2: ";
    cout << record.address2 << endl;
    cout <<"Phone: ";
    cout << record.phone << endl;

}