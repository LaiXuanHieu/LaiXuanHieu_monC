#include <iostream>
#include <string>
using namespace std;
// Định nghĩa cấu trúc MovieData
struct MovieData {
    string title;
    string director;
    int releaseYear;
    int runningTime;
};

// Chức năng hiển thị thông tin về bộ phim
void displayMovieInfo(const MovieData& movie) {
    cout << "Tieu đe: " << movie.title << endl;
    cout << "Giam đoc: " << movie.director << endl;
    cout << "Nam phat hanh: " << movie.releaseYear << endl;
    cout << "Thoi gian chay: " << movie.runningTime << " phút" << std::endl;
    cout << endl;
}

int main() {
    // Tạo hai biến MovieData và gán giá trị cho chúng
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142};

    // Hiển thị thông tin về bộ phim
    cout << "Thong tin ve bo phim 1:\n";
    displayMovieInfo(movie1);

    cout << "Thong tin ve bo phim 2:\n";
    displayMovieInfo(movie2);

    return 0;
}
