#pragma once

enum States {
    IN_PROGRESS,
    X_WINS,
    O_WINS,
    DRAW
};

class Model {
    friend class Viewer;
    friend class Controller;

    States state;

    char field[3][3]{};
public:
    Model() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                field[i][j] = ' ';
            }
        }

        state = IN_PROGRESS;
    }

    bool isFree(int first, int second);

    bool isGameEnded();

    States getState();

    char getFrom(int i, int j);
};
