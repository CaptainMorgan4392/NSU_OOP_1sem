#pragma once
#include "Exception.h"

class ForbiddenChoiceException : public GameException {
public:
    ForbiddenChoiceException() : GameException("Wrong sign!") {};

    std::string what() override {
        return std::string(msg);
    }
};
