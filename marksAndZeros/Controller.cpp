#include "Controller.h"
#include <iostream>

bool Controller::updateRequest(std::pair<int, int> move, Model* model, char sign) {
    try {
        if (!model -> isFree(move.first, move.second)) {
            throw ImpossibleMoveException();
        }
    } catch (ImpossibleMoveException &ex) {
        std::cerr << ex.what() << std::endl;
        return false;
    }

    model -> field[move.first][move.second] = sign;
    return true;
}
