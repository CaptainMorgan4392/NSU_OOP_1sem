#include "session.h"

void Session::Model::fillTable() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            field[i][j] = ' ';
        }
    }
}

std::pair <char, int> checkLines(char field[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (field[i][0] == field[i][1] && field[i][1] == field[i][2] && field[i][0] != ' ') {
            return {field[i][0], i + 1};
        }
    }

    return {'\0', -1};
}

std::pair <char, int> checkColumns(char field[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (field[0][i] == field[1][i] && field[1][i] == field[2][i] && field[0][i] != ' ') {
            return {field[0][i], i + 1};
        }
    }

    return {'\0', -1};
}

std::pair <char, int> checkDiagonals(char field[3][3]) {
    if (field[0][0] == field[1][1] && field[1][1] == field[2][2] && field[0][0] != ' ') {
        return {field[0][0], 1};
    }

    if (field[2][0] == field[1][1] && field[1][1] == field[0][2] && field[0][2] != ' ') {
        return {field[2][0], 2};
    }

    return {'\0', -1};
}

bool Session::Model::isEndOfGame() {
    std::pair <char, int> potentialLine = checkLines(field);
    std::pair <char, int> potentialColumn = checkColumns(field);
    std::pair <char, int> potentialDiagonal = checkDiagonals(field);

    if (potentialLine.second > -1) {
        std::cout << "The winner is: " << potentialLine.first;
        return true;
    } else if (potentialColumn.second > -1) {
        std::cout << "The winner is: " << potentialColumn.first;
        return true;
    } else if (potentialDiagonal.second > -1) {
        std::cout << "The winner is: " << potentialDiagonal.first;
        return true;
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (field[i][j] == ' ') {
                return false;
            }
        }
    }

    std::cout << "It's a draw!";
    return true;
}

void Session::Model::update(Session::CurrentMove move, char sign) {
    field[move.line - 1][move.column - 1] = sign;
}
