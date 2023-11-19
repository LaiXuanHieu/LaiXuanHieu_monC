#include <iostream>
#include <fstream>
using namespace std;
int main(){
    char ch;
    fstream dataFile("sentence.txt", ios::out);
    cout << "Type a sentence and be sure to end it with a ";
    cout << "period.\n";
    cin.get(ch);
    while (ch != '.')
    {
        dataFile.put(ch); 
        cin.get(ch); 
    }
    dataFile.put(ch);
    dataFile.close();
    return 0;

}