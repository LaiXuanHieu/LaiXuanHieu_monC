#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Define the structure for customer account data
struct CustomerAccount {
    string name;
    string address;
    string cityStateZIP;
    string telephoneNumber;
    double accountBalance;
    string dateLastPayment;
};

// Function to input data for a customer account
void inputAccountData(CustomerAccount& account) {
    cin.ignore(); // Clear input buffer

    cout << "Enter customer name: ";
    getline(cin, account.name);

    cout << "Enter customer address: ";
    getline(cin, account.address);

    cout << "Enter city, state, and ZIP: ";
    getline(cin, account.cityStateZIP);

    cout << "Enter customer telephone number: ";
    getline(cin, account.telephoneNumber);

    cout << "Enter account balance: $";
    cin >> account.accountBalance;

    // Input validation for negative account balance
    while (account.accountBalance < 0) {
        cout << "Please enter a non-negative account balance: $";
        cin >> account.accountBalance;
    }

    cout << "Enter date of last payment: ";
    cin.ignore(); // Clear input buffer
    getline(cin, account.dateLastPayment);
}

// Function to display customer account data
void displayAccountData(const CustomerAccount& account) {
    cout << "\nCustomer Name: " << account.name << endl;
    cout << "Customer Address: " << account.address << endl;
    cout << "City, State, ZIP: " << account.cityStateZIP << endl;
    cout << "Telephone Number: " << account.telephoneNumber << endl;
    cout << fixed << setprecision(2);
    cout << "Account Balance: $" << account.accountBalance << endl;
    cout << "Date of Last Payment: " << account.dateLastPayment << endl;
    cout << "----------------------------------------------\n";
}

// Function to search for a customer by name
void searchByName(const CustomerAccount accounts[], int size, const string& searchTerm) {
    bool found = false;

    for (int i = 0; i < size; ++i) {
        // Case-insensitive search
        size_t foundPos = accounts[i].name.find(searchTerm, 0, searchTerm.length());
        if (foundPos != string::npos) {
            displayAccountData(accounts[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "No matching accounts found for '" << searchTerm << "'.\n";
    }
}

int main() {
    const int NUM_ACCOUNTS = 10;
    CustomerAccount accounts[NUM_ACCOUNTS];

    int choice;

    do {
        // Display menu
        cout << "\nCustomer Accounts Menu:\n";
        cout << "1. Enter customer data\n";
        cout << "2. Change customer data\n";
        cout << "3. Display all customer data\n";
        cout << "4. Search for customer by name\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        cin.ignore(); // Clear input buffer

        switch (choice) {
            case 1: {
                // Input data for a new customer account
                CustomerAccount newAccount;
                cout << "\nEnter data for a new customer account:\n";
                inputAccountData(newAccount);
                accounts[NUM_ACCOUNTS - 1] = newAccount;
                break;
            }
            case 2:
                // Change contents of an element
                int index;
                cout << "\nEnter the index of the account to change (0-9): ";
                cin >> index;

                // Input validation for index
                while (index < 0 || index >= NUM_ACCOUNTS) {
                    cout << "Invalid index. Please enter a valid index (0-9): ";
                    cin >> index;
                }

                cout << "\nEnter new data for the customer account:\n";
                inputAccountData(accounts[index]);
                break;
            case 3:
                // Display all customer data
                cout << "\nAll Customer Accounts:\n";
                for (int i = 0; i < NUM_ACCOUNTS; ++i) {
                    displayAccountData(accounts[i]);
                }
                break;
            case 4:
                // Search for customer by name
                string searchTerm;
                cout << "Enter part of the customer's name to search: ";
                cin.ignore(); // Clear input buffer
                getline(cin, searchTerm);
                searchByName(accounts, NUM_ACCOUNTS, searchTerm);
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
