#include "ui/NavigationState.h"
#include "ui/GameMenuState.h"
#include "ui/Utility.h"

void NavigationState::run(const World& world) {
    Utility::blankLine();
    Utility::writeLine("Yer playin' the game!");
    switch (    Utility::readCharacter()) {
        case 'm':
            GameMenuState::run(world);
            break;
        default:
            Utility::invalidInput();
    }
}
