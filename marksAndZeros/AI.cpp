//
// Created by CaptainMorgan4392 on 05.12.2020.
//

#include "AI.h"

std::pair<int, int> AI::doMove() {
    analyseSituation();
    return possibleMove;
}

