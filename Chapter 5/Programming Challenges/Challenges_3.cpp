#include <iostream>
using namespace std;

void bang_tang_muc_nuoc_bien() {
    double ty_le = 1.5;  // Milimét mỗi năm
    cout << "Nam\tTang (mm)" << endl;
    cout << "----------------" << endl;
    for (int nam = 1; nam <= 25; nam++) {
        double tang = ty_le * nam;
        cout << nam << "\t" << fixed << tang << endl;
    }
}

int main() {
    bang_tang_muc_nuoc_bien();
    return 0;
}