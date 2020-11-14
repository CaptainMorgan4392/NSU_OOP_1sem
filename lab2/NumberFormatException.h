#pragma once
#include "EvaluatorException.h"

class NumberFormatException : public EvaluatorException {
public:
    NumberFormatException() : EvaluatorException(std::string{"Required only double value!"}){};
};
