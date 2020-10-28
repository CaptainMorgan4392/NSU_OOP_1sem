#pragma once
#include <iostream>

class Session {
    struct CurrentMove {
        friend class Session;
        int line;
        int column;
    };

    class Player {
        friend class Session;
        char sign;

        CurrentMove doMove();
        void chooseSign();
    };

    class Model {
        friend class Session;
        char field[3][3];

        void fillTable();
        bool isEndOfGame();
        void update(CurrentMove move, char sign);
    };

    class BotPlayer {
        friend class Session;
        char sign;

        CurrentMove doMove(Model curModel);
    };

    class Controller {
        friend class Session;
        bool checkMove(CurrentMove move, Model curModel);
    };

    class Viewer {
        friend class Session;
        void display(Model curModel);
    };

    Player player;
    BotPlayer botPlayer;
    Controller controller;
    Viewer viewer;
    Model model;

public:
    void startSession();
};
