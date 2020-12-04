#pragma once
#include "AI.h"

class KillingAI : public AI {
    void analyseSituation() override;

public:
    explicit KillingAI(Model* model) :  AI(model){};
};
