#pragma once
#include "Player.h"
#include "Context.h"

class AI : public Player {
protected:
    std::pair <int, int> possibleMove;
    Model* tiedModel;

    virtual void analyseSituation() = 0;
public:
    explicit AI(Model *model) {
        tiedModel = model;
    }
    std::pair <int, int> doMove() override;
};
