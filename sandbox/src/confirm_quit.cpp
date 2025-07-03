#include "confirm_quit.h"
#include "utility.h"

#include <iostream>
#include <bits/ostream.tcc>

bool confirm_quit() {
    for (;;) {
        std::cout << std::endl;
        std::cout << "Are you sure you want to quit?" << std::endl;
        std::cout << "[Y]es" << std::endl;
        std::cout << "[N]o" << std::endl;
        std::string input;
        std::getline(std::cin, input);
        if (input == "y" || input == "Y") {
            return true;
        }
        if (input == "n" || input == "N") {
            return false;
        }
        Utility::invalidInput();
    }
}
