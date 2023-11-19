#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main(){
    const int INPUT_SIZE = 81;
    const int NAME_SIZE = 30;
    char input[INPUT_SIZE];
    char name[NAME_SIZE];
    int idNumber;
    int age;
    double income;
    cout << "What is your ID number?" << endl;
    cin.getline(input, INPUT_SIZE);
    idNumber = atoi(input);
    cout << "What is your name?" << endl;
    cin.getline(name, NAME_SIZE);
    cout << "How old are you?";
    cin.getline(input, INPUT_SIZE);
    age = atoi(input);
    cout << "What is your annual income?";
    cin.getline(input, INPUT_SIZE);
    income = atof(input);

    cout << setprecision(2) << fixed << showpoint;
    cout << "Your name is " << name
        << ", you are " << age
        << " years old, \nand you make $"
        << income << "per year.\n";
    return 0;
}