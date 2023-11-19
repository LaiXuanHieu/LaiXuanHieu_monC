#include <iostream>
#include <string>

// Function to replace all occurrences of string2 with string3 in string1
std::string replaceSubstring(const std::string& string1, const std::string& string2, const std::string& string3) {
    std::string result = string1;
    size_t position = result.find(string2);

    while (position != std::string::npos) {
        result.replace(position, string2.length(), string3);
        position = result.find(string2, position + string3.length());
    }

    return result;
}

int main() {
    std::string originalString = "the dog jumped over the fence";
    std::string substringToReplace = "the";
    std::string replacementSubstring = "that";

    std::string modifiedString = replaceSubstring(originalString, substringToReplace, replacementSubstring);

    std::cout << "Original String: " << originalString << std::endl;
    std::cout << "Modified String: " << modifiedString << std::endl;

    return 0;
}
