#pragma once

#include "EvaluatorException.h"

class WrongUsageException : public EvaluatorException {
public:
    WrongUsageException() : EvaluatorException(std::string{"Unknown command!"}){};
};
