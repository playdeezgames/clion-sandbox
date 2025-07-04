#include "ui/GameMenuState.h"

#include "ui/ConfirmState.h"
#include "ui/Utility.h"

void GameMenuState::run(const World &world) {
    for (;;)    {
        Utility::blankLine();
        Utility::writeLine("Game Menu:");
        Utility::writeLine("[C]ontinue Game");
        Utility::writeLine("[A]bandon Game");
        switch (Utility::readCharacter()) {
            case 'c':
                return;
            case 'a':
                if (ConfirmState::run("Are you sure you want to abandon the game?")) {
                    world.abandon();
                    return;
                }
                break;
            default:
                Utility::invalidInput();
                break;
        }
    }
}