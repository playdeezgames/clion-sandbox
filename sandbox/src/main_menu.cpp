#include <iostream>
#include "confirm_quit.h"
#include "main_menu.h"

#include "utility.h"

void main_menu() {
    for (;;)    {
        std::cout << std::endl;
        std::cout << "Main Menu:" << std::endl;
        std::cout << "[Q]uit" << std::endl;
        std::string input;
        std::getline(std::cin, input);
        if (input == "q" || input == "Q") {
            if (confirm_quit()) {
                break;
            }
            continue;
        } else {
            Utility::invalidInput();
        }
    }
}
