#include <iostream>
#include <fstream>
#include <cctype>

int main() {
    std::ifstream inputFile("text.txt");

    if (!inputFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    char ch;
    int uppercaseCount = 0;
    int lowercaseCount = 0;
    int digitCount = 0;

    while (inputFile.get(ch)) {
        if (std::isupper(ch)) {
            uppercaseCount++;
        } else if (std::islower(ch)) {
            lowercaseCount++;
        } else if (std::isdigit(ch)) {
            digitCount++;
        }
    }

    std::cout << "Number of uppercase letters: " << uppercaseCount << std::endl;
    std::cout << "Number of lowercase letters: " << lowercaseCount << std::endl;
    std::cout << "Number of digits: " << digitCount << std::endl;

    inputFile.close();

    return 0;
}
