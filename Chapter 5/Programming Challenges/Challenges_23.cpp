#include <iostream>
using namespace std;

int main() {
    // Mẫu A
    cout << "Mẫu A:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Mẫu B
    cout << "\nMẫu B:" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}