#include <iostream>
#include <string>
using namespace std;
struct Date
{
    int month;
    int day;
    int year;

};
struct Place
{
    string address;
    string city;
    string state;
    string zip;
};
struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate;
    Place residence;
};
int main()
{
    EmployeeInfo manager;
    cout << "Enter the manager's name:";
    getline(cin, manager.name);
    cout << "Enter the manager's employee number:";
    cin >> manager.employeeNumber;
    cout << "Now enter th manager's date of birth.\n";
    cout << "Month (up to 2 digits):";
    cin >> manager.birthDate.month;
    cout << " Day (up to 2 digits):";
    cin >> manager.birthDate.day;
    cout << "Year:";
    cin >> manager.birthDate.year;
    cin.ignore();
    cout << "Enter the manager's street address: ";
    getline(cin, manager.residence.address);
    cout << "City: ";
    getline(cin, manager.residence.city);
    cout << "State: ";
    getline(cin, manager.residence.state);
    cout << "ZIP Code: ";
    getline(cin, manager.residence.zip);
    cout << "\nHere is the manager's information:\n";
    cout << manager.name << endl;
    cout << "Employee number " << manager.employeeNumber << endl;
    cout << "Date of birth: ";
    cout << manager.birthDate.month << "-";
    cout << manager.birthDate.day << "-";
    cout << manager.birthDate.year << endl;
    cout << "Place of residence:\n";
    cout << manager.residence.address << endl;
    cout << manager.residence.city << ", ";
    cout << manager.residence.state << " ";
    cout << manager.residence.zip << endl;
    return 0;
}