#pragma once

#include "Model.h"
#include "ImpossibleMoveException.h"
#include <utility>

class Controller {
public:
    bool updateRequest(std::pair <int, int> move, Model *model, char sign);
};