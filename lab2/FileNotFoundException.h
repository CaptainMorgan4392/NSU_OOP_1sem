#pragma once
#include "EvaluatorException.h"

class FileNotFoundException : public EvaluatorException {
public:
    FileNotFoundException() : EvaluatorException(std::string{"File not found!"}){};
};