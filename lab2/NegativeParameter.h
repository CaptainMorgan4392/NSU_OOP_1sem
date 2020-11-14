#pragma once
#include "EvaluatorException.h"

class NegativeParameterException : public EvaluatorException {
public:
    NegativeParameterException() : EvaluatorException(std::string{"Square root must take non-negative parameter!"}){};
};