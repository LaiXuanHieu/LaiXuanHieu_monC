#include <iostream>
#include <string>
using namespace std;
// Định nghĩa cấu trúc MovieData
struct MovieData {
    string title;
    string director;
    int releaseYear;
    int runningTime;
    double productionCost;
    double firstYearRevenue;
};

// Chức năng hiển thị thông tin về bộ phim, bao gồm lãi lỗ năm đầu tiên
void displayMovieInfo(const MovieData& movie) {
    cout << "Tieu đe: " << movie.title << endl;
    cout << "Giam doc: " << movie.director << endl;
    cout << "Nam phat hanh: " << movie.releaseYear << endl;
    cout << "Thoi gian chay: " << movie.runningTime << " phut" << endl;
    cout << "Chi phi san xuat: $" << movie.productionCost << endl;
    cout << "Doanh thu nam dau tien: $" << movie.firstYearRevenue << endl;

    // Tính lãi lỗ năm đầu tiên
    double profitLoss = movie.firstYearRevenue - movie.productionCost;
    cout << "Lai lo nam dau tien: $" << profitLoss << endl;

    cout << endl;
}

int main() {
    // Tạo hai biến MovieData và gán giá trị cho chúng
    MovieData movie1 = {"Inception", "Christopher Nolan", 2010, 148, 160000000, 825500000};
    MovieData movie2 = {"The Shawshank Redemption", "Frank Darabont", 1994, 142, 25000000, 58900000};

    // Hiển thị thông tin về bộ phim bao gồm lãi lỗ năm đầu tiên
    cout << "Thong tin ve bo phim 1:\n";
    displayMovieInfo(movie1);

    cout << "Thong tin ve bo phim 2:\n";
    displayMovieInfo(movie2);

    return 0;
}
