#pragma once

#include "ImpossibleMoveException.h"
#include <iostream>
#include <list>


class Model;
class Viewer;
class Controller;

enum States {
    IN_PROGRESS,
    X_WINS,
    O_WINS,
    DRAW
};

enum Signs {
    MARKS,
    ZEROS
};

class Model {
    States state;

    char field[3][3]{};

    char curMove = 'x';

    std::list <Viewer> observers;

    void synchonize();

    void endGameIfOver();

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

    States getState();

    Signs getSign();

    void setTo(int i, int j);

    void setState(States state);

    bool isGameEnded();

    void addObserver(Viewer viewer);

    char getFrom(int i, int j);
};

class Viewer {
public:
    void display(Model model);
};

class Controller {
public:
    void updateRequest(std::pair <int, int> move, Model *model);
};

struct Context {
    Model model;
    Viewer viewer;
    Controller controller;
};
