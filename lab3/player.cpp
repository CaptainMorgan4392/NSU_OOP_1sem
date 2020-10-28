#include "session.h"
#include "ForbiddenChoice.h"

Session::CurrentMove Session::Player::doMove() {
    std::cout << "Enter number of line: ";
    int line;
    std::cin >> line;
    std::cout << "Enter number of column: ";
    int col;
    std::cin >> col;

    CurrentMove curMove {line, col};
    return curMove;
}

void Session::Player::chooseSign() {
    char chosenSign;
    while (true) {
        std::cout << "Choose your sign: ";
        std::cin >> chosenSign;
        try {
            switch (chosenSign) {
                case 'x':
                case 'o':
                    sign = chosenSign;
                    return;
                default:
                    throw ForbiddenChoiceException();
            }
        } catch (ForbiddenChoiceException& ex) {
            std::cout << ex.what() << std::endl;
            continue;
        }
    }
}