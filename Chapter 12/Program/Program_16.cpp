#include <iostream>
#include <fstream>
using namespace std;

const  int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};
int main(){
    Info person;
    char again; 
    fstream people; 
    people.open("people.dat", ios::in | ios::binary);
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }
    cout << "Here are the people in the file:\n\n";
    people.read(reinterpret_cast<char *>(&person),
                sizeof(person));
    while (!people.eof())
    {
        cout << "Name: ";
        cout << person.name << endl;
        cout << "Age: ";
        cout << person.age << endl;
        cout << "Address line 1: ";
        cout << person.address1 << endl;
        cout << "Address line 2: ";
        cout << person.address2 << endl;
        cout << "Phone: ";
        cout << person.phone << endl;
        cout << "\nPress the Enter key to see the next record.\n";
        cin.get(again);
        people.read(reinterpret_cast<char *>(&person),
                    sizeof(person)); 
    }
    cout << "That's all the data in the file!\n";
    people.close(); 
    return 0;
    

}