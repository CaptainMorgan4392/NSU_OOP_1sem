#include "session.h"

void Session::Viewer::display(Model curModel) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << curModel.field[i][j];
            if (j < 2) {
                std::cout << "|";
            }
        }
        std::cout << std::endl;
        if (i < 2) {
            for (int j = 0; j < 5; ++j) {
                std::cout << "-";
            }
            std::cout << std::endl;
        }
    }
}

