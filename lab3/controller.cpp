#include "Context.h"
#include <iostream>

void Controller::updateRequest(std::pair<int, int> move, Model* model) {
    try {
        model -> setTo(move.first, move.second);
    } catch (ImpossibleMoveException &ex) {
        std::cerr << ex.what() << std::endl;
    }
}
