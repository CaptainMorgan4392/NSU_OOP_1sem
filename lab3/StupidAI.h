#pragma once
#include "AI.h"

class StupidAI : public AI {
    void analyseSituation() override;

public:
    explicit StupidAI(Model* model) :  AI(model){};
};