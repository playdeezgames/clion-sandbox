#include <ui/ConfirmState.h>
#include <ui/Utility.h>

bool ConfirmState::run(const std::string& prompt) {
    for (;;) {
        Utility::blankLine();
        Utility::writeLine(prompt);
        Utility::writeLine("[Y]es");
        Utility::writeLine("[N]o");
        switch (Utility::readCharacter()) {
            case 'y':
                return true;
            case 'n':
                return false;
            default:
                Utility::invalidInput();
        }
    }
}
