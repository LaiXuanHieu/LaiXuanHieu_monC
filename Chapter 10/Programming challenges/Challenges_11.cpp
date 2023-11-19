#include <iostream>
#include <cstring>

// Function to convert characters in a C-string to uppercase
void upper(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = std::toupper(str[i]);
    }
}

// Function to convert characters in a C-string to lowercase
void lower(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        str[i] = std::tolower(str[i]);
    }
}

// Function to reverse the case of characters in a C-string
void reverse(char* str) {
    for (int i = 0; str[i] != '\0'; ++i) {
        if (std::islower(str[i])) {
            str[i] = std::toupper(str[i]);
        } else if (std::isupper(str[i])) {
            str[i] = std::tolower(str[i]);
        }
    }
}

int main() {
    const int SIZE = 100;
    char inputString[SIZE];

    std::cout << "Enter a string: ";
    std::cin.getline(inputString, SIZE);

    // Reverse the case
    reverse(inputString);
    std::cout << "After reversing the case: " << inputString << std::endl;

    // Convert to lowercase
    lower(inputString);
    std::cout << "After converting to lowercase: " << inputString << std::endl;

    // Convert to uppercase
    upper(inputString);
    std::cout << "After converting to uppercase: " << inputString << std::endl;

    return 0;
}
