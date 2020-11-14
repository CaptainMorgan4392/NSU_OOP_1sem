#include "EvaluatorException.h"

class OutOfParametersException : public EvaluatorException {
public:
    OutOfParametersException() : EvaluatorException(std::string{"Stack do not have elements to complete operation!"}){};
};