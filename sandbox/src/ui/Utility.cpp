#include <ui/Utility.h>

#include <iostream>
#include <bits/ostream.tcc>

void Utility::invalidInput() {
    Utility::writeLine("Invalid input!");
}

void Utility::blankLine() {
    std::cout << std::endl;
}

void Utility::writeLine(const std::string& message) {
    std::cout << message << std::endl;
}

int Utility::readCharacter() {
    std::string input;
    std::getline(std::cin, input);
    return std::tolower(input[0]);
}
