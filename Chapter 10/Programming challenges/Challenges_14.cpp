#include <iostream>
#include <cctype>

int main() {
    std::string inputSentence;

    // Read the sentence from the user
    std::cout << "Enter a sentence with words run together: ";
    std::getline(std::cin, inputSentence);

    // Process the input to separate words
    std::string separatedSentence;
    bool newWord = true; // Flag to track the start of a new word

    for (char ch : inputSentence) {
        if (std::isupper(ch)) {
            // Convert uppercase to lowercase (except for the first letter of a new word)
            if (!newWord) {
                ch = std::tolower(ch);
            }
            newWord = false;
        } else if (std::isspace(ch)) {
            // Mark the start of a new word when a space is encountered
            newWord = true;
        }

        separatedSentence += ch;
    }

    // Print the separated sentence
    std::cout << "Separated sentence: " << separatedSentence << std::endl;

    return 0;
}
