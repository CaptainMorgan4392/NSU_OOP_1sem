#include "session.h"

bool Session::Controller::checkMove(Session::CurrentMove move, Model curModel) {
    bool firstCond = 1 <= move.line && move.line <= 3;
    bool secondCond = 1 <= move.column && move.column <= 3;
    bool thirdCond = curModel.field[move.line - 1][move.column - 1] == ' ';

    return firstCond && secondCond && thirdCond;
}
