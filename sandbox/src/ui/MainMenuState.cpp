#include <iostream>
#include <ui/ConfirmState.h>
#include <ui/MainMenuState.h>
#include <ui/Utility.h>
#include <ui/EmbarkState.h>

void MainMenuState::run() {
    for (;;)    {
        Utility::blankLine();
        Utility::writeLine("Main Menu:");
        Utility::writeLine("[E]mbark");
        Utility::writeLine("[Q]uit");
        switch (Utility::readCharacter()) {
            case 'q':
                if (ConfirmState::run("Are you sure you want to quit?")) {
                    return;
                }
                break;
            case 'e':
                EmbarkState::run();
                break;
            default:
                Utility::invalidInput();
                break;
        }
    }
}
