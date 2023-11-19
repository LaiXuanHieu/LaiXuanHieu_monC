#include <iostream>
#include <cstring>

// Function to count the number of vowels in a C-string
int countVowels(const char* str) {
    int count = 0;
    while (*str) {
        char currentChar = tolower(*str);
        if (currentChar == 'a' || currentChar == 'e' || currentChar == 'i' || currentChar == 'o' || currentChar == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

// Function to count the number of consonants in a C-string
int countConsonants(const char* str) {
    int count = 0;
    while (*str) {
        char currentChar = tolower(*str);
        if (isalpha(currentChar) && currentChar != 'a' && currentChar != 'e' && currentChar != 'i' && currentChar != 'o' && currentChar != 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char inputString[100];

    do {
        std::cout << "Enter a string: ";
        std::cin.getline(inputString, sizeof(inputString));

        std::cout << "Menu:\n";
        std::cout << "A) Count the number of vowels in the string\n";
        std::cout << "B) Count the number of consonants in the string\n";
        std::cout << "C) Count both the vowels and consonants in the string\n";
        std::cout << "D) Enter another string\n";
        std::cout << "E) Exit the program\n";

        char choice;
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(); // Clear the newline character from the buffer

        switch (choice) {
            case 'A':
                std::cout << "Number of vowels: " << countVowels(inputString) << std::endl;
                break;
            case 'B':
                std::cout << "Number of consonants: " << countConsonants(inputString) << std::endl;
                break;
            case 'C':
                std::cout << "Number of vowels: " << countVowels(inputString) << std::endl;
                std::cout << "Number of consonants: " << countConsonants(inputString) << std::endl;
                break;
            case 'D':
                // Continue the loop to enter another string
                break;
            case 'E':
                std::cout << "Exiting the program.\n";
                return 0;
            default:
                std::cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (true);

    return 0;
}
