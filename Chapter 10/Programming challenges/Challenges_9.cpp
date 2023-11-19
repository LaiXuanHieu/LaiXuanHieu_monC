
#include <iostream>
#include <cstring>
#include <unordered_map>

// Function to find the most frequent character
char findMostFrequentChar(const char* str) {
    if (!str || !*str) {
        // Handle empty string or null pointer
        return '\0';
    }

    std::unordered_map<char, int> charCount;

    // Count the occurrences of each character
    while (*str) {
        charCount[*str]++;
        str++;
    }

    // Find the character with the maximum count
    char mostFrequentChar = '\0';
    int maxCount = 0;

    for (const auto& pair : charCount) {
        if (pair.second > maxCount) {
            mostFrequentChar = pair.first;
            maxCount = pair.second;
        }
    }

    return mostFrequentChar;
}

int main() {
    const char* cString = "hello world";
    std::string cppString = "programming";

    char mostFrequent1 = findMostFrequentChar(cString);
    char mostFrequent2 = findMostFrequentChar(cppString.c_str());

    std::cout << "Most frequent character in C-string: " << mostFrequent1 << std::endl;
    std::cout << "Most frequent character in string object: " << mostFrequent2 << std::endl;

    return 0;
}
