#include "session.h"
#include <vector>

enum Danger {
    LINE_1,
    LINE_2,
    LINE_3,
    COLUMN_1,
    COLUMN_2,
    COLUMN_3,
    DIAGONAL_1,
    DIAGONAL_2,
    NO_DANGER
};

Danger searchForDanger(char field[3][3], char friendSign) {
    char oppositeSign = (friendSign == 'x' ? 'o' : 'x');

    std::vector <std::pair <int, int> > oppositeFields;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (field[i][j] == oppositeSign) {
                oppositeFields.push_back({i, j});
            }
        }
    }

    for (int i = 0; i < oppositeFields.size(); i++) {
        for (int j = i + 1; j < oppositeFields.size(); j++) {
            if (oppositeFields[i].first == oppositeFields[j].first) {
                for (int k = 0; k < 3; k++) {
                    if (field[oppositeFields[i].first][k] == oppositeSign) {
                        continue;
                    } else if (field[oppositeFields[i].first][k] == ' ') {
                        switch (oppositeFields[i].first) {
                            case 0:
                                return LINE_1;
                            case 1:
                                return LINE_2;
                            case 2:
                                return LINE_3;
                            default:
                                return NO_DANGER;
                        }
                    } else {
                        break;
                    }
                }
            } else if (oppositeFields[i].second == oppositeFields[j].second) {
                for (int k = 0; k < 3; k++) {
                    if (field[k][oppositeFields[i].second] == oppositeSign) {
                        continue;
                    } else if (field[k][oppositeFields[i].second] == ' ') {
                        switch (oppositeFields[i].second) {
                            case 0:
                                return COLUMN_1;
                            case 1:
                                return COLUMN_2;
                            case 2:
                                return COLUMN_3;
                            default:
                                return NO_DANGER;
                        }
                    } else {
                        break;
                    }
                }
            } else if (oppositeFields[i].first == oppositeFields[i].second && oppositeFields[j].first == oppositeFields[j].second) {
                for (int k = 0; k < 3; k++) {
                    if (field[k][k] == oppositeSign) {
                        continue;
                    } else if (field[k][k] == ' ') {
                        return DIAGONAL_1;
                    } else {
                        break;
                    }
                }
            } else if (oppositeFields[i].first == 2 - oppositeFields[i].second && oppositeFields[j].first == 2 - oppositeFields[j].second) {
                for (int k = 0; k < 3; k++) {
                    if (field[k][2 - k] == oppositeSign) {
                        continue;
                    } else if (field[k][2 - k] == ' ') {
                        return DIAGONAL_2;
                    } else {
                        break;
                    }
                }
            }
        }
    }

    return NO_DANGER;
}

std::pair <int, int> searchForPossibilities(char field[3][3], char friendSign) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (field[i][j] == ' ') {
                return {i + 1, j + 1};
            }
        }
    }
    return {-1, -1};
}

Session::CurrentMove Session::BotPlayer::doMove(Model curModel) {
    Danger curDanger = searchForDanger(curModel.field, sign);

    if (curDanger == NO_DANGER) {
        std::pair <int, int> possibility = searchForPossibilities(curModel.field, sign);
        return {possibility.first, possibility.second};
    } else {
        switch (curDanger) {
            case LINE_1:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[0][i] == ' ') {
                        return {1, i + 1};
                    }
                }
                break;
            case LINE_2:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[1][i] == ' ') {
                        return {2, i + 1};
                    }
                }
                break;
            case LINE_3:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[2][i] == ' ') {
                        return {3, i + 1};
                    }
                }
                break;
            case COLUMN_1:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[i][0] == ' ') {
                        return {i + 1, 1};
                    }
                }
                break;
            case COLUMN_2:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[i][1] == ' ') {
                        return {i + 1, 2};
                    }
                }
                break;
            case COLUMN_3:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[i][2] == ' ') {
                        return {i + 1, 3};
                    }
                }
                break;
            case DIAGONAL_1:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[i][i] == ' ') {
                        return {i + 1, i + 1};
                    }
                }
                break;
            case DIAGONAL_2:
                for (int i = 0; i < 3; i++) {
                    if (curModel.field[2 - i][i] == ' ') {
                        return {3 - i, i + 1};
                    }
                }
                break;
            default:
                return {-1, -1};
        }
    }
    return {-1, -1};
}