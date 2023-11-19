#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Student
{
    string name;
    int idNum;
    int creditHours;
    double gpa;
};
void getData(Student *);

int main()
{
    Student freshman;
    cout << "Enter the following student data:\n";
    getData(&freshman);
    cout << "\nHere is the student data you entered:\n";
    cout << setprecision(3);
    cout << "Name: " << freshman.name << endl;
    cout << "ID Number: " << freshman.idNum << endl;
    cout << "Credit Hours: " << freshman.creditHours << endl;
    cout << "GPA: " << freshman.gpa << endl;
    return 0;
}
void getData(Student *s)
{
    cout << "Student name: ";
    getline(cin, s->name);
    cout << "Student ID Number:";
    cin >> s->idNum;
    cout << "Credit Hours Enrolled: ";
    cin >> s->creditHours;
    cout << "Current GPA: ";
    cin >> s->gpa;
}