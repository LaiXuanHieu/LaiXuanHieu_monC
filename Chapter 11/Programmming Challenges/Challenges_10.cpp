#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define the structure for speaker data
struct Speaker {
    string name;
    string phoneNumber;
    string speakingTopic;
    double feeRequired;
};

// Function to input data for a speaker
void inputSpeakerData(Speaker& speaker) {
    cin.ignore(); // Clear input buffer

    cout << "Enter speaker name: ";
    getline(cin, speaker.name);

    cout << "Enter speaker telephone number: ";
    getline(cin, speaker.phoneNumber);

    cout << "Enter speaking topic: ";
    getline(cin, speaker.speakingTopic);

    cout << "Enter fee required: $";
    cin >> speaker.feeRequired;

    // Input validation for negative fee
    while (speaker.feeRequired < 0) {
        cout << "Please enter a non-negative fee: $";
        cin >> speaker.feeRequired;
    }
}

// Function to display speaker data
void displaySpeakerData(const Speaker& speaker) {
    cout << "\nSpeaker Name: " << speaker.name << endl;
    cout << "Telephone Number: " << speaker.phoneNumber << endl;
    cout << "Speaking Topic: " << speaker.speakingTopic << endl;
    cout << fixed << setprecision(2);
    cout << "Fee Required: $" << speaker.feeRequired << endl;
    cout << "----------------------------------------------\n";
}

// Function to search for a speaker by speaking topic
void searchByTopic(const Speaker speakers[], int size, const string& searchTerm) {
    bool found = false;

    for (int i = 0; i < size; ++i) {
        // Case-insensitive search
        size_t foundPos = speakers[i].speakingTopic.find(searchTerm, 0, searchTerm.length());
        if (foundPos != string::npos) {
            displaySpeakerData(speakers[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "No speakers found for the topic '" << searchTerm << "'.\n";
    }
}

int main() {
    const int NUM_SPEAKERS = 10;
    Speaker speakers[NUM_SPEAKERS];

    int choice;

    do {
        // Display menu
        cout << "\nSpeakers' Bureau Menu:\n";
        cout << "1. Enter speaker data\n";
        cout << "2. Change speaker data\n";
        cout << "3. Display all speaker data\n";
        cout << "4. Search for speaker by topic\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1: {
                // Input data for a new speaker
                Speaker newSpeaker;
                cout << "\nEnter data for a new speaker:\n";
                inputSpeakerData(newSpeaker);

                // Find the first empty slot in the array
                for (int i = 0; i < NUM_SPEAKERS; ++i) {
                    if (speakers[i].name.empty()) {
                        speakers[i] = newSpeaker;
                        break;
                    }
                }
                break;
            }
            case 2:
                // Change contents of an element
                int index;
                cout << "\nEnter the index of the speaker to change (0-9): ";
                cin >> index;

                // Input validation for index
                while (index < 0 || index >= NUM_SPEAKERS || speakers[index].name.empty()) {
                    cout << "Invalid index or empty slot. Please enter a valid index (0-9): ";
                    cin >> index;
                }

                cout << "\nEnter new data for the speaker:\n";
                inputSpeakerData(speakers[index]);
                break;
            case 3:
                // Display all speaker data
                cout << "\nAll Speaker Data:\n";
                for (int i = 0; i < NUM_SPEAKERS; ++i) {
                    if (!speakers[i].name.empty()) {
                        displaySpeakerData(speakers[i]);
                    }
                }
                break;
            case 4:
                // Search for speaker by topic
                string searchTerm;
                cout << "Enter part of the speaking topic to search: ";
                cin.ignore(); // Clear input buffer
                getline(cin, searchTerm);
                searchByTopic(speakers, NUM_SPEAKERS, searchTerm);
                break;
            case 5:
                // Exit the program
                cout << "Exiting the program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid choice (1-5).\n";
        }
    } while (choice != 5);

    return 0;
}
