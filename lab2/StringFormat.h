#pragma once
#include "EvaluatorException.h"

class StringFormatException : public EvaluatorException {
public:
    StringFormatException() : EvaluatorException(std::string{"Required only string literal!"}){};
};
