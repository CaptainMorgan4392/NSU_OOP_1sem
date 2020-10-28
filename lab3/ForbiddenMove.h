#pragma once
#include "Exception.h"

class ForbiddenMoveException : public GameException {
public:
    ForbiddenMoveException() : GameException("Wrong move!") {};

    std::string what() override {
        return std::string(msg);
    }
};
