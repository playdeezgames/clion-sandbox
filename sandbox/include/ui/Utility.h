#pragma once
#include <string>

class Utility {
public:
    static void blankLine();
    static void invalidInput();
    static void writeLine(const std::string& message);
    static int readCharacter();
};
