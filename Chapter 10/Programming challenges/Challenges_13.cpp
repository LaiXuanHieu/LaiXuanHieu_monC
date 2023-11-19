#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>

int main() {
    std::string inputDate;

    // Read the date from the user
    std::cout << "Enter a date (mm/dd/yyyy): ";
    std::cin >> inputDate;

    // Use stringstream to parse the input
    std::istringstream dateStream(inputDate);

    // Variables to store month, day, and year
    int month, day, year;

    // Read the month, day, and year from the stringstream
    char slash; // to consume the slashes in the input
    dateStream >> month >> slash >> day >> slash >> year;

    // Array of month names
    const char* monthNames[] = {"January", "February", "March", "April", "May", "June",
                                "July", "August", "September", "October", "November", "December"};

    // Check if the date is valid
    if (dateStream.fail()) {
        std::cerr << "Invalid date format. Please use mm/dd/yyyy." << std::endl;
        return 1;
    }

    // Check if the month is in a valid range
    if (month < 1 || month > 12) {
        std::cerr << "Invalid month. Please use a valid month (1-12)." << std::endl;
        return 1;
    }

    // Check if the day is in a valid range
    if (day < 1 || day > 31) {
        std::cerr << "Invalid day. Please use a valid day (1-31)." << std::endl;
        return 1;
    }

    // Print the formatted date
    std::cout << "Formatted date: " << monthNames[month - 1] << " " << day << ", " << year << std::endl;

    return 0;
}
