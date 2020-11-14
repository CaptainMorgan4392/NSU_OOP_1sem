#pragma once

#include "EvaluatorException.h"

class ForbiddenValueException : public EvaluatorException {
public:
    ForbiddenValueException() : EvaluatorException(std::string{"Allowed to push only defined string literals or double values!"}){};
};
