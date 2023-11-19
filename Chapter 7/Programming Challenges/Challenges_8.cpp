#include <iostream>
using namespace std;

const int SIZE = 3;

bool isMagicSquare(int grid[SIZE][SIZE]) {
    int magicSum = 15; // Tổng các hàng, cột và đường chéo

    // Kiểm tra hàng
    for(int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        for(int j = 0; j < SIZE; j++) {
            rowSum += grid[i][j];
        }
        if(rowSum != magicSum) return false;
    }

    // Kiểm tra cột
    for(int j = 0; j < SIZE; j++) {
        int colSum = 0;
        for(int i = 0; i < SIZE; i++) {
            colSum += grid[i][j];
        }
        if(colSum != magicSum) return false;
    }

    // Kiểm tra đường chéo
    int diagSum1 = 0;
    int diagSum2 = 0;
    for(int i = 0; i < SIZE; i++) {
        diagSum1 += grid[i][i];
        diagSum2 += grid[i][SIZE - 1 - i];
    }

    return (diagSum1 == magicSum && diagSum2 == magicSum);
}

int main() {
    int grid1[SIZE][SIZE] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};
    int grid2[SIZE][SIZE] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 5}};

    if(isMagicSquare(grid1)) {
        cout << "grid1 là một ma trận kỳ diệu Lo Shu" << endl;
    } else {
        cout << "grid1 không phải là ma trận kỳ diệu Lo Shu" << endl;
    }

    if(isMagicSquare(grid2)) {
        cout << "grid2 là một ma trận kỳ diệu Lo Shu" << endl;
    } else {
        cout << "grid2 không phải là ma trận kỳ diệu Lo Shu" << endl;
    }

    return 0;
}