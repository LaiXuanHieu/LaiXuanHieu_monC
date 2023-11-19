#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define the structure for soccer player data
struct SoccerPlayer {
    string playerName;
    int playerNumber;
    int pointsScored;
};

// Function to input data for a soccer player
void inputPlayerData(SoccerPlayer& player) {
    cout << "Enter player's name: ";
    getline(cin, player.playerName);

    cout << "Enter player's number: ";
    cin >> player.playerNumber;

    // Input validation for negative values
    while (player.playerNumber < 0) {
        cout << "Please enter a non-negative player number: ";
        cin >> player.playerNumber;
    }

    cout << "Enter points scored by player: ";
    cin >> player.pointsScored;

    // Input validation for negative values
    while (player.pointsScored < 0) {
        cout << "Please enter a non-negative points scored value: ";
        cin >> player.pointsScored;
    }

    // Clear input buffer
    cin.ignore();
}

int main() {
    const int NUM_PLAYERS = 12;
    SoccerPlayer team[NUM_PLAYERS];

    // Input data for each player
    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << "\nEnter data for player " << i + 1 << ":\n";
        inputPlayerData(team[i]);
    }

    // Display table with player information
    cout << "\nPlayer Information:\n";
    cout << setw(10) << "Number" << setw(20) << "Name" << setw(15) << "Points Scored\n";
    cout << "----------------------------------------------\n";

    int totalPoints = 0;
    int maxPoints = -1;
    string maxPlayer;

    for (int i = 0; i < NUM_PLAYERS; ++i) {
        cout << setw(10) << team[i].playerNumber << setw(20) << team[i].playerName
             << setw(15) << team[i].pointsScored << endl;

        totalPoints += team[i].pointsScored;

        if (team[i].pointsScored > maxPoints) {
            maxPoints = team[i].pointsScored;
            maxPlayer = team[i].playerName;
        }
    }

    // Display team total points and player with the most points
    cout << "\nTotal Points for the Team: " << totalPoints << endl;
    cout << "Player with the Most Points: " << maxPlayer << " (" << maxPoints << " points)\n";

    return 0;
}
