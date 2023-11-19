#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int generateComputerChoice()
{
    return (rand() % 3) + 1;
}

int getUserChoice()
{
    int choice;
    cout << "Chọn lựa:\n";
    cout << "1. Búa\n";
    cout << "2. Kéo\n";
    cout << "3. Giấy\n";
    cin >> choice;
    return choice;
}

int determineWinner(int userChoice, int computerChoice)
{
    if (userChoice == computerChoice)
    {
        return 0;
    }
    else if (
        (userChoice == 1 && computerChoice == 3) ||
        (userChoice == 2 && computerChoice == 1) ||
        (userChoice == 3 && computerChoice == 2))
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

int main()
{
    srand(static_cast<unsigned>(time(0)));

    int userChoice, computerChoice, winner;

    cout << "Chơi Trò Chọn Búa, Kéo, Giấy!" << endl;

    do {
        computerChoice = generateComputerChoice();
        userChoice = getUserChoice();

        cout << "Bạn đã chọn ";
        switch (userChoice)
        {
        case 1:
            cout << "Búa";
            break;
        case 2:
            cout << "Kéo";
            break;
        case 3:
            cout << "Giấy";
            break;
        default:
            cout << "Lựa chọn không hợp lệ";
            return 1;
        }

        cout << " và máy tính đã chọn ";
        switch (computerChoice)
        {
        case 1:
            cout << "Búa";
            break;
        case 2:
            cout << "Kéo";
            break;
        case 3:
            cout << "Giấy";
            break;
        }

        winner = determineWinner(userChoice, computerChoice);

        if (winner == 0)
        {
            cout << "\nHòa! Chơi lại." << endl;
        }
        else if (winner == 1)
        {
            cout << "\nBạn thắng!" << endl;
        }
        else
        {
            cout << "\nMáy tính thắng!" << endl;
        }
    } while (winner == 0);

    return 0;
}
