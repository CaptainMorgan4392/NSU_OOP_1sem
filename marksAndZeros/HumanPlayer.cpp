#include "HumanPlayer.h"
#include "ImpossibleMoveException.h"
#include <iostream>

std::pair <int, int> HumanPlayer::doMove() {
    int first, second;

    bool moveDone = false;

    while (!moveDone) {
        std::cout << "Input your move in format: \"<numberLine> <numberColumn>\": ";
        std::cin >> first >> second;
        try {
            if (first < 1 || first > 3 || second < 1 || second > 3) {
                throw ImpossibleMoveException();
            }
        } catch (ImpossibleMoveException &ex) {
            std::cerr << ex.what() << std::endl;
            continue;
        }

        moveDone = true;
    }

    std::pair <int, int> move {first - 1, second - 1};
    return move;
}

