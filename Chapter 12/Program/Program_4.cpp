#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    const int ROWS = 3;
    const int COLS = 3;
    int nums[ROWS][COLS] = {3897, 5, 837,
                            34, 7, 1623,
                            390, 3456, 12};
    fstream outFile("table.txt", ios::out);
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            outFile << setw(8) << nums[row][col];
        }
        outFile << endl;
    }
    outFile.close();
    cout << "Done.\n";
    return 0;

}