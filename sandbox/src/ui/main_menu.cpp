#include <iostream>
#include "ui/confirm_quit.h"
#include "ui/main_menu.h"

#include "ui/utility.h"

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
