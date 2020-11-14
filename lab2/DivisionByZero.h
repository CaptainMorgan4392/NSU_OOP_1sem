#pragma once

#include "EvaluatorException.h"

class DivisionByZeroException : public EvaluatorException {
public:
    DivisionByZeroException() : EvaluatorException(std::string{"Division by zero!"}){};
};
