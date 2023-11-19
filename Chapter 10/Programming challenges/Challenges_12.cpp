#include <iostream>
#include <cctype>

bool isUppercase(char ch) {
    return std::isupper(ch);
}

bool isLowercase(char ch) {
    return std::islower(ch);
}

bool isDigit(char ch) {
    return std::isdigit(ch);
}

bool isValidPassword(const std::string& password) {
    // Check password length
    if (password.length() < 6) {
        std::cout << "Password should be at least six characters long." << std::endl;
        return false;
    }

    // Check for at least one uppercase letter
    bool hasUppercase = false;
    for (char ch : password) {
        if (isUppercase(ch)) {
            hasUppercase = true;
            break;
        }
    }

    if (!hasUppercase) {
        std::cout << "Password should contain at least one uppercase letter." << std::endl;
        return false;
    }

    // Check for at least one lowercase letter
    bool hasLowercase = false;
    for (char ch : password) {
        if (isLowercase(ch)) {
            hasLowercase = true;
            break;
        }
    }

    if (!hasLowercase) {
        std::cout << "Password should contain at least one lowercase letter." << std::endl;
        return false;
    }

    // Check for at least one digit
    bool hasDigit = false;
    for (char ch : password) {
        if (isDigit(ch)) {
            hasDigit = true;
            break;
        }
    }

    if (!hasDigit) {
        std::cout << "Password should have at least one digit." << std::endl;
        return false;
    }

    // If all criteria are met
    return true;
}

int main() {
    std::string password;

    std::cout << "Enter your password: ";
    std::cin >> password;

    if (isValidPassword(password)) {
        std::cout << "Password is valid. Welcome!" << std::endl;
    } else {
        std::cout << "Password does not meet the criteria. Please try again." << std::endl;
    }

    return 0;
}
